int clockpin = 7;
int datapin = 6;
int latchpin = 5;
byte leds = 0;
void setup() {
  // put your setup code here, to run once:
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
leds = 0b10101010;
updateshiftREgister();
delay(100);
leds = 0b01010101;
updateshiftREgister();
delay(100);
}
void updateshiftREgister() {
  digitalWrite(latchpin,0);
  shiftOut(datapin,clockpin,MSBFIRST,leds);
  digitalWrite(latchpin,1);
}
