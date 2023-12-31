#include <Arduino.h>

void setup()
{
  Serial.begin(115200);

  Serial.print("\nChip Model: ");
  Serial.println(ESP.getChipModel());

  Serial.print("Chip Cores: ");
  Serial.println(ESP.getChipCores());

  Serial.print("CPU Frequency: ");
  Serial.print(ESP.getCpuFreqMHz());
  Serial.println(" MHz");

  Serial.print("PSRAM: ");
  Serial.print(ESP.getPsramSize() / (1024.0 * 1024.0));
  Serial.println(" MB");

  Serial.print("Heap: ");
  Serial.print(ESP.getHeapSize() / (1024.0 * 1024.0));
  Serial.println(" MB");

  Serial.print("Flash Memory: ");
  Serial.print(ESP.getFlashChipSize() / (1024.0 * 1024.0));
  Serial.println(" MB");
}

void loop()
{
}