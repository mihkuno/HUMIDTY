const int PIN_VCC = 12;
const int PIN_SWITCH = 13;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.setTimeout(100);
  pinMode(PIN_VCC, OUTPUT);
  pinMode(PIN_SWITCH, OUTPUT);
  digitalWrite(PIN_VCC, HIGH);
}


int input;

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available()) {
    input = Serial.parseInt();
      
    if (input == 1) {
      digitalWrite(PIN_SWITCH, HIGH);
      Serial.println("turned on..");
    } else if (input == 0) {
      digitalWrite(PIN_SWITCH, LOW);
      Serial.println("turned off..");
    } 
  }
}
