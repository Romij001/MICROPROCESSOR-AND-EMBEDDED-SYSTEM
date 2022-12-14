int LED1 = 13;
int LED2 = 12;
int LED3 = 11;
int LED4 = 10;
int LED5 = 9;
int LED6 = 8;
int PIR1 = 7;
int PIR2 = 6;

void setup() {

// initialize digital pin 3 as an output for LED

pinMode(LED1, OUTPUT);
pinMode(LED2, OUTPUT);
pinMode(LED3, OUTPUT);
pinMode(LED4, OUTPUT);
pinMode(LED5, OUTPUT);
pinMode(LED6, OUTPUT);

//initialize digital pin 10 as input for PIR

pinMode(PIR1, INPUT);
pinMode(PIR2, INPUT);
Serial.begin(9600);

//initialization time for PIR sensor to warm up
//blink LED to show that something is happening

}

void loop() {

//read PIR sensor, if High light LED for 5 seconds

//if low, check again

if(digitalRead(PIR1) == HIGH) {
  Serial.println("Motion1 detected");
digitalWrite(LED1, HIGH);
digitalWrite(LED2, HIGH);
digitalWrite(LED3, HIGH);
delay(5000);
} 
else if(digitalRead(PIR2) == HIGH){
  Serial.println("Motion2 detected");
digitalWrite(LED4, HIGH);
digitalWrite(LED5, HIGH);
digitalWrite(LED6, HIGH);
delay(5000);
}
else {
  Serial.println("No Motion detected");
digitalWrite(LED1, LOW);
digitalWrite(LED2, LOW);
digitalWrite(LED3, LOW);
digitalWrite(LED4, LOW);
digitalWrite(LED5, LOW);
digitalWrite(LED6, LOW);
delay(1);
}

}
