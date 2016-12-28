// Add support for OTA***************************************
#include <ArduinoOTA.h>
// **********************************************************

void setup() {
  // Add support for OTA***************************************
  ArduinoOTA.onError([](ota_error_t error) { ESP.restart(); });
  ArduinoOTA.begin();  /* setup the OTA server */
  // **********************************************************

  // Sketch as normal from here
  pinMode(LED_BUILTIN, OUTPUT);     // Initialize the LED_BUILTIN pin as an output
}

void loop() {
  // Add support for OTA***************************************
  ArduinoOTA.handle();
  // **********************************************************

  // Sketch as normal from here
  digitalWrite(LED_BUILTIN, LOW);   // Turn the LED on noting the LED needs a pin to be low for it to illuminate
  delay(100);                      // Wait for a time 
  digitalWrite(LED_BUILTIN, HIGH);  // Turn the LED off by making the pin HIGH
  delay(100);                      // Wait for a time
}

