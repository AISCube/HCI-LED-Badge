#define DEBUG
//======================================================================================
//#define High(...)       digitalWrite(__VA_ARGS__, HIGH);
//#define Low(...)        digitalWrite(__VA_ARGS__, Low);

//======================================================================================
//IO : Buzzer
#define Buzzer_setup  pinMode(6, OUTPUT);
#define Buzzer_On     digitalWrite(6,HIGH);
#define Buzzer_Off    digitalWrite(6,LOW);
//Touch Sensor
#define PB_setup     pinMode(5, INPUT);
#define PB           digitalRead(5)

//======================================================================================
int pin[] = {
  14, 15, 16, 17,    18, 19, 7, 8,    9, 10, 11, 12
};
int ledCol[] = {
  0, 4, 8
};
//======================================================================================
void PCB_Init() {
  PB_setup //PB
  Serial.begin(9600);
  for (int cpin = 0; cpin < 12; cpin++){
    pinMode(pin[cpin], OUTPUT);
  }
  for (int cpin = 1; cpin < 12; cpin++){
    digitalWrite(pin[cpin], LOW);
  } 
}
//======================================================================================
void HighRow(int r) {
  if (r == 0) {
    digitalWrite(14, HIGH);
    digitalWrite(18, HIGH);
    digitalWrite(9, HIGH);
  }else if (r == 1) {
    digitalWrite(15, HIGH);
    digitalWrite(19, HIGH);
    digitalWrite(10, HIGH);
  }else if (r == 2) {
    digitalWrite(16, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(11, HIGH);
  }else if (r == 3) {
    digitalWrite(17, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(12, HIGH);
  }
}
//======================================================================================
void LowRow(int r) {
  if (r == 0) {
    digitalWrite(14, LOW);
    digitalWrite(18, LOW);
    digitalWrite(9, LOW);
  }else if (r == 1) {
    digitalWrite(15, LOW);
    digitalWrite(19, LOW);
    digitalWrite(10, LOW);
  }else if (r == 2) {
    digitalWrite(16, LOW);
    digitalWrite(7, LOW);
    digitalWrite(11, LOW);
  }else if (r == 3) {
    digitalWrite(17, LOW);
    digitalWrite(8, LOW);
    digitalWrite(12, LOW);
  }
}
//======================================================================================
void HighCol(int c) {
  if (c == 0) {
    digitalWrite(14, HIGH);
    digitalWrite(15, HIGH);
    digitalWrite(16, HIGH);
    digitalWrite(17, HIGH);
  }else if (c == 1) {
    digitalWrite(18, HIGH);
    digitalWrite(19, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
  }else if (c == 2) {
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(12, HIGH);
  }
}
//======================================================================================
void LowCol(int c) {
  if (c == 0) {
    digitalWrite(14, LOW);
    digitalWrite(15, LOW);
    digitalWrite(16, LOW);
    digitalWrite(17, LOW);
  }else if (c == 1) {
    digitalWrite(18, LOW);
    digitalWrite(19, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
  }else if (c == 2) {
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
  }
}
//======================================================================================
void HighAll() {
    digitalWrite(14, HIGH);
    digitalWrite(18, HIGH);
    digitalWrite(9, HIGH);

    digitalWrite(15, HIGH);
    digitalWrite(19, HIGH);
    digitalWrite(10, HIGH);

    digitalWrite(16, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(11, HIGH);

    digitalWrite(17, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(12, HIGH);
}
//======================================================================================
void LowAll() {
    digitalWrite(14, LOW);
    digitalWrite(18, LOW);
    digitalWrite(9, LOW);

    digitalWrite(15, LOW);
    digitalWrite(19, LOW);
    digitalWrite(10, LOW);

    digitalWrite(16, LOW);
    digitalWrite(7, LOW);
    digitalWrite(11, LOW);

    digitalWrite(17, LOW);
    digitalWrite(8, LOW);
    digitalWrite(12, LOW);
}


//======================================================================================
void HiAllx() {
    for (int cpin = 0; cpin < 12; cpin++){
      digitalWrite(pin[cpin], HIGH);
    }
}
//======================================================================================
//======================================================================================



