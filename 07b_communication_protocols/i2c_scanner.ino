#include <Wire.h>

void setup()
{
  Serial.begin(115200);

  Wire.begin();

  Serial.println("\nStarting I2C Hardware Scanner...");
}

void loop()
{
  byte error, address;
  int device_count = 0;

  Serial.println("Scanning bus...");

  for (address = 1; address < 128; address++) // 0x00 is reserved address for general call
  {
    Wire.beginTransmission(address);

    error = Wire.endTransmission();

    if (error == 0)
    {
      Serial.print("SUCCESS: I2C device found at hex address 0x");
      if (address < 16)
      {
        Serial.print("0");
      }
      Serial.println(address, HEX);
      device_count++;
    }
    else if (error == 4)
    {
      Serial.print("ERROR: Unknown error at hex address 0x");
      if (address<16)
      {
        Serial.print("0");
      }
      Serial.println(address, HEX);
    }
  }

  if (device_count == 0)
  {
    Serial.println("No I2C devices found on the bus.");
  }
  else
  {
    Serial.println("Scan complete.");
  }

  delay(5000);
}