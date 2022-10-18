# ETboard_OLED_SSD1306
OLED SS1306 Performance Test


## OLED SSD1306 Performance Test
<!-- ![Kiku](images/etboard_picture_1_1.jpeg) | ![Kiku](images/etboard_picture_2_1.jpeg) | -->
1. Hardware I2C 연결
-. 연결
 OLED : GND, VCC, SCL, SDA
 Uno  : GND, VCC, A5, A4
-. Firmware 설정
 U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0, /* reset=*/ U8X8_PIN_NONE, /* clock=*/ A5, /* data=*/ A4);   // ESP32 Thing, HW I2C with pin remapping

2. Software I2C 연결
-. 연결
 OLED : GND, VCC, SCL, SDA
 Uno  : GND, VCC, A5, A4
-. Firmware 설정
 U8G2_SSD1306_128X64_NONAME_F_SW_I2C u8g2(

### Parts
- Arduino Uno R3 호환
- SSD1306 128x64 I2C OLED display (GND, VCC, SCL, SDA)


### Reference


### Library
