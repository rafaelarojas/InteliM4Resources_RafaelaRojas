// C++ code
//
void setup()
{
  pinMode(13, OUTPUT); //led vermelho
  pinMode(14, OUTPUT); //led amarelo
  pinMode(15, OUTPUT); //led verde
}

void loop()
{
  digitalWrite(13, HIGH); //liga led vermelho
  delay(5000); // Wait for 5000 milliseconds
  digitalWrite(13, LOW); //desliga led vermelho
  
  digitalWrite(12, HIGH);
  delay(3000); // Wait for 3000 milliseconds
  digitalWrite(12, LOW);
  
  digitalWrite(11, HIGH);
  delay(7000); // Wait for 7000 milliseconds
  digitalWrite(11, LOW);
}