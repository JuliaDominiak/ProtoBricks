int b_close = 904*4;
int b_open = 1504*4;
int t_hold = 1800*4;
int t_open = 875*4;

int count_A = 10;
int count_B = 10;
int count_C = 10;
int count_D = 10;

int top_servo_A = 0;
int bottom_servo_A = 3;
int top_servo_B = 1;
int bottom_servo_B = 4;
int top_servo_C = 2;
int bottom_servo_C = 5;
int top_servo_D = 2;
int bottom_servo_D = 5;

bool load = 0;
int brick_delay = 300;
int i=0;

int brick[4] = {};
char numbers[12];
char delimiters[] = ",";
String text;
char *ptr;
int n = 0;

int b_A=0;
int b_B=0;
int b_C=0;
int b_D=0;

#include <PololuMaestro.h>
#include <SoftwareSerial.h>
SoftwareSerial maestroSerial(10, 11);
MiniMaestro maestro(maestroSerial);

void setup()
{
  maestroSerial.begin(9600);
  Serial.begin(9600);
  
  Serial.println("set servo - start");
  
  maestro.setTarget(bottom_servo_A, b_open);
  maestro.setTarget(top_servo_A, t_open);
  maestro.setTarget(bottom_servo_B, b_open);
  maestro.setTarget(top_servo_B, t_open);
  maestro.setTarget(bottom_servo_C, b_open);
  maestro.setTarget(top_servo_C, t_open);
  maestro.setTarget(bottom_servo_D, b_open);
  maestro.setTarget(top_servo_D, t_open);
  
  while(i==0) {
    if(Serial.available() > 0) { 
      text = Serial.readStringUntil('\n');
      Serial.print("comand - ");
      Serial.println(text);
    }
    if(text == "done") {i=1;}
  }

  Serial.println("set servo - done");
  text="";
  maestro.setTarget(bottom_servo_A, b_close);
  maestro.setTarget(bottom_servo_B, b_close);
  maestro.setTarget(bottom_servo_C, b_close);
  maestro.setTarget(bottom_servo_D, b_close);
  delay(1000);
}

void loop()
{ 
  if(Serial.available() > 0) { 
    n=0;
    text = Serial.readStringUntil('\n');
    Serial.print("comand - ");
    Serial.println(text);

    if(text != "load"){
      text.toCharArray(numbers, 8);
      ptr = strtok(numbers, delimiters);
   
      while (ptr != NULL) {
        brick[n] = atoi(ptr);
        Serial.print("bricks[");
        Serial.print(n);
        Serial.print("] = ");
        Serial.println(brick[n++]);
        ptr = strtok(NULL, delimiters);
      }
     b_A=brick[0];
     b_B=brick[1];
     b_C=brick[2]; 
     b_D=brick[3]; 
        Serial.println(brick[0]);
        Serial.println(brick[1]);
        Serial.println(brick[2]);
        Serial.println(brick[3]);
    text="";
    }
  }

  if(text == "load"){load = 1; text="";}

  while((b_A!=0)||(b_B!=0)||(b_C!=0)||(b_D!=0)) {
    if(b_A!=0 && load==1){
    fun_brick_A();
    b_A--; 
    Serial.println("A");
  }
    if(b_B!=0 && load==1){
    fun_brick_B();
    b_B--; 
    Serial.println("B");
  }
    if(b_C!=0 && load==1){
    fun_brick_C();
    b_C--; 
    Serial.println("C");
  }
    if(b_D!=0 && load==1){
    fun_brick_D();
    b_D--; 
    Serial.println("D");
  }
}
}

void fun_brick_A(){    
  delay(brick_delay);
  maestro.setTarget(top_servo_A, t_hold);
  delay(brick_delay);
  maestro.setTarget(bottom_servo_A, b_open);
  delay(brick_delay);
  maestro.setTarget(bottom_servo_A, b_close);
  delay(brick_delay);
  maestro.setTarget(top_servo_A, t_open);
  delay(brick_delay);
}

void fun_brick_B(){    
  delay(brick_delay);
  maestro.setTarget(top_servo_B, t_hold);
  delay(brick_delay);
  maestro.setTarget(bottom_servo_B, b_open);
  delay(brick_delay);
  maestro.setTarget(bottom_servo_B, b_close);
  delay(brick_delay);
  maestro.setTarget(top_servo_B, t_open);
  delay(brick_delay);
}

void fun_brick_C(){    
  delay(brick_delay);
  maestro.setTarget(top_servo_C, t_hold);
  delay(brick_delay);
  maestro.setTarget(bottom_servo_C, b_open);
  delay(brick_delay);
  maestro.setTarget(bottom_servo_C, b_close);
  delay(brick_delay);
  maestro.setTarget(top_servo_C, t_open);
  delay(brick_delay);
}

void fun_brick_D(){    
  delay(brick_delay);
  maestro.setTarget(top_servo_D, t_hold);
  delay(brick_delay);
  maestro.setTarget(bottom_servo_D, b_open);
  delay(brick_delay);
  maestro.setTarget(bottom_servo_D, b_close);
  delay(brick_delay);
  maestro.setTarget(top_servo_D, t_open);
  delay(brick_delay);
}
