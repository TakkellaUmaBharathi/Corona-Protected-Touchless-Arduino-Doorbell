#define MQ3 A0

#define Thresold 420

int value;

void setup() {

pinMode(MQ3, INPUT);

pinMode(8, OUTPUT);

pinMode(9, OUTPUT);

Serial.begin(9600);

}

void loop () {

value = analogRead(MQ3);

Serial.println(value);

if ( value > Thresold )

{

digitalWrite ( 8 , HIGH );

digitalWrite ( 9 , HIGH );

}

else {

digitalWrite(8, LOW);

digitalWrite(9, LOW);

}

delay (500);

}
