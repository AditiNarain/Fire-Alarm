int led=6;
int buzzer=7;
int sensor=8;

int val;
void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600);
    pinMode(buzzer,OUTPUT);
    pinMode(led,OUTPUT);
    pinMode(sensor,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  val=digitalRead(sensor);
  
if (val==1)
{
  Serial.println("Fire started here");
  digitalWrite(led,HIGH);
  digitalWrite(buzzer,HIGH);
  delay(500);
  digitalWrite(led,LOW);
  digitalWrite(buzzer,LOW);
}
if (val==0)
{
  Serial.println("Everything is Fine");
  digitalWrite(led,LOW);
  digitalWrite(buzzer,LOW);
}
}
