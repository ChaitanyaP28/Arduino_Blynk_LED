#INCLUDING LIBRARIES
from datetime import datetime
import time
import requests
import json
import numpy as np
import serial

#READ VALUES OF LED FROM BLYNK SERVER
#Change Token to Your blynk token
def Read(V):
    token="w8lRVrjIOqHQQ8XrSZSOhHeDEIxQptRa"
    read ="https://blynk.cloud/external/api/get?token="+token+"&"+V
    read =requests.request("GET",read)
    read = json.loads(read.text)
    return read

#Set port to arduino connected Port
arduino = serial.Serial(port='COM4', baudrate=115200, timeout=.1)
def write_read(x):
    arduino.write(bytes(x,'utf-8'))
    data = arduino.readline()
    return data

while(1):
    Red=Read("v0")
    Green=Read("v1")
    Blue=Read("v2")
    #Sending values of RGB to Arduino
    value = write_read(str(Red)+str(Green)+str(Blue))
    print("RGB : ",str(Red)+str(Green)+str(Blue))
    time.sleep(0.5)
