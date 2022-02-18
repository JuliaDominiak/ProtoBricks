int location() {
int c1[12];
int c2[12];
int c3[12];
int c4[12];
int c5[12];
int c6[12];

int t1=100;
int t2=100;
int t3=100;
int t4=100;
int t5=100;
int t6=100;

int loops=10;
int x=1000;

for (uint8_t j=0; j<loops; j++) {

//CAP 1
tcaselect(0);
  for (uint8_t i=0; i<12; i++) {
    if(cap1.filteredData(i)<t1) {c1[i]++;}
    else                        {c1[i]=0;}
  }

//CAP 2
tcaselect(0);
  for (uint8_t i=0; i<12; i++) {
    if(cap2.filteredData(i)<t2) {c2[i]++;} 
    else                        {c2[i]=0;}
  }

//CAP 3
tcaselect(0);
  for (uint8_t i=0; i<12; i++) {
    if(cap3.filteredData(i)<t3) {c3[i]++;}
    else                        {c3[i]=0;}
  }

//CAP 4
tcaselect(0);
  for (uint8_t i=0; i<12; i++) {
    if(cap4.filteredData(i)<t4) {c4[i]++;}
    else                        {c4[i]=0;}
  }

//CAP 5
tcaselect(1);
  for (uint8_t i=0; i<12; i++) {
    if(cap5.filteredData(i)<t5) {c5[i]++;}
    else                        {c5[i]=0;}
  }

//CAP 6
tcaselect(1);
  for (uint8_t i=0; i<12; i++) {
    if(cap6.filteredData(i)<t6) {c6[i]++;}
    else                        {c6[i]=0;}
  }
/////////////////////////////////  
}

  for (uint8_t n=0; n<12; n++) {
    if (c1[n]==loops) {x=11-n;}
    if (c2[n]==loops) {x=23-n;}
    if (c3[n]==loops) {x=35-n;}
    if (c4[n]==loops) {x=47-n;}
    if (c5[n]==loops) {x=59-n;}
    if (c6[n]==loops) {x=71-n;}
    c1[n]=0;
    c2[n]=0;
    c3[n]=0;
    c4[n]=0;
    c5[n]=0;
    c6[n]=0;
  }
  
return x;
}
