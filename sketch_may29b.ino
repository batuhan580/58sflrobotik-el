#define trigPin 4   //Sensörün Echo pini Arduinonun 13. pinine bağlanır
#define echoPin 5   //Sensorün Trig pini Arduinonun 12. pinine bağlanır
#define trigPin2 6  //Sensörün Echo pini Arduinonun 13. pinine bağlanır
#define echoPin2 7  //Sensorün Trig pini Arduinonun 12. pinine bağlanır
#define trigPin3 8  //Sensörün Echo pini Arduinonun 13. pinine bağlanır
#define echoPin3 9  //Sensorün Trig pini Arduinonun 12. pinine bağlanır


void setup()
{
  pinMode(trigPin, OUTPUT); //13. yani trigpini çıkış olarak ayarlıyoruz
  pinMode(echoPin, INPUT); //12. yani echoPini giriş olarak ayarlıyoruz
  Serial.begin(9600);
  pinMode(3, OUTPUT);
  pinMode(2 , OUTPUT);
pinMode(trigPin2, OUTPUT); //13. yani trigpini çıkış olarak ayarlıyoruz
  pinMode(echoPin2, INPUT); //12. yani echoPini giriş olarak ayarlıyoruz
  Serial.begin(9600);
  pinMode(6, OUTPUT);
  pinMode(7 , OUTPUT);
}

void loop()
{
  //**********************BİRİNCİ SENSÖR********************///

  long duration, distance;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration / 2) / 29.1; //Ölçüm fonksiyonu
  Serial.println(distance);

  if (distance <= 5)
  {
    digitalWrite(3, HIGH);
    digitalWrite(2, LOW);
  }
  if (distance > 5 && distance < 200)
  {
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
  }
  else
  {
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
  }

  //***********************İKİNCİ SENSÖR*******************///

  long duration2, distance2;

  digitalWrite(trigPin2, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin2, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin2, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration / 2) / 29.1; //Ölçüm fonksiyonu
  Serial.println(distance);
  if (distance <= 5)
  {
    digitalWrite(9, HIGH);
    digitalWrite(8, LOW);
  }
  if (distance > 5 && distance < 200)
  {
    digitalWrite(9, HIGH);
    digitalWrite(8, LOW);
  }
  else
  {
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
  }
 //***********************ÜÇÜNCÜ SENSÖR*******************///


