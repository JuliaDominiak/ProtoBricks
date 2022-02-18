void cap6_print() {
  tcaselect(1);
  
Serial.print("Filt: ");
  for (uint8_t i=0; i<12; i++) {
    Serial.print(cap6.filteredData(i)); Serial.print("\t");
  }

Serial.println();
delay(500);

}
