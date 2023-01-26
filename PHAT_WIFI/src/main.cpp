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

/**
 * KHAI BÁO BIẾN IP MẶT ĐỊNH CHO MODULE ESP8266
 * 
 * @var IPAddress staticIP
 */
IPAddress staticIP(192,168,1,100);
/**
 * KHAI BÁO BIẾN GATEWAY MẶT ĐỊNH CHO MODULE ESP8266
 * 
 * @var IPAddress gateway
 */
IPAddress gateway(192,168,1,1);
/**
 * KHAI BÁO BIẾN SUBNET MẶT ĐỊNH CHO MODULE ESP8266
 * 
 * @var IPAddress subnet
 */
IPAddress subnet(255,255,255,0);

void setup()
{
  /**
   * HÀM CẤU HÌNH LẠI THÔNG SỐ CHO MODULE ESP8266
   * 
   * @param local_ip IP mới cho module
   * @param gateway  gateway mới cho module
   * @param subnet  submet mới cho module
   * 
   * @return boolean Trả về giá trị trure nếu thành công false thất bại
   */
  WiFi.softAPConfig(staticIP, gateway, subnet);

}

void loop()
{
  // put your main code here, to run repeatedly:
}

