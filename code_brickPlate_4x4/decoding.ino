void dec(int d) {

char plate_LEGO_l[16]={
  '1','1','1','1',
  '2','2','2','2',
  '3','3','3','3',
  '4','4','4','4'
  };
  
char plate_LEGO_n[16]={
  '1','2','3','4',
  '1','2','3','4',
  '1','2','3','4',
  '1','2','3','4'
  };

  Serial.print(plate_LEGO_l[d]);
  Serial.print(", ");
  Serial.print(plate_LEGO_n[d]);

}
