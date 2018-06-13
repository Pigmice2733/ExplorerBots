#define PWMA 8
#define AIN2 7
#define AIN1 6
#define STBY 5
#define BIN1 4
#define BIN2 3
#define PWMB 2


void setup()
{
  pinMode(STBY, OUTPUT);
  pinMode(PWMA, OUTPUT);
  pinMode(AIN2, OUTPUT);
  pinMode(AIN1, OUTPUT);
  pinMode(PWMB, OUTPUT);
  pinMode(BIN1, OUTPUT);
  pinMode(BIN2, OUTPUT);
}


void loop()
{
  digitalWrite(STBY, HIGH);
  digitalWrite(AIN2, LOW);
  digitalWrite(AIN1, HIGH);
  analogWrite(PWMA, 255);
  digitalWrite(BIN2, HIGH);
  digitalWrite(BIN1, LOW);
  analogWrite(PWMB, 255);
}
