char ReceiveData=0;
int n[50];
int x=-1;
int y=0;
int SYS=0;
int DIA=0;
int H_R=0;
int DAY=0;
#include<SoftwareSerial.h>
SoftwareSerial Bluetooth(19,18);//(Rx,Tx)

void setup() 
{  
Serial.begin(9600);
Bluetooth.begin(9600);
}

void loop() 
{
  Get_Data();

}

void Get_Data()
{
  if(Serial.available())
  {
    ReceiveData=Serial.read();
    x++;
  }
  n[x]=ReceiveData;
  if(x>9)
  {
    SYS = (((n[0]-48)*100) + ((n[1]-48)*10) + (n[2]-48));
    DIA = (((n[3]-48)*100) + ((n[4]-48)*10) + ((n[5]-48)*1));
    H_R = (((n[6]-48)*100) + ((n[7]-48)*10) + (n[8]-48) );
    DAY = (((n[9]-48)*10) + ((n[10]-48)) );
    Serial.print("SYS = ");
    Serial.print( SYS );
    Serial.println("DIA = ");
    Serial.print( DIA );
    Serial.println("H.R = ");
    Serial.print(H_R);
    Serial.println("PULSE/Min");
    Bluetooth.print("SYS = ");
    Bluetooth.print( SYS );
    Bluetooth.println("DIA = ");
    Bluetooth.print( DIA );
    Bluetooth.println("H.R = ");
    Bluetooth.print(H_R);
    x=-1;
  }
}

