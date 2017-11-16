// Animated pendant for Adafruit Pro Trinket and SSD1306 OLED display,
// inspired by the After Dark "Flying Toasters" screensaver.
// Triggered with vibration switch between digital pins 3 and 4.

//#include <Snooze.h>
#include <SPI.h>
#include <i2c_t3.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include "pics.c" // Graphics data is here

#if (SSD1306_LCDHEIGHT != 64)
#error("Height incorrect, please fix Adafruit_SSD1306.h!");
#endif

//#define OLED_DC 5 // OLED control pins are configurable.
//#define OLED_CS 6 // These are different from other SSD1306 examples

// Uses 18 and 19 on Teensy 3.1 - 18 for SDA, 19 for SCL
#define OLED_RESET 4 // because the Pro Trinket has no pin 2 or 7.
// Hardware SPI for Data & Clk -- pins 11 & 13 on Uno or Pro Trinket.
Adafruit_SSD1306 display(OLED_RESET);

int16_t x = 0;
int16_t y = 0;
int i;
int j;
int c = 0;

void wipe_right(int next_bm){
	for(i = 0; i < 129; i++){
		for (int n = 0; n < i; n++){
			display.drawFastVLine(n,0, 64,1);
		}

		display.drawXBitmap(i-127, 0, pic_bits[next_bm], 128,64, 0);
		display.drawChar(1,1,c+48,1,0,2);
		display.display();
		delay(6);
	}


}
void setup() {

//DDRB = DDRC = DDRD = 0x00; // Set all pins to inputs and
//PORTB = PORTC = PORTD = 0xFF; // enable pullups (for power saving)

	display.begin(SSD1306_SWITCHCAPVCC);
	display.stopscroll();
	display.invertDisplay(1);
	display.clearDisplay();
	display.drawXBitmap(0, y, pic_bits[0],  128,64,1);
	display.display();
	delay(1000);
}

void loop() {
	x = 0;
	y = 0;

	c++;
	c = c%3;


	wipe_right(c);
	delay(2000);


			


}


