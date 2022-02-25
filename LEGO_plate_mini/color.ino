int color_det() {
  float red, green, blue;
  String co="non";
  int c;
      tcs.setInterrupt(false);  // turn on LED
      delay(100);
      //Serial.print("Push");
      //Serial.print("\n");
       for(int i = 0; i<1; i++)
       {
       tcs.getRGB(&red, &green, &blue);
       if(110<red && red<140 && 55<green && green<69 && 52<blue && blue<65)
       {
        co = "red";
        c=1;
       }
       if(35<red && red<50 && 80<green && green<89 && 108<blue && blue<125)
       {
        co = "blue";
        c=2;       
       }
       if(63<red && red<75 && 85<green && green<95 && 83<blue && blue<90)
       {
        co = "grey";
        c=3;
       }
       if(100<red && red<130 && 69<green && green<84 && 42<blue && blue<58)
       {
        co = "orange";
        c=4;
       }
       if(75<red && red<101 && 90<green && green<110 && 49<blue && blue<75)
       {
        co = "yellow";
        c=5;
       }
       delay(1000); 
       /*
       Serial.print("R:\t"); Serial.print(int(red)); 
       Serial.print("\tG:\t"); Serial.print(int(green)); 
       Serial.print("\tB:\t"); Serial.print(int(blue));
       Serial.print(" - ");
       Serial.print(co);
       Serial.print("\n");
       */
       }
     tcs.setInterrupt(true);  // turn off LED
  return c;
}
