
// محرك A 
int enA = 10;
int in1 = 3;
int in2 = 4;
// محرك B 
int enB = 11;
int in3 = 6;
int in4 = 7;
//الزر و المقاومة المتحركة
int buttonPin = 8;
int potPin = 0;
 
void setup()
{
                                                   // خلي كل دبابيس التحكم في المحرك على OUTPUT
  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
 
   
                                                                     //  الوضع الاولي للمحركات  
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  delay(300) ;
}
 
void loop()
{
  int speed = analogRead(potPin) / 4;           // التحكم في السرعة  باستخدام المقاومة المتحركة 
  boolean reverse = digitalRead(buttonPin);   // التحكم في الاتجاه عند الضغط على الزر يعكس الاتجاه
  setMotor(speed, reverse); // استدعاء الدالة 
  
}
 
void setMotor(int speed, boolean reverse)              // دالة للتحكم في سرعة و اتجاه المحركات 
{
  analogWrite(enA, speed);
  analogWrite(enB, speed);
  digitalWrite(in1, ! reverse);
  digitalWrite(in2, reverse);
  digitalWrite(in3, ! reverse);
  digitalWrite(in4, reverse);
  
}
 
