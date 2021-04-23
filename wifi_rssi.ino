#include<WiFi.h>

long rssi;
void setup()
{
  pinMode(2,OUTPUT);
  Serial.begin(115200);
  WiFi.mode(WIFI_STA);
  yield();
  WiFi.begin("sunil","8790225440");
  delay(10);
  while(WiFi.status()!=WL_CONNECTED)
  { Serial.print("*");  }
  if(WiFi.status()==3)
  { Serial.println("Connected");  }
}


void loop()
{
rssi=WiFi.RSSI(); // rssi = Received Signal Strength Indicator
Serial.println(rssi); // prints wifi signal strength
//delay(1000);
if(rssi>-35 && rssi<-15)
{
  Serial.println("signal Strength is strong");
  digitalWrite(2,LOW);
  delay(500);
  digitalWrite(2,HIGH);
  delay(500);
  
}
if(rssi>-50 && rssi<-35)
{
  Serial.println("signal Strength is Good");
  digitalWrite(2,LOW);
  delay(1000);
  digitalWrite(2,HIGH);
  delay(1000);  
}
if(rssi>-60 && rssi<-55)
{
  Serial.println("signal Strength is Reliable");
  digitalWrite(2,LOW);
  delay(1000);
  digitalWrite(2,HIGH);
  delay(1000);  
}

if(rssi>-67 && rssi<-60)
{
  Serial.println("signal Strength is OK");
  digitalWrite(2,LOW);
  delay(1000);
  digitalWrite(2,HIGH);
  delay(1000);  
}

if(rssi>-70 && rssi<-67)
{
  Serial.println("signal Strength is Weak");
  digitalWrite(2,LOW);
  delay(1000);
  digitalWrite(2,HIGH);
  delay(1000);  
}


if(rssi< -70)
{
  Serial.println("signal Strength is poor");
  digitalWrite(2,LOW);
  delay(1000);
  digitalWrite(2,HIGH);
  delay(1000);  
}


}
