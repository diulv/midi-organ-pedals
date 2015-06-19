#define NOTE_ON 0x90
#define NOTE_OFF 0x80


boolean note[12]; // create note memory array
  
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
  for(int i=0;i<12;i++){// write through note mem array
    note[i] = digitalRead(i);
    //error if not high
  }
}



void loop(){
  for(int i = 2; i < 12; i++){
    //Serial.print("Checking ");
    //Serial.println(i);
    if(digitalRead(i) != note[i]){
      //Serial.print(i);
      if(note[i] == false){
        sendMIDI(NOTE_OFF, i+60, 0x0);
        //Serial.println("\tOFF");
        }
      else{
        sendMIDI(NOTE_ON, i+60, 0x45);
        //Serial.println("\tON");
      }
      note[i] = digitalRead(i);
    }
  }
  delay(20);
}

void sendMIDI(int command, int pitch, int vel){
  Serial.write(command);
  Serial.write(pitch);
  Serial.write(vel);
}
