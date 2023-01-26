#include<ESP8266WiFi.h>

/**
 * ĐỊNH NGHĨA TÊN ĐĂNG NHẬP VÀ MẬT KHẨU CỦA MODULE ESP8266
 * 
 * @CONST POINTER CHAR NAME_MODULE_WIFI TÊN WIFI CỦA ESP8266
 * 
 * @CONST STRING NAME_MODULE_WIFI MẬT KHẨU CỦA ESP8266
 **/

const char *NAME_MODULE_WIFI = "LOC_KHANG_12345678990";
const char *PASS_MODULE_WIFI = "1234567890";

void setup() {
  /**
   * KHỞI CHẠY CỬA SỐ SERIAL MONITOR VỚI TẦN SỐ 115200
   * 
   */
  Serial.begin(115200);

  Serial.println(WiFi.status());
  
  

}

void loop() {
  // put your main code here, to run repeatedly:

}
