#define SERIAL_DATA 2
#define SERIAL_CLOCK 3
#define ONBOARD_LED 13
#define pushButton1 23

void setup() {

pinMode(ONBOARD_LED, OUTPUT);
pinMode(SERIAL_DATA, INPUT);
pinMode(SERIAL_CLOCK, INPUT);
pinMode(pushButton1, INPUT);

}

void loop() {

if(digitalRead(pushButton1) == LOW){
  digitalWrite(ONBOARD_LED, HIGH);
}
else digitalWrite(ONBOARD_LED, LOW);

}
