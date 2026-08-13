
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
    TaskBlink,
    "Blink",
    1024,
    NULL,
    1,
    NULL
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