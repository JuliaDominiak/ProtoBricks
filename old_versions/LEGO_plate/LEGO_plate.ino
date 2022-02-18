#include <Wire.h>
#include "Adafruit_MPR121.h"
#include "Adafruit_TCS34725.h"

#define TCAADDR 0x70

Adafruit_MPR121 cap1 = Adafruit_MPR121();
Adafruit_MPR121 cap2 = Adafruit_MPR121();
Adafruit_MPR121 cap3 = Adafruit_MPR121();
Adafruit_MPR121 cap4 = Adafruit_MPR121();
Adafruit_MPR121 cap5 = Adafruit_MPR121();
Adafruit_MPR121 cap6 = Adafruit_MPR121();
Adafruit_TCS34725 tcs = Adafruit_TCS34725(TCS34725_INTEGRATIONTIME_50MS, TCS34725_GAIN_4X);

String color = "brak";

void tcaselect(uint8_t i) {
  if (i > 7) return;
 
  Wire.beginTransmission(TCAADDR);
  Wire.write(1 << i);
  Wire.endTransmission();  
}

void setup() {


pinMode(6, INPUT_PULLUP);

Serial.begin(115200);
Serial.println("Program Start");
while (!Serial) { 
    delay(10);
}

MPR_con();  

tcaselect(2);
tcs.setInterrupt(true);
}

void loop() {
float red, green, blue;
  

//cap1_print();
int q = location();
  //Serial.println(q);
if (q!=1000){
  dec(q);
  Serial.print(" ");
  Serial.println(color);
}
delay(500);

tcaselect(2);
if(digitalRead(6) == LOW)
  {
      tcs.setInterrupt(false);  // turn on LED
      delay(100);
      Serial.print("Jestem wcisniety");
      Serial.print("\n");
      for(int i = 0; i<1; i++)
     {
       tcs.getRGB(&red, &green, &blue);
       if(115<red && red<150 && 58<green && green<70 && 55<blue && blue<66)
       {
        color = "red";
       }
       if(45<red && red<50 && 85<green && green<90 && 110<blue && blue<125)
       {
        color = "blue";       
       }
       if(70<red && red<78 && 90<green && green<100 && 85<blue && blue<95)
       {
        color = "grey";
       }
       if(100<red && red<120 && 73<green && green<100 && 50<blue && blue<60)
       {
        color = "orange";
       }
       if(75<red && red<95 && 90<green && green<100 && 55<blue && blue<70)
       {
        color = "yellow";
       }
       delay(1000); 
       Serial.print("R:\t"); Serial.print(int(red)); 
       Serial.print("\tG:\t"); Serial.print(int(green)); 
       Serial.print("\tB:\t"); Serial.print(int(blue));
       Serial.print(color);
       Serial.print("\n");
     }
     tcs.setInterrupt(true);  // turn off LED
  }
}
