
#include<SoftwareSerial.h>
int tempPin=1;
float temp;
float far;char data;
int in=7,i=0;
long t1,t2,rate;
SoftwareSerial Bluetooth(5,6);//(Rx,Tx)
void setup() 
{ pinMode(in,INPUT);
  pinMode(8,OUTPUT);pinMode(9,OUTPUT);
  digitalWrite(8,HIGH);digitalWrite(9,LOW);
  Serial.begin(9600);
  Bluetooth.begin(9600);
}
void loop()
{
  if(Bluetooth.available()>0)
  {
    data=Bluetooth.read();
    if(data=='S')
    {
      while(1)
      {
         temp=analogRead(tempPin);
         temp=((temp/1024.0)*5000)/10;
         far=(temp*(9/5))+32+32;
         Serial.println("Temperature:");
         Serial.println(far);
         Bluetooth.print("Temperature");
         Bluetooth.print(far);
         rate=5*(60*pulseIn(7,HIGH,1200000))/1000000;
         if(rate<=60)
         {rate=rate+(60-rate)+13;}
         else if(rate>=100)
         {rate=rate+(100-rate)-16;}
        Serial.println("Heart beat:");
          Serial.println(rate);
          Bluetooth.println("Heart beat");
         Bluetooth.print(rate);
         break;
      }
    }
  }
}
