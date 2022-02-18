void cap1_print() {
  tcaselect(0);
  
Serial.print("Cap1: ");
  for (uint8_t i=0; i<12; i++) {
    Serial.print(cap1.filteredData(i)); Serial.print("\t");
  }
  
Serial.println();
delay(500);

}
