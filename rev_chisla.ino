#include <math.h>
int chislo;
void setup() 
{
  Serial.begin(9600);
}

int reverse(int chislo)
  {
    int rev=0;
    while(chislo!=0)
    {
      rev = rev*10 + chislo%10;
      chislo = chislo/10;
      
    }
    return (rev);
  }

void loop() 
{
  Serial.print("Введите число:   ");
  while (Serial.available() == 0) {}
  chislo = Serial.parseInt();
  Serial.println(chislo);
  while (Serial.available() > 0) { Serial.read(); }

  Serial.println(reverse(chislo));
}




