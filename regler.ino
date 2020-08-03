int analogPin;
int stickValue;  
float steps;

int led1;
int led2;
int led3;
int led4;
int led5;
int led6;

void setup() {
  
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);

  stickValue = 0;
  analogPin = A2;
  
  Serial.begin(9600);     
}

void loop() {

	stickValue = analogRead(analogPin) >> 7;  

	//Serial.println(stickValue);
	
	switch(stickValue) {

		case 0: 

			setPhase(0,0,0,0,0,0);

		break;

		case 1: 

			setPhase(1,0,0,0,0,0);
		break;

		case 2: 

			setPhase(1,1,0,0,0,0);
		break;

		case 3: 

			setPhase(1,1,1,0,0,0);
		break;

		case 4: 

			setPhase(1,1,1,1,0,0);
		break;

		case 5: 

			setPhase(1,1,1,1,1,0);
		break;

		case 6: 

			setPhase(1,1,1,1,1,1);
		break;
		}
}

void setPhase(int one, int two, int three, int four, int five, int six) {
	digitalWrite(3,one);
	digitalWrite(5,two);
	digitalWrite(6,three);
	digitalWrite(9,four);
	digitalWrite(10,five);
	digitalWrite(11,six);
}
