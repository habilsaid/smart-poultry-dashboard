// Code generated by Arduino IoT Cloud, DO NOT EDIT.

#include <ArduinoIoTCloud.h>
#include <Arduino_ConnectionHandler.h>

const char DEVICE_LOGIN_NAME[]  = "f8dc7b56-fd27-4c36-91c6-767f52ca7eb8";

const char SSID[]               = SECRET_SSID;    // Network SSID (name)
const char PASS[]               = SECRET_OPTIONAL_PASS;    // Network password (use for WPA, or use as key for WEP)
const char DEVICE_KEY[]  = SECRET_DEVICE_KEY;    // Secret device password

void onBuzzerChange();

float humiditiy;
float lDR;
float signal_Strength;
float temprature;
int buzzer;
int gas_sensor;

void initProperties(){

  ArduinoCloud.setBoardId(DEVICE_LOGIN_NAME);
  ArduinoCloud.setSecretDeviceKey(DEVICE_KEY);
  ArduinoCloud.addProperty(humiditiy, READ, 10 * SECONDS, NULL);
  ArduinoCloud.addProperty(lDR, READ, 10 * SECONDS, NULL);
  ArduinoCloud.addProperty(signal_Strength, READ, 10 * SECONDS, NULL);
  ArduinoCloud.addProperty(temprature, READ, 10 * SECONDS, NULL);
  ArduinoCloud.addProperty(buzzer, READWRITE, 10 * SECONDS, onBuzzerChange);
  ArduinoCloud.addProperty(gas_sensor, READ, 10 * SECONDS, NULL);

}

WiFiConnectionHandler ArduinoIoTPreferredConnection(SSID, PASS);
