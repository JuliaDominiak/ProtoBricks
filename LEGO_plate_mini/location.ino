int location() {
int c1[12];
int c2[12];

int c1_dec[12]={1000,1000,7,6,5,4,1000,1000,3,2,1,0};
int c2_dec[12]={12,13,14,15,1000,1000,8,9,10,11,1000,1000};

int t1=150;
int t2=150;

int loops=10;
int x=1000;
int y=1000;

for (uint8_t j=0; j<loops; j++) {

//CAP 1
  for (uint8_t i=0; i<12; i++) {
    if(cap1.filteredData(i)<t1) {c1[i]++;}
    else                        {c1[i]=0;}
  }

//CAP 2
  for (uint8_t i=0; i<12; i++) {
    if(cap2.filteredData(i)<t2) {c2[i]++;} 
    else                        {c2[i]=0;}
  }

/////////////////////////////////  
}

  for (uint8_t n=0; n<12; n++) {
    if (c1[n]==loops) {x=c1_dec[n];}
    if (c2[n]==loops) {x=c2_dec[n];}
    c1[n]=0;
    c2[n]=0;
  }
  
return x;
}
