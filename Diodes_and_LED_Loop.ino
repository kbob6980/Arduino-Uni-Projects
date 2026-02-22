// C++ code
//
void setup()
{
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop()
{
  //po kolei zapalanie
  digitalWrite(12, HIGH);
  delay(750); // Wait for 750 millisecond(s)
  digitalWrite(12, LOW);
  digitalWrite(6, HIGH);
  delay(750); // Wait for 750 millisecond(s)
  digitalWrite(6, LOW);
  digitalWrite(11, HIGH);
  delay(750); // Wait for 750 millisecond(s)
  digitalWrite(11, LOW);
  digitalWrite(7, HIGH);
  delay(750); // Wait for 750 millisecond(s)
  digitalWrite(7, LOW);
  digitalWrite(10, HIGH);
  delay(750); // Wait for 750 millisecond(s)
  digitalWrite(10, LOW);
  digitalWrite(8, HIGH);
  delay(750); // Wait for 750 millisecond(s)
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  delay(750); // Wait for 750 millisecond(s)
  digitalWrite(9, LOW);
  //po kolei zapalaja i nie gasna
  digitalWrite(12, HIGH);
  delay(750); // Wait for 750 millisecond(s)
  digitalWrite(11, HIGH);
  delay(750); // Wait for 750 millisecond(s)
  digitalWrite(10, HIGH);
  delay(750); // Wait for 750 millisecond(s)
  digitalWrite(9, HIGH);
  delay(750); // Wait for 750 millisecond(s)
  digitalWrite(8, HIGH);
  delay(750); // Wait for 750 millisecond(s)
  digitalWrite(7, HIGH);
  delay(750); // Wait for 750 millisecond(s)
  digitalWrite(6, HIGH);
  delay(1250); // Wait for 1250 millisecond(s)
  //RGB na bialo
  digitalWrite(4, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(2, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  //RGB na czerwono
  digitalWrite(4, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  //RGB na zielono
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  digitalWrite(2, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  //RGB na niebiesko
  digitalWrite(4, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(2, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  //RGB na bialo
  digitalWrite(4, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(2, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  //Wszystkie gasną
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);
  //Tu dodaje przerwe na koncu zeby bylo widac ze loop sie skonczyl
  delay(2000); //Wait for 2000 milliseconds;
}