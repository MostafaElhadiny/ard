int red_led = 3;
int green_led=4;
int per_counter;
int checker;
int counter;
int val;
int button_state;
int last_buttonstate;
int button=6;
int val1;
void setup()
{
 pinMode(red_led, OUTPUT);
 pinMode(green_led,OUTPUT);
pinMode(A0, INPUT);
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(button, INPUT);
}

void loop()
{
  button_state = digitalRead(button);
  if (button_state != last_buttonstate)
  {
    if (button_state == HIGH)
    {
      counter++;
       Serial.println(counter);
    }}

 delay(20);
 last_buttonstate = button_state;
  if (counter %2 != 0)
 {
  checker= 1;
 }
 else
 {
  checker = 0;
 }
 if(checker % 2 != 0){
 int val = analogRead(A0);
  //Serial.println(val);

  if (val <200){
  digitalWrite(2,HIGH);
    delay(100);
    digitalWrite(2,LOW);
  per_counter++;
  if (per_counter==6){
     digitalWrite(2,HIGH);
     per_counter=0;
     
     }
  Serial.println(per_counter);
  digitalWrite(green_led, HIGH);
  delay(1000);
  digitalWrite(green_led,LOW);
  delay(1000);
   
  }
  int val1 = analogRead(A1);
  //Serial.println(val1);

  if (val1 <200){
  digitalWrite(2,HIGH);
    delay(100);
    digitalWrite(2,LOW);
  per_counter--;
   Serial.println(per_counter);
  digitalWrite(red_led, HIGH);
  delay(1000);
  digitalWrite(red_led, LOW);
 
  delay(1000);

    
    }
    
  }else{
    
     digitalWrite(2,LOW);
    
    }
  }
