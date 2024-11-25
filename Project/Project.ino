String x;		//Variable to recieve data from Python
int Red_Pin= 11;	//RED LED
int Green_Pin = 9;	//GREEN LED
int Blue_Pin = 10;	//BLUE LED

void setup() 
{
  Serial.begin(115200);
  Serial.setTimeout(1);
  pinMode(Red_Pin, OUTPUT);
  pinMode(Green_Pin, OUTPUT);
  pinMode(Blue_Pin, OUTPUT);
}

void loop() 
{
  while (!Serial.available());
  x = Serial.readString();
//RED LED
  if(x[0]=='1')
    analogWrite(Red_Pin, 255);
  else
    analogWrite(Red_Pin, 0);
//GREEN LED
  if(x[1]=='1')
    analogWrite(Green_Pin, 255);
  else
    analogWrite(Green_Pin, 0);
//BLUE LED
  if(x[2]=='1')
    analogWrite(Blue_Pin, 255);
  else
    analogWrite(Blue_Pin, 0);
  Serial.print(x);
  delay(750);
}
