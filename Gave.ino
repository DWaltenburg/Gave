#include <Arduino.h>
#include <U8g2lib.h>

#ifdef U8X8_HAVE_HW_SPI
#include <SPI.h>
#endif
#ifdef U8X8_HAVE_HW_I2C
#include <Wire.h>
#endif

U8G2_SH1106_128X64_NONAME_F_4W_HW_SPI   u8g2  (U8G2_R0, 5, 22, 17); //cs=5, dc=22, res=17

int val = 0;
int CentHei = u8g2.getDisplayHeight() / 2;
int CentWid = u8g2.getDisplayWidth() / 2;
int del1 = 200;
int del2 = 400;
int del3 = 600;

void setup() {
  // put your setup code here, to run once:
  u8g2.begin();
  u8g2.setPowerSave(0);
  u8g2.setFlipMode(0);
}

void drawMsg()
{
  u8g2.setFont(u8g2_font_4x6_tr);
  u8g2.drawStr(CentWid - 45, CentHei, "Jeg elsker dig, Emilie");
  u8g2.drawStr(CentWid - 15, CentHei+10, "God Jul!");
}

void sH() //w,h,7, 6
{
  u8g2.drawPixel(CentWid, CentHei - 2);
  u8g2.drawPixel(CentWid + 1, CentHei - 3);
  u8g2.drawPixel(CentWid - 1, CentHei - 3);
  u8g2.drawPixel(CentWid + 2, CentHei - 3);
  u8g2.drawPixel(CentWid - 2, CentHei - 3);
  u8g2.drawPixel(CentWid + 3, CentHei - 2);
  u8g2.drawPixel(CentWid - 3, CentHei - 2);
  u8g2.drawPixel(CentWid + 3, CentHei - 1);
  u8g2.drawPixel(CentWid - 3, CentHei - 1);
  u8g2.drawPixel(CentWid + 2, CentHei);
  u8g2.drawPixel(CentWid - 2, CentHei);
  u8g2.drawPixel(CentWid + 1, CentHei + 1);
  u8g2.drawPixel(CentWid - 1, CentHei + 1);
  u8g2.drawPixel(CentWid, CentHei + 2);
}

void mH()  //w,h,15, 14
{
  u8g2.drawPixel(CentWid, CentHei - 4);
  u8g2.drawPixel(CentWid + 1, CentHei - 5);
  u8g2.drawPixel(CentWid - 1, CentHei - 5);
  u8g2.drawPixel(CentWid + 2, CentHei - 6);
  u8g2.drawPixel(CentWid - 2, CentHei - 6);
  u8g2.drawPixel(CentWid + 3, CentHei - 6);
  u8g2.drawPixel(CentWid - 3, CentHei - 6);
  u8g2.drawPixel(CentWid + 4, CentHei - 6);
  u8g2.drawPixel(CentWid - 4, CentHei - 6);
  u8g2.drawPixel(CentWid + 5, CentHei - 6);
  u8g2.drawPixel(CentWid - 5, CentHei - 6);
  u8g2.drawPixel(CentWid + 6, CentHei - 5);
  u8g2.drawPixel(CentWid - 6, CentHei - 5);
  u8g2.drawPixel(CentWid + 7, CentHei - 4);
  u8g2.drawPixel(CentWid - 7, CentHei - 4);
  u8g2.drawPixel(CentWid + 7, CentHei - 3);
  u8g2.drawPixel(CentWid - 7, CentHei - 3);
  u8g2.drawPixel(CentWid + 7, CentHei - 2);
  u8g2.drawPixel(CentWid - 7, CentHei - 2);
  u8g2.drawPixel(CentWid + 7, CentHei - 1);
  u8g2.drawPixel(CentWid - 7, CentHei - 1);
  u8g2.drawPixel(CentWid + 7, CentHei);
  u8g2.drawPixel(CentWid - 7, CentHei);
  u8g2.drawPixel(CentWid + 6, CentHei + 1);
  u8g2.drawPixel(CentWid - 6, CentHei + 1);
  u8g2.drawPixel(CentWid + 5, CentHei + 2);
  u8g2.drawPixel(CentWid - 5, CentHei + 2);
  u8g2.drawPixel(CentWid + 4, CentHei + 3);
  u8g2.drawPixel(CentWid - 4, CentHei + 3);
  u8g2.drawPixel(CentWid + 3, CentHei + 4);
  u8g2.drawPixel(CentWid - 3, CentHei + 4);
  u8g2.drawPixel(CentWid + 2, CentHei + 5);
  u8g2.drawPixel(CentWid - 2, CentHei + 5);
  u8g2.drawPixel(CentWid + 1, CentHei + 6);
  u8g2.drawPixel(CentWid - 1, CentHei + 6);
  u8g2.drawPixel(CentWid, CentHei + 7);
}

void lH()  //w,h,27, 25
{
  u8g2.drawPixel(CentWid, CentHei - 9);
  u8g2.drawPixel(CentWid + 1, CentHei - 10);
  u8g2.drawPixel(CentWid - 1, CentHei - 10);
  u8g2.drawPixel(CentWid + 2, CentHei - 11);
  u8g2.drawPixel(CentWid - 2, CentHei - 11);
  u8g2.drawPixel(CentWid + 3, CentHei - 11);
  u8g2.drawPixel(CentWid - 3, CentHei - 11);
  u8g2.drawPixel(CentWid + 4, CentHei - 12);
  u8g2.drawPixel(CentWid - 4, CentHei - 12);
  u8g2.drawPixel(CentWid + 5, CentHei - 12);
  u8g2.drawPixel(CentWid - 5, CentHei - 12);
  u8g2.drawPixel(CentWid + 6, CentHei - 12);
  u8g2.drawPixel(CentWid - 6, CentHei - 12);
  u8g2.drawPixel(CentWid + 7, CentHei - 12);
  u8g2.drawPixel(CentWid - 7, CentHei - 12);
  u8g2.drawPixel(CentWid + 8, CentHei - 12);
  u8g2.drawPixel(CentWid - 8, CentHei - 12);
  u8g2.drawPixel(CentWid + 9, CentHei - 11);
  u8g2.drawPixel(CentWid - 9, CentHei - 11);
  u8g2.drawPixel(CentWid + 10, CentHei - 11);
  u8g2.drawPixel(CentWid - 10, CentHei - 11);
  u8g2.drawPixel(CentWid + 11, CentHei - 10);
  u8g2.drawPixel(CentWid - 11, CentHei - 10);
  u8g2.drawPixel(CentWid + 12, CentHei - 9);
  u8g2.drawPixel(CentWid - 12, CentHei - 9);
  u8g2.drawPixel(CentWid + 13, CentHei - 8);
  u8g2.drawPixel(CentWid - 13, CentHei - 8);
  u8g2.drawPixel(CentWid + 13, CentHei - 7);
  u8g2.drawPixel(CentWid - 13, CentHei - 7);
  u8g2.drawPixel(CentWid + 13, CentHei - 6);
  u8g2.drawPixel(CentWid - 13, CentHei - 6);
  u8g2.drawPixel(CentWid + 13, CentHei - 5);
  u8g2.drawPixel(CentWid - 13, CentHei - 5);
  u8g2.drawPixel(CentWid + 13, CentHei - 4);
  u8g2.drawPixel(CentWid - 13, CentHei - 4);
  u8g2.drawPixel(CentWid + 13, CentHei - 3);
  u8g2.drawPixel(CentWid - 13, CentHei - 3);
  u8g2.drawPixel(CentWid + 12, CentHei - 2);
  u8g2.drawPixel(CentWid - 12, CentHei - 2);
  u8g2.drawPixel(CentWid + 12, CentHei - 1);
  u8g2.drawPixel(CentWid - 12, CentHei - 1);
  u8g2.drawPixel(CentWid + 11, CentHei);
  u8g2.drawPixel(CentWid - 11, CentHei);
  u8g2.drawPixel(CentWid + 11, CentHei + 1);
  u8g2.drawPixel(CentWid - 11, CentHei + 1);
  u8g2.drawPixel(CentWid + 10, CentHei + 2);
  u8g2.drawPixel(CentWid - 10, CentHei + 2);
  u8g2.drawPixel(CentWid + 9, CentHei + 3);
  u8g2.drawPixel(CentWid - 9, CentHei + 3);
  u8g2.drawPixel(CentWid + 8, CentHei + 4);
  u8g2.drawPixel(CentWid - 8, CentHei + 4);
  u8g2.drawPixel(CentWid + 7, CentHei + 5);
  u8g2.drawPixel(CentWid - 7, CentHei + 5);
  u8g2.drawPixel(CentWid + 6, CentHei + 6);
  u8g2.drawPixel(CentWid - 6, CentHei + 6);
  u8g2.drawPixel(CentWid + 5, CentHei + 7);
  u8g2.drawPixel(CentWid - 5, CentHei + 7);
  u8g2.drawPixel(CentWid + 4, CentHei + 8);
  u8g2.drawPixel(CentWid - 4, CentHei + 8);
  u8g2.drawPixel(CentWid + 3, CentHei + 9);
  u8g2.drawPixel(CentWid - 3, CentHei + 9);
  u8g2.drawPixel(CentWid + 2, CentHei + 10);
  u8g2.drawPixel(CentWid - 2, CentHei + 10);
  u8g2.drawPixel(CentWid + 1, CentHei + 11);
  u8g2.drawPixel(CentWid - 1, CentHei + 11);
  u8g2.drawPixel(CentWid, CentHei + 12);
}

void loop() {
  // put your main code here, to run repeatedly:
  u8g2.firstPage();
  do {
    if (val == 0) {
      u8g2.clearBuffer();
      drawMsg();
      u8g2.sendBuffer();
      delay(3000);
      val++;
    }
    else 
    {
      sH();
      u8g2.sendBuffer();
      delay(del1);
      u8g2.clearBuffer();
      mH();
      u8g2.sendBuffer();
      delay(del1);
      u8g2.clearBuffer();
      lH();
      u8g2.sendBuffer();
      delay(del2);
      u8g2.clearBuffer();
      mH();
      u8g2.sendBuffer();
      delay(del1);
      u8g2.clearBuffer();
      sH();
      u8g2.sendBuffer();
      delay(del3);
      u8g2.clearBuffer();
      mH();
      u8g2.sendBuffer();
      delay(del1);
      u8g2.clearBuffer();
      lH();
      u8g2.sendBuffer();
      delay(del2);
      u8g2.clearBuffer();
      mH();
      u8g2.sendBuffer();
      delay(del1);
      u8g2.clearBuffer();
      sH();
      u8g2.sendBuffer();
      delay(del1);
      val--;
    }
  } while ( u8g2.nextPage() );
}
