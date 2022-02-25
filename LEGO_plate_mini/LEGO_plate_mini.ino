#include <Wire.h>
#include "Adafruit_MPR121.h"
#include "Adafruit_TCS34725.h"

Adafruit_MPR121 cap1 = Adafruit_MPR121();
Adafruit_MPR121 cap2 = Adafruit_MPR121();
Adafruit_TCS34725 tcs = Adafruit_TCS34725(TCS34725_INTEGRATIONTIME_50MS, TCS34725_GAIN_4X);

int color;
bool remov;

void setup() {

pinMode(8, INPUT_PULLUP);
pinMode(10, INPUT_PULLUP);

Serial.begin(115200);
Serial.println("Program Start");

while (!Serial) { 
    delay(10);
}

MPR_con();  

tcs.setInterrupt(true);
}

void loop() {
  remov = digitalRead(10);
  if(digitalRead(8) == LOW)
  {
  color = color_det();  
  }
  //cap1_print();
  //cap2_print();
int q = location();
  //Serial.println(q);
if (q!=1000){
  dec(q);
  Serial.print(", ");
  Serial.print(color);
  Serial.print(", ");
  Serial.println(remov);
}
delay(500);


}
