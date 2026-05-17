int echopin=7;
int trigpin=2;
int relaypin=8;

void setup() {
pinMode(echopin,INPUT);
pinMode(trigpin,OUTPUT);
pinMode(relaypin,OUTPUT); // controls pump
}

void loop() {
digitalWrite(trigpin,LOW);
delayMicroseconds(2);
digitalWrite(trigpin,HIGH);
delayMicroseconds(10);
digitalWrite(trigpin,LOW);

long duration=pulseIn(echopin,HIGH);
long distance=duration*0.0342/2;

if(distance < 10 ){
digitalWrite(relaypin,HIGH);
}else{
  digitalWrite(relaypin,LOW);
  
}
























}
