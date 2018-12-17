int button1 = 2;
int button2 = 3;
int button3 = 4;
int button4 = 5;
int vibrate = 7;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2, INPUT);
  pinMode(4, INPUT);
  pinMode(3, INPUT);
  pinMode(5, INPUT);
  pinMode(7, OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
  int but_val = digitalRead(button1);
  int but_val2 = digitalRead(button2);
  int but_val3 = digitalRead(button3);
  int but_val4 = digitalRead(button4);
  Serial.println(but_val);

  if(but_val == HIGH){
    digitalWrite(vibrate, HIGH);
  }
  if(but_val == LOW){
    digitalWrite(vibrate, LOW);
  }
  if(but_val2 == HIGH){
    digitalWrite(vibrate, HIGH);
  }
  if(but_val2 == LOW){
    digitalWrite(vibrate, LOW);
  }
    if(but_val3 == HIGH){
    digitalWrite(vibrate, HIGH);
  }
  if(but_val3 == LOW){
    digitalWrite(vibrate, LOW);
  }
  if(but_val4 == HIGH){
    digitalWrite(vibrate, HIGH);
  }
  if(but_val4 == LOW){
    digitalWrite(vibrate, LOW);
  }
}
