// project : arduino_uno_serial_hello_world
// data    : 03.09.2024
// author  : siarhei baldzenka (sbaldzenka)
// e-mail  : venera.electronica@gmail.com

void setup()
{
  Serial.begin(115200);
}

void loop()
{
  Serial.println("Hello World!");
  delay(1000);
}
