#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);  // Устанавливаем дисплей
long i = 1;
void setup()
{
  lcd.init();                     
  lcd.backlight();// Включаем подсветку дисплея

}
void loop()
{
  // Устанавливаем курсор на вторую строку и нулевой символ.
  lcd.setCursor(0, 0);
  // Выводим на экран количество секунд с момента запуска ардуины
  lcd.print("Hello");
  lcd.setCursor(1, 1);
  lcd.print(i);
  i++;
  delay(1000);
}
