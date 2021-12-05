#define rotary1B      13      //rotary1 counter-clockwise, B - C connect first          
#define rotary1A      12      //rotary1 clockwise, A - C connect first
#define pushButton1   23      //pushbutton for rotary1

#define ONBOARD_LED   13

byte rotary1Home = 0;

void setup() {

pinMode(ONBOARD_LED, OUTPUT);
pinMode(rotary1A, INPUT);
pinMode(rotary1B, INPUT);
pinMode(pushButton1, INPUT);

}

void loop() {

}

//with the encoder, I want to be able to recognize which direction I'm turning the dial.
//the direction I turn the dial will increment a parameter up or down. 

bool rotary1Direction (){
  byte initPos = 0;
  //byte
}
