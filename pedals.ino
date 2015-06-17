void setup(){
  Serial.begin(9600);
  pinMode(0, INPUT);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  pinMode(8, INPUT);
  pinMode(9, INPUT);
  pinMode(10, INPUT);
  pinMode(11, INPUT);
  pinMode(12, INPUT);
  pinMode(13, INPUT);
  digitalWrite(0, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  
}

void loop(){
  Serial.print("C:");
  Serial.print(digitalRead(0));
  Serial.print("\tC#: ");
  Serial.print(digitalRead(2));
  Serial.print("\tD: ");
  Serial.print(digitalRead(3));
  Serial.print("\tD#: ");
  Serial.print(digitalRead(4));
  Serial.print("\tE: ");
  Serial.print(digitalRead(5));
  Serial.print("\tF: ");
  Serial.print(digitalRead(6));
  Serial.print("\tF#: ");
  Serial.print(digitalRead(7));
  Serial.print("\tG: ");
  Serial.print(digitalRead(8));
  Serial.print("\tG#: ");
  Serial.print(digitalRead(9));
  Serial.print("\tA: ");
  Serial.print(digitalRead(10));
  Serial.print("\tA#: ");
  Serial.print(digitalRead(11));
  Serial.print("\tB: ");
  Serial.print(digitalRead(12));
  Serial.print("\tC: ");
  Serial.println(digitalRead(13));
  
}
