const int trig = 12;
const int echo = 13;

const int LED1 = 8;
int duration = 0 ;
int distance = 0;
void setup ()
{
  Serial.begin(9600);
  pinMode(trig, OUTPUT); 
  pinMode(echo, INPUT);
  pinMode(LED1 , OUTPUT);
  delay (1000);
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(trig , HIGH);
  delayMicroseconds(1000);
  digitalWrite(trig , LOW);


  duration = pulseIn(echo , HIGH);
  distance = (duration/2) / 20 ;
 
  if ( distance < 60 )
  {
    digitalWrite(LED1, HIGH);
    delay(1000);
    digitalWrite(LED1,LOW);
    delay(1000);
    Serial.println("pause");
    delay(2000);
    
  }
}
