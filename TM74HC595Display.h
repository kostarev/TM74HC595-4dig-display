/*
  TM74HC595Display.h - Library for use 4LED display with 2 TM74HC595.
  Created by Kostarev V., February 23, 2016.
*/
#ifndef TM74HC595Display_h
#define TM74HC595Display_h
  
class TM74HC595Display
{
  public:
    TM74HC595Display(int SCLK, int RCLK, int DIO);
    void send(unsigned char X);
	void send(unsigned char X, unsigned char port);
	void digit4(int n, int replay, bool showZero);
	void digit4(int n, int replay);
	void digit4(int n);
	void digit4showZero(int n, int replay);
	void digit4showZero(int n);
	void digit2(int n, int port);
	void digit2(int n, int port, int replay);

  private:
    int _SCLK;
	int _RCLK;
	int _DIO;
};
 
#endif
