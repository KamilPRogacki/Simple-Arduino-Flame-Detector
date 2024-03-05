int Led = 13;   // Led pin      (light on if flame detected)
int Buzzer = 9; // buzzer pin   (buzz if flame detected)
int FlamePin = 5; // pin for input of the sensor
int Flame = HIGH;  // in case of doubt why it can be int, look here https://forum.arduino.cc/t/define-int-as-high-or-low/72941/5
void setup() {
pinMode(Led, OUTPUT);
pinMode(Buzzer, OUTPUT);
pinMode(FlamePin, INPUT);
Serial.begin(9600);
}
void loop() {
Flame = digitalRead(FlamePin);
if (Flame== HIGH)
{
Serial.println(“FLAME DETECTED”);
digitalWrite(Buzzer, HIGH);
digitalWrite(Led, HIGH);
}
else
{
Serial.println(“FLAME UNDETECTED”);
digitalWrite(Buzzer, LOW);
digitalWrite(Led, LOW);
}
}