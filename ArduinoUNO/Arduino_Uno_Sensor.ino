#define trigPin 8
#define echoPin 9 

// Variabel Sensor Ultra Sonic
  long durasi;
  long jarak;

void setup() {
  
  Serial.begin(9600);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

}

void loop() {
  
// Sensor Ultrasonic 
  digitalWrite(trigPin,LOW);
  digitalWrite(trigPin,HIGH);
  delay(2000);
  digitalWrite(trigPin,LOW);

  durasi = pulseIn(echoPin,HIGH);
  jarak = durasi / 29.41 / 2;

  if(jarak <= 0){
    Serial.println("Jarak Tidak Terdeteksi");
  }
  else{
      Serial.print(jarak);
      Serial.println(" CM");
  }
}
