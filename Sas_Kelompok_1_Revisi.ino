#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2); // LCD Address 0x27, 16 karakter, 2 baris

void setup() {
  lcd.init();           // Inisialisasi LCD
  lcd.backlight();      // Menyalakan lampu latar LCD
}

void loop() {
  // Teks berjalan pertama: "Kelompok 1" (baris pertama)
  for (int i = 0; i < 16; i++) {
    lcd.clear();
    lcd.setCursor(16 - i, 0); 
    lcd.print("Kelompok 1");
    delay(300);
  }

  // Teks berjalan kedua: "Nama" (baris pertama), "Kelompok" (baris kedua)
  for (int i = 0; i < 16; i++) {
    lcd.clear();
    lcd.setCursor(16 - i, 0);
    lcd.print("Nama");
    lcd.setCursor(i, 1);
    lcd.print("Kelompok");
    delay(300);
  }

  // Teks nama anggota kelompok
  lcd.clear();
  lcd.setCursor(0, 0); // Tampilkan nama anggota di baris pertama
  lcd.print("Alsya Katon");
  lcd.setCursor(0, 1); // Tampilkan nama anggota di baris kedua
  lcd.print("Ikhsan Lala");
  delay(2500);

  lcd.clear();
  lcd.setCursor(0, 0); // Lanjutkan nama anggota di baris pertama
  lcd.print("Ristiya");
  lcd.setCursor(0, 1); // Lanjutkan nama anggota di baris kedua
  lcd.print("Rifka Nanda");
  delay(2500);
}