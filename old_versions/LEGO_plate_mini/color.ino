String color_det() {
  float red, green, blue;
  String c;
  if(digitalRead(8) == LOW)
  {
      tcs.setInterrupt(false);  // turn on LED
      delay(100);
      Serial.print("Jestem wcisniety");
      Serial.print("\n");
      for(int i = 0; i<1; i++)
     {
       tcs.getRGB(&red, &green, &blue);
       if(100<red && red<120 && 65<green && green<80 && 63<blue && blue<75)
       {
        c = "red";
       }
       if(1<red && red<12 && 7<green && green<8 && 6<blue && blue<7)
       {
        c = "blue";       
       }
       if(70<red && red<75 && 90<green && green<95 && 80<blue && blue<90)
       {
        c = "grey";
       }
       if(90<red && red<110 && 75<green && green<95 && 60<blue && blue<75)
       {
        c = "orange";
       }
       if(72<red && red<90 && 90<green && green<100 && 63<blue && blue<80)
       {
        c = "yellow";
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
  else {c="brak";}
  return c;
}
