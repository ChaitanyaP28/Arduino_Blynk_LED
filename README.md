# Arduino_Blynk_LED

## Control of LED from anywhere in the world Using Blynk.

## Components:
- Arduino
- BreadBoard
- USB cable
- Red Green Blue LEDs
- 1k Resistor
- Wires

## Softwares:
- Arduino-nightly
- Python

## Extra Libraries:
- Python:
  1. Requests
  2. Numpy
  3. Pyserial
  
## Pins:
- PIN 11 – Red LED
- PIN 9 – Green LED
- PIN 10 – Blue LED
- PIN GND – Ground

## Circuit Diagram:
![image](https://github.com/user-attachments/assets/cad809bc-7245-4e41-8f90-cf79dcba084d)

## Connections:
Connect the +ve end of the red led to pin 11 then connect the +ve end of the blue led to pin 10 then connect +ve end of the green led to pin 9. Take all the grounds common and connect to a 1k ohm resistor. Now connect the other end of the resistor to GND pin on the Arduino.

## How to Run:
- Build up the circuit
- Dump Arduino code on Arduino UNO
- Open https://blynk.cloud/
- Login into Blynk cloud / Create an account if you don’t have one
- Once the account is created you can cancel the QuickStart Guide.
- Now open Template and create a new template

![image](https://github.com/user-attachments/assets/8f7f9aa2-b52e-4045-9ca1-c6d43b1c4656)

- As we are not using the wifi module. So keep the settings as shown
in the image.
- Now open DataStreams and make new datastream and select Virtual
Pin and enter the following

![image](https://github.com/user-attachments/assets/2e274141-0895-460f-93a4-8c99d43b29e5)
![image](https://github.com/user-attachments/assets/9cb8985a-edc4-46ef-bdb3-ea0546b19093)

- Make 2 more Datastreams for Green and Blue Pin and set their pins
to V1 and V2.
- Now click save on the right side top corner.
- Now click on the search button on the left bar then click on Create
New Device.

![image](https://github.com/user-attachments/assets/7249d000-3715-40e4-8b13-45d457ba021d)

- Then select From Template.
- Then Type Your Template name (LED PROJECT in this case) and click create.
- Now Copy down your BLYNK_AUTH_TOKEN.
- To check if everything is working correctly
- **TO CHANGE THE PIN VALUES**
  https://blynk.cloud/external/api/update?token=**<YOUR_TOKEN>**&**<PIN>=<PIN_VALUE>**

  - where **YOUR_TOKEN** is your **BLYNK_AUTH_TOKEN**.
  - **PIN** is the pin entered for Red Green Blue (V0,V1,V2 in this case)
  - **PIN_VALUE** is the value to be entered to the pin (0 or 1)
  
  **SET VALUES TO ALL THE PINS ie (V0 V1 V2) to 0**
  
- **NOW TO CHECK IF THE DATA IS UPDATED**
  https://blynk.cloud/external/api/get?token=**<YOUR_TOKEN>**&**<PIN>**
  **CHECK FOR ALL THE PINS IF THE DATA IS 0**

- Now open the Python file and replace paste your **BLYNK_AUTH_TOKEN** after token=**<YOUR_TOKEN>**
- Now run the python code
- Now you can change the values by using the CHANGE PIN URL and the LED will glow accordingly.
- You can also control from your phone using the BLYNK IOT app.

- **After you are done:**
- Close the Python IDLE (press Ctrl+C or click on the X button)
- Next you can delete your device in the blynk cloud. To make space for new projects.

![image](https://github.com/user-attachments/assets/fcc5ce39-bcb2-4166-9a1a-4f98d3d71480)

- REMEMBER: you can only make 2 devices as part of the free plan

## Installing Libraries:
- Open CMD and type the following:
  1. pip install numpy
  2. pip install pyserial
  3. pip install requests
