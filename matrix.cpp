int pin_7=7;
int pin_8=8;
int pin_11=11;
int pin_12=12;

void setup() {
	pinMode(pin_7,OUTPUT);
  	pinMode(pin_8,OUTPUT);
  	pinMode(pin_11,OUTPUT);
  	pinMode(pin_12,OUTPUT);
}
void switch_pins(int pin_7s,int pin_8s,int pin_11s,int pin_12s){
digitalWrite(pin_7, pin_7s);
digitalWrite(pin_8, pin_8s);
digitalWrite(pin_11, pin_11s);
digitalWrite(pin_12, pin_12s);  
}
void reset_pins(){
digitalWrite(pin_7, LOW);
digitalWrite(pin_8, LOW);
digitalWrite(pin_11, LOW);
digitalWrite(pin_12, LOW);  
}

void loop() {
//1
switch_pins(HIGH,LOW,LOW,HIGH);
delay(100);
reset_pins();
delay(2000);
//2
switch_pins(HIGH,LOW,HIGH,LOW);
delay(100);
reset_pins();
delay(2000);
//3
switch_pins(LOW,HIGH,LOW,HIGH);
delay(100);
reset_pins();
delay(2000);
//4
switch_pins(LOW,HIGH,HIGH,LOW);
delay(100);
reset_pins();
delay(2000);
//1,2
switch_pins(HIGH,LOW,LOW,HIGH);
delay(100);
switch_pins(HIGH,LOW,HIGH,LOW);
delay(100);
reset_pins();
delay(2000);
//3,4
switch_pins(LOW,HIGH,LOW,HIGH);
delay(100);
switch_pins(LOW,HIGH,HIGH,LOW);
delay(100);
reset_pins();
delay(2000);
//1,3
switch_pins(HIGH,LOW,LOW,HIGH);
delay(100);
switch_pins(LOW,HIGH,LOW,HIGH);
delay(100);
reset_pins();
delay(2000);
//2,4
switch_pins(HIGH,LOW,HIGH,LOW);
delay(100);
switch_pins(LOW,HIGH,HIGH,LOW);
delay(100);
reset_pins();
delay(2000);
//1,4
switch_pins(HIGH,LOW,LOW,HIGH);
delay(100);
switch_pins(LOW,HIGH,HIGH,LOW);
delay(100);
reset_pins();
delay(2000);
//2,3
switch_pins(HIGH,LOW,HIGH,LOW);
delay(100);
switch_pins(LOW,HIGH,LOW,HIGH);
delay(100);
reset_pins();
delay(2000);
//1,2,3
switch_pins(HIGH,LOW,LOW,HIGH);
delay(100);
switch_pins(HIGH,LOW,HIGH,LOW);
delay(100);
switch_pins(LOW,HIGH,LOW,HIGH);
delay(100);
reset_pins();
delay(2000);
//2,3,4
switch_pins(HIGH,LOW,HIGH,LOW);
delay(100);
switch_pins(LOW,HIGH,LOW,HIGH);
delay(100);
switch_pins(LOW,HIGH,HIGH,LOW);
delay(100);
reset_pins();
delay(2000);
//3,4,1
switch_pins(LOW,HIGH,LOW,HIGH);
delay(100);
switch_pins(LOW,HIGH,HIGH,LOW);
delay(100);
switch_pins(HIGH,LOW,LOW,HIGH);
delay(100);
reset_pins();
delay(2000);
//4,1,2
switch_pins(LOW,HIGH,HIGH,LOW);
delay(100);
switch_pins(HIGH,LOW,LOW,HIGH);
delay(100);
switch_pins(HIGH,LOW,HIGH,LOW);
delay(100);
reset_pins();
delay(2000);
//1,2,3,4
switch_pins(HIGH,LOW,LOW,HIGH);
delay(100);
switch_pins(HIGH,LOW,HIGH,LOW);
delay(100);
switch_pins(LOW,HIGH,LOW,HIGH);
delay(100);
switch_pins(LOW,HIGH,HIGH,LOW);
delay(100);
reset_pins();
delay(2000);
//ни одного
switch_pins(LOW,LOW,LOW,LOW);
delay(100);
reset_pins();
delay(2000);

}