void MPR_con() {

if (!cap1.begin(0x5C)) {
  Serial.println("1 not found, check wiring?");
  } else {
  Serial.println("1 found!");}
  
if (!cap2.begin(0x5A)) {
  Serial.println("2 not found, check wiring?");
  } else {
  Serial.println("2 found!");}
  
if (tcs.begin()) {
    Serial.println("Found color sensor");
  } else {
    Serial.println("No TCS34725 found ... check your connections");
    while (1); // halt!
  }
}
