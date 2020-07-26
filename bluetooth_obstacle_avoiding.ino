//MakewithREX Bot controller android ap


char getstr;
const int LeftMotorForward = 7;
const int LeftMotorBackward = 6;
const int RightMotorForward = 4;
const int RightMotorBackward = 5;

void _mForward()
{ 
  
  digitalWrite(LeftMotorForward, HIGH);
    digitalWrite(RightMotorForward, HIGH);
  
    digitalWrite(LeftMotorBackward, LOW);
    digitalWrite(RightMotorBackward, LOW);
  Serial.println("go forward!");
}
void _mBack()
{
  
  digitalWrite(LeftMotorBackward, HIGH);
  digitalWrite(RightMotorBackward, HIGH);
  
  digitalWrite(LeftMotorForward, LOW);
  digitalWrite(RightMotorForward, LOW);
  Serial.println("go back!");
}
void _mleft()
{
  
  digitalWrite(LeftMotorBackward, LOW); // did change to move only ryt motor forward
  digitalWrite(RightMotorForward, HIGH);
  
  digitalWrite(LeftMotorForward, LOW);
  digitalWrite(RightMotorBackward, LOW);
  
  Serial.println("go left!");
}
void _mright()
{
  
  digitalWrite(LeftMotorForward, HIGH);
  digitalWrite(RightMotorBackward, LOW); // did change to move only left motor forward
  
  digitalWrite(LeftMotorBackward, LOW);
  digitalWrite(RightMotorForward, LOW);
  
  
}
void _mStop()
{
  digitalWrite(RightMotorForward, LOW);
  digitalWrite(LeftMotorForward, LOW);
  digitalWrite(RightMotorBackward, LOW);
  digitalWrite(LeftMotorBackward, LOW);
  Serial.println("Stop!");
}

void setup()
{ 
  
  Serial.begin(9600);
  pinMode(RightMotorForward, OUTPUT);
  pinMode(LeftMotorForward, OUTPUT);
  pinMode(LeftMotorBackward, OUTPUT);
  pinMode(RightMotorBackward, OUTPUT);
 
  delay(100);
}
void loop()
  { 
 
    getstr=Serial.read();
 if(getstr=='F')
  {
    _mForward();
  }
  else if(getstr=='B')
  {
    _mBack();
    delay(200);
  }
  else if(getstr=='R')// according to my robot. otherwise L
  {
    _mleft();
    delay(200);
  }
  else if(getstr=='L') // according to my robot. otherwise R
  {
    _mright();
    delay(200);
  }
  else if(getstr=='X')
  {
     _mStop();     
  }
   }
