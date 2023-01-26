#include <Arduino.h>
#include <ESP8266WiFi.h>

/**
 * ĐỊNH NGHĨA HẰNG SỐ TÊN WIFI MODULE PHÁT
 *
 */
const char *NAME_ACCESS_WIFI = "lockhang1";
/**
 * ĐỊNH NGHĨA HẰNG SỐ MẬT KHẨU WIFI MODULE PHÁT
 *
 */
const char *PASS_ACCESS_WIFI = "0972001445";

/**
 * KHAI BÁO BIẾN IP MẶT ĐỊNH CHO MODULE ESP8266
 *
 * @var IPAddress staticIP
 */
IPAddress staticIP(192, 168, 1, 100);
/**
 * KHAI BÁO BIẾN GATEWAY MẶT ĐỊNH CHO MODULE ESP8266
 *
 * @var IPAddress gateway
 */
IPAddress gateway(192, 168, 1, 1);
/**
 * KHAI BÁO BIẾN SUBNET MẶT ĐỊNH CHO MODULE ESP8266
 *
 * @var IPAddress subnet
 */
IPAddress subnet(255, 255, 255, 0);

byte wifiStatus = 0;

void setup()
{
  Serial.begin(9600);
  Serial.println();
  Serial.println("-----------------------------------------------------------------------------------");

  /**
   * THÔNG BÁO TRẠNG THÁI CỦA MODULE WIFI (ĐOẠN CODE NÀY THƯỜNG DÙNG TRONG CHẾ ĐỘ STATION)
   * 
   */
  wifiStatus = WiFi.status();
  switch (wifiStatus)
  {
    case WL_CONNECTED:
      Serial.println("MODULE ESP8266 ĐÃ KẾT NỐI WIFI THÀNH CÔNG");
      break;
    case WL_NO_SSID_AVAIL:
      Serial.println("MODULE ESP8266 KHÔNG TÌM THẤY WIFI");
      break;
    case WL_CONNECT_FAILED:
      Serial.println("MODULE ESP8266 ĐÃ KẾT NỐI THẤT BẠI");
      break;
    case WL_WRONG_PASSWORD:
      Serial.println("MODULE ESP8266 ĐÃ KẾT NỐI THẤT BẠI DO SAI MẬT KHẨU");
      break;
    case WL_DISCONNECTED:
      Serial.println("MODULE ESP8266 ĐÃ NGẮT KẾT NỐI");
      break;
    default:
      Serial.println("MODULE ESP8266 TRONG TRANG THÁI NGHỈ HAY TRẠNG THÁI ĐIỂM TRUY CẬP");
  }

  /**
   * BẬT CHẾ ĐỘ PHÁT WIFI CHO MODULE ESP8266
   * 
   */
  WiFi.mode(WIFI_STA);



  /**
   * CẤU HÌNH MẶT ĐỊNH CỦA MUDULE ESP8266
   *
   */
  Serial.println("-----------------------------------------------------------------------------------");
  Serial.println("CẤU HÌNH MODULE ESP8266 MẶT ĐỊNH");
  Serial.print("IP MODULE ESP8266: ");Serial.println(WiFi.localIP());
  Serial.print("MACADDRESS MODULE ESP8266: ");Serial.println(WiFi.macAddress().c_str());
  Serial.println("-----------------------------------------------------------------------------------");

  /**
   * HÀM CẤU HÌNH LẠI THÔNG SỐ CHO MODULE ESP8266
   *
   * @param local_ip IP mới cho module
   * @param gateway  gateway mới cho module
   * @param subnet  submet mới cho module
   *
   * @return boolean Trả về giá trị ture nếu thành công false thất bại
   */   

  Serial.println("CẤU HÌNH MODULE ESP8266 SAU KHI CẤU HÌNH LẠI");
  Serial.printf("CẤU HÌNH MODULE ESP8266 LẠI %s\n", WiFi.config(staticIP, gateway, subnet) ? "THÀNH CÔNG" : "THẤT BẠI");
  Serial.print("IP MODULE ESP8266: ");Serial.println(WiFi.localIP());
  Serial.print("MACADDRESS MODULE ESP8266: ");Serial.println(WiFi.macAddress().c_str());

  /**
   * KẾT NỐI ĐẾN ĐIỂM PHÁT WIFI
   * 
   */
  Serial.println("-----------------------------------------------------------------------------------");
  Serial.printf("KẾT NỐI ĐẾN ĐIỂM PHÁT WIFI %s\n", WiFi.begin(NAME_ACCESS_WIFI, PASS_ACCESS_WIFI) ? "THÀNH CÔNG" : "THẤT BẠI");
  Serial.println("-----------------------------------------------------------------------------------");

  /**
   * THÔNG BÁO TRẠNG THÁI CỦA MODULE WIFI (ĐOẠN CODE NÀY THƯỜNG DÙNG TRONG CHẾ ĐỘ STATION)
   * 
   */
  wifiStatus = WiFi.status();
  switch (wifiStatus)
  {
    case WL_CONNECTED:
      Serial.println("MODULE ESP8266 ĐÃ KẾT NỐI WIFI THÀNH CÔNG");
      break;
    case WL_NO_SSID_AVAIL:
      Serial.println("MODULE ESP8266 KHÔNG TÌM THẤY WIFI");
      break;
    case WL_CONNECT_FAILED:
      Serial.println("MODULE ESP8266 ĐÃ KẾT NỐI THẤT BẠI");
      break;
    case WL_WRONG_PASSWORD:
      Serial.println("MODULE ESP8266 ĐÃ KẾT NỐI THẤT BẠI DO SAI MẬT KHẨU");
      break;
    case WL_DISCONNECTED:
      Serial.println("MODULE ESP8266 ĐÃ NGẮT KẾT NỐI");
      break;
    default:
      Serial.println("MODULE ESP8266 TRONG TRANG THÁI NGHỈ HAY TRẠNG THÁI ĐIỂM TRUY CẬP");
  }

  /**
   * LẤY ĐỊA CHỈ IP TRUY CẬP CỦA MODULE ESP8266
   * 
   */

  Serial.println("-----------------------------------------------------------------------------------");
  Serial.print("MODULE ESP8266 NAME \"");Serial.print(WiFi.SSID());Serial.print("\" WIDTH IP: ");Serial.println(WiFi.localIP());
  Serial.println("-----------------------------------------------------------------------------------");

  
  /**
   * NGẮT KẾT NỐI ĐIỂM TRUY CẬP 
   * 
   * @param boolean 
   * 
   * - TRUE THÌ MODELE ESP8266 NGỪNG PHÁT WIFI VÀ SSID, PASS SẺ BẰNG NULL
   * - FALSE THÌ MODELE ESP8266 CHỈ NGỪNG PHÁT WIFI   * 
   */
  Serial.println("-----------------------------------------------------------------------------------");
  Serial.print("NGẮT KẾT NỐI ĐIỂM TRUY CẬP \"");Serial.print(WiFi.SSID());Serial.printf("\" %s\n",WiFi.disconnect(true) ? "THÀNH CÔNG" : "THẤT BẠI");
  Serial.println("-----------------------------------------------------------------------------------");
}

void loop()
{
  // put your main code here, to run repeatedly:
}
