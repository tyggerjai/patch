#define rabbit_width 128
#define rabbit_height 64

#include <Arduino.h>

const static uint8_t PROGMEM
rabbit_bits[] = {
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x0e, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x80, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x03, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80,
   0x9f, 0x01, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x60, 0xe0, 0x03, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x0e, 0x30, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60,
   0x7c, 0x38, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0xc0, 0x88, 0xe3, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x18, 0x84, 0x81, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x03, 0x18, 0x83, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x02, 0x60, 0x06, 0x01, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x80, 0x18, 0x03,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x50, 0x80, 0x29, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x23, 0x06, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x05, 0x66, 0x06,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xea, 0x7f,
   0x01, 0x0d, 0xcc, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0xd0, 0x15, 0x80, 0x0f, 0x18, 0x84, 0x0c, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0xb8, 0xe0, 0x01, 0x7b,
   0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x03, 0x00, 0x00,
   0x40, 0x03, 0x07, 0x81, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x40, 0x01, 0x00, 0x00, 0x00, 0x46, 0x7d, 0x02, 0x70, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0xd8, 0x00, 0x00,
   0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
   0x00, 0x30, 0x00, 0x00, 0x80, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x0e, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x80,
   0x02, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x70, 0x07, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x0f, 0x38, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40,
   0x07, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x80, 0x01, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x16, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x18,
   0x00, 0x00, 0xf0, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x00,
   0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x70,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04,
   0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x40, 0x00, 0x40, 0x07, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 0x80, 0x0b,
   0xbc, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x80,
   0x01, 0x00, 0x00, 0xfc, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c,
   0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x40,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00,
   0x06, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04,
   0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x01, 0x30, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x03, 0x10,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbf, 0x04, 0x00, 0x00, 0x00, 0x00,
   0x02, 0x00, 0x06, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xa1, 0x0d,
   0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x0c, 0x06, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x60, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0xe8, 0x01,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00,
   0x03, 0x03, 0xb8, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x08,
   0x00, 0x00, 0x00, 0x80, 0x00, 0x02, 0x90, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x06, 0x90, 0xbf,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc,
   0x1f, 0x0c, 0xb0, 0xcb, 0x01, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0xf0, 0x1b, 0x00, 0x1a, 0x07, 0x00, 0x00, 0x00,
   0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x11, 0x00, 0x10,
   0x02, 0x00, 0x00, 0x00, 0x00, 0x80, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x73, 0x00, 0x30, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf4, 0x4a,
   0x00, 0x00, 0x00, 0x02, 0x00, 0x46, 0x00, 0x10, 0x03, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x80, 0xda, 0xff, 0xff, 0xff, 0xfe, 0x02, 0x84, 0x2f, 0x78,
   0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0xfd, 0x03, 0xe8, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00 };
