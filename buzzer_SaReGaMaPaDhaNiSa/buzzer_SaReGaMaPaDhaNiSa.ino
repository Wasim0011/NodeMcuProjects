int buzzer = D0;
int Sa=240, Re=270, Ga=300, Ma=320, Pa=360, Dha=400, Ni=450, Sa2=480;
int t=800, dt=800;
void setup() {
  // put your setup code here, to run once:
  pinMode(buzzer, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  delay(500);
  tone(buzzer, Sa, t);  //tone(pin, frequency, time period);
  delay(dt);
  tone(buzzer, Re, t);  //tone(pin, frequency, time period);
  delay(dt);
  tone(buzzer, Ga, t);  //tone(pin, frequency, time period);
  delay(dt);
  tone(buzzer, Ma, t);  //tone(pin, frequency, time period);
  delay(dt);
  tone(buzzer, Pa, t);  //tone(pin, frequency, time period);
  delay(dt);
  tone(buzzer, Dha, t);  //tone(pin, frequency, time period);
  delay(dt);
  tone(buzzer, Ni, t);  //tone(pin, frequency, time period);
  delay(dt);
  tone(buzzer, Sa2, t);  //tone(pin, frequency, time period);
  delay(dt);  


}
