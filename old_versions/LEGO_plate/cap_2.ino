void cap2_print() {
  tcaselect(0);
  
Serial.print("Filt: ");
  for (uint8_t i=0; i<12; i++) {
    Serial.print(cap2.filteredData(i)); Serial.print("\t");
  }
  
Serial.println();
delay(500);

}
