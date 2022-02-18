void MPR_con() {
tcaselect(0);
if (!cap1.begin(0x5C)) {
  Serial.println("1 not found, check wiring?");
  }
  Serial.println("1 found!");
  
tcaselect(0);
if (!cap2.begin(0x5B)) {
  Serial.println("2 not found, check wiring?");
  }
  Serial.println("2 found!");
  
tcaselect(0);
if (!cap3.begin(0x5D)) {
  Serial.println("3 not found, check wiring?");
  }
  Serial.println("3 found!");
  
tcaselect(0);
if (!cap4.begin(0x5A)) {
  Serial.println("4 not found, check wiring?");
  }
  Serial.println("4 found!");

//////////////////////////////////////////////////////

tcaselect(1);
if (!cap5.begin(0x5C)) {
  Serial.println("5 not found, check wiring?");
  }
  Serial.println("5 found!");
  
tcaselect(1);
if (!cap6.begin(0x5A)) {
  Serial.println("6 not found, check wiring?");
  }
  Serial.println("6 found!");



tcaselect(2);



if (tcs.begin()) {
    Serial.println("Found color sensor");
  } else {
    Serial.println("No TCS34725 found ... check your connections");
    while (1); // halt!
  }
}
