void setup() {
  // put your setup code here, to run once:
pinMode(1,OUTPUT);
pinMode(3,OUTPUT);
pinMode(5,OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:

int d = 1000;
digitalWrite(1,1);
digitalWrite(3,0);
digitalWrite(5,0);
delay(d);
digitalWrite(1,1);
digitalWrite(3,1);
delay(d);
digitalWrite(3,0);
delay(d);
digitalWrite(3,1);
delay(d);
  digitalWrite(3,0);
delay(d);
digitalWrite(3,1);
delay(d);
digitalWrite(3,0);
digitalWrite(1,0);
    
digitalWrite(5,1);
delay(d);

digitalWrite(5,1);
delay(d);


}
