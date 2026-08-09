volatile uint8_t press_count = 0;
volatile uint8_t new_press = false;

//Debouncing
volatile unsigned long last_interrupt_time = 0;
const unsigned long DEBOUNCE_DELAY = 250; // ignore bounce for 250 milliseconds

void IRAM_ATTR button_isr()
{
  unsigned long current_time = millis();

  if (current_time - last_interrupt_time > DEBOUNCE_DELAY)
  {
  press_count++;
  new_press = true;
  last_interrupt_time = current_time;
  }
}

void setup()
{
  Serial.begin(115200);

  pinMode(4, INPUT_PULLUP);

  attachInterrupt(4, button_isr, FALLING);
}

void loop()
{
  if (new_press == true)
  {
    Serial.print("Button pressed! Total count: ");
    Serial.println(press_count);

    new_press = false;
  }
}