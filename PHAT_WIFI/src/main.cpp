#include <Arduino.h>
#include <ESP8266WiFi.h>

/**
 * ĐỊNH NGHĨA HẰNG SỐ TÊN WIFI MODULE PHÁT
 *
 */
const char *NAME_ACCESS_WIFI = "LOCKHANG-1234567890";
/**
 * ĐỊNH NGHĨA HẰNG SỐ MẬT KHẨU WIFI MODULE PHÁT
 *
 */
const char *PASS_ACCESS_WIFI = "1234567890";

IPAddress staticIP(192,168,1,100);
IPAddress gateway(192,168,1,1);
IPAddress subnet(255,255,255,0);

void setup()
{
  WiFi.softAPConfig(staticIP, gateway, subnet);

}

void loop()
{
  // put your main code here, to run repeatedly:
}

