// Ben DeSouza
// 01/03/18
// Arduino Light Experiment
// Using code to alter the LED light on Arduino

void setup() {
pinMode(13,OUTPUT); // Activates the pin the light is in

}

void loop() {
digitalWrite(13,HIGH);
delay(1000); // Determines the rate of flash of the light
digitalWrite(13,LOW);
delay(1000);

}
