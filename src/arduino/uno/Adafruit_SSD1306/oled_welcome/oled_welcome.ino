#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128 // OLED가로 넓이, 픽셀 사이즈
#define SCREEN_HEIGHT 64 // OLED세로 넓이, 픽셀 사이즈

// Declaration for an SSD1306 display connected to I2C (SDA, SCL pins)
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

void setup() {
  Serial.begin(115200);

  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { // 0x3C or 0x3D
    Serial.println(F("SSD1306 연결 실패"));
    for(;;);                           //SSD1306에 연결이 될 때까지 무한루프
  }
  delay(2000);
  display.clearDisplay();              // 표시 버퍼 지우기

  display.setTextSize(2);              // 폰트 크기 2로 설정
  display.setTextColor(WHITE);
  display.setCursor(0, 8);             // 표시할 위치 설정  
  
  display.println("Welcome to");       // 표시 버퍼에 저장
  display.println("");  
  display.println(" ETboard");  
  display.display();                   // 표시하기
  delay(100); 
}
void loop() {
  
}
