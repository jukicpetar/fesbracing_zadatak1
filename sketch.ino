// Pinovi na kojima su povezane LEDice
unsigned int led1 = 13;
unsigned int led2 = 7;

// Intervali svako koliko LEDice svijetle (u sekundama)
unsigned int led1_interval = 3;
unsigned int led2_interval = 2;

// Dužina intervala tijekom kojeg LEDice svijetle (u ms)
unsigned long time_on = 500;

void setup() {
  // Postavljanje pinova za LEDice kao izlaze
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {
  // varijabla koja sadržava trenutno vrijeme
  unsigned long current_time = millis();

  if (current_time % (led1_interval * led2_interval * 1000) == 0 || current_time == 0) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(time_on);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
  }

  else if (current_time % (led1_interval * 1000) == 0) {
    digitalWrite(led1, HIGH);
    delay(time_on);
    digitalWrite(led1, LOW);
  }

    else if (current_time % (led2_interval * 1000) == 0) {
    digitalWrite(led2, HIGH);
    delay(time_on);
    digitalWrite(led2, LOW);
  }

}