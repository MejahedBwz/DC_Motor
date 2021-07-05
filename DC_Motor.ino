
int l1 = 3;
int r1 = 5;
int l2 = 6;
int r2 = 9;


void setup() {
 
  pinMode(l1,OUTPUT);
  pinMode(r1,OUTPUT);
  pinMode(l2,OUTPUT);
  pinMode(l2,OUTPUT);
  
}
void forward()                  // تعريف دالة للاتجاة للامام 
{
   digitalWrite(l1,1);
   digitalWrite(r1,0);
   digitalWrite(l2,0);
   digitalWrite(r2,1);
  }

  void backward()               // تعريف دالة للاتجاة للخلف
{
   digitalWrite(l1,0);
   digitalWrite(r1,1);
   digitalWrite(l2,1);
   digitalWrite(r2,0);
  }
  

 void Stop()                        // تعريف دالة للتوقف
{
   digitalWrite(l1,0);
   digitalWrite(r1,0);
   digitalWrite(l2,0);
   digitalWrite(r2,0);
  }

  
void loop() {
 
   forward();
   delay(10000);
   Stop();
   delay(2000);
   backward();
   delay(10000);
   Stop();
   delay(2000);


}
