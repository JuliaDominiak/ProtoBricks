void dec(int d) {

char plate_LEGO_l[16]={
  'A','A','A','A',
  'B','B','B','B',
  'C','C','C','C',
  'D','D','D','D'
  };
  
char plate_LEGO_n[16]={
  '1','2','3','4',
  '1','2','3','4',
  '1','2','3','4',
  '1','2','3','4'
  };

  Serial.print(plate_LEGO_l[d]);
  Serial.print(plate_LEGO_n[d]);

}
