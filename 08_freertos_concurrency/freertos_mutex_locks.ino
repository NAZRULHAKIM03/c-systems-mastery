
// Declare Mutex Lock globally
SemaphoreHandle_t serialMutex;

void setup()
{
  Serial.begin(115200);

  // Create the physical key
  serialMutex = xSemaphoreCreateMutex();

  xTaskCreate(Task1, "I2C_Scan", 2048, NULL, 1, NULL);
  xTaskCreate(Task2, "WiFi_Send", 2048, NULL, 1, NULL);
}

void loop() {}

void Task1 (void *pvParameters)
{
  while(1)
  {
    // Take key before using Serial Monitor
    // portMAX_DELAY means wait forever until the key is available)
    if (xSemaphoreTake(serialMutex, portMAX_DELAY) == pdTRUE)
    {
      Serial.println("Task 1: Scanning I2C bus...");
      delay(500); // simulate work
      Serial.println("Task 1: Scan Complete.");

      // Give the key back
      xSemaphoreGive(serialMutex);
    }

    vTaskDelay(1000 / portTICK_PERIOD_MS);
  }
}

void Task2 (void *pvParameters)
{
  while(1)
  {
    // Take the key
    if (xSemaphoreTake(serialMutex, portMAX_DELAY) == pdTRUE)
    {
      Serial.println("Task 2: Sending Data to Dashboard...");

      // Give key back
      xSemaphoreGive(serialMutex);
    }

    vTaskDelay(200 / portTICK_PERIOD_MS);
  }
}