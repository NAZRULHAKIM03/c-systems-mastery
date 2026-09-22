
const int ONBOARD_LED = 2;

//Task Prototypes
void TaskBlink(void *pvParameters);
void TaskSensor(void *pvParameters);

void setup()
{
  Serial.begin(115200);
  pinMode(ONBOARD_LED, OUTPUT);

  //Create the Blink Task
  xTaskCreate(
    TaskBlink,  // Task Function (code to run)
    "Blink",    // Task Name (for debugging)
    1024,       // Stack Size (1024 words = 4096 bytes on ESP32)
    NULL,       // Task Parameters (NULL = no data passed to the task)
    1,          // Task Priority (higher number = higher priority)
    NULL        // Task Handle (NULL = we don't need to handle this task later)
  );

  //Create the Sensor Task
  xTaskCreate(
    TaskSensor,
    "Sensor",
    1024,
    NULL,
    1,
    NULL
  );
}

void loop()
{

}

//Task Definitions

void TaskBlink(void *pvParameters)
{
  while(1)
  {
    digitalWrite(ONBOARD_LED, HIGH);
    vTaskDelay(500 / portTICK_PERIOD_MS);

    digitalWrite(ONBOARD_LED, LOW);
    vTaskDelay(500 / portTICK_PERIOD_MS);
  }
}

void TaskSensor(void *pvParameters)
{
  while(1)
  {
    Serial.println("Reading Sensor Data...OK!");

    vTaskDelay(2000 / portTICK_PERIOD_MS);
  }
}
