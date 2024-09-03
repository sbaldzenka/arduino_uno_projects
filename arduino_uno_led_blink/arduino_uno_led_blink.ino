// project : arduino_uno_led_blink
// data    : 03.09.2024
// author  : siarhei baldzenka (sbaldzenka)
// e-mail  : venera.electronica@gmail.com

#define LED_BUILTIN 13

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(100);
  digitalWrite(LED_BUILTIN, LOW);
  delay(100);  
}
