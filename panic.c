#define panic_width 128
#define panic_height 64

#include <Arduino.h>
const static uint8_t PROGMEM
panic_bits[] = {
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
   0xff, 0xff, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x00, 0xf0,
   0xff, 0x1f, 0xe0, 0x1f, 0xf8, 0x0f, 0x08, 0x01, 0x00, 0xc0, 0xff, 0xff,
   0xff, 0xff, 0x00, 0x00, 0xff, 0x07, 0x85, 0x1f, 0xe0, 0x0f, 0x60, 0x01,
   0x00, 0x80, 0xff, 0xff, 0xff, 0x7f, 0xfe, 0x2f, 0xfe, 0xf1, 0x3a, 0xce,
   0xe7, 0xef, 0x53, 0xfc, 0xff, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xaa, 0xea,
   0xfc, 0x55, 0xcb, 0x5c, 0x8d, 0x8f, 0xca, 0xa8, 0x55, 0x95, 0xff, 0xff,
   0xff, 0x7f, 0x5a, 0x55, 0x7c, 0x6a, 0xad, 0x4c, 0x95, 0x6f, 0x5b, 0x55,
   0xaa, 0xda, 0xff, 0xff, 0xff, 0xff, 0x2a, 0x40, 0x71, 0x5a, 0xb9, 0xd9,
   0x36, 0xaf, 0x52, 0x51, 0xb6, 0x82, 0xff, 0xff, 0xff, 0x7f, 0x96, 0xcf,
   0xb3, 0x15, 0x40, 0x93, 0x2d, 0x4e, 0x89, 0x01, 0x2a, 0xc0, 0xff, 0xff,
   0xff, 0xff, 0xb4, 0x1f, 0xa6, 0x96, 0x6f, 0x95, 0xea, 0xac, 0xc3, 0xff,
   0xac, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x96, 0xbf, 0x95, 0xed, 0x5f, 0xc3,
   0x56, 0x49, 0xf9, 0xff, 0xaa, 0xff, 0xff, 0xff, 0xff, 0xff, 0xac, 0x3f,
   0x25, 0xe5, 0x9f, 0x8e, 0x55, 0x4b, 0xf3, 0xff, 0x9a, 0xff, 0xff, 0xff,
   0xff, 0x7f, 0x9a, 0xbf, 0xcb, 0xe6, 0x5f, 0x45, 0x63, 0xad, 0xfa, 0xff,
   0x96, 0xff, 0xff, 0xff, 0xff, 0xff, 0xaa, 0x3f, 0x8a, 0xe5, 0x9f, 0x8a,
   0x86, 0xc5, 0xf2, 0xff, 0xb4, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x96, 0xbf,
   0x4b, 0xf5, 0x5f, 0xcb, 0x52, 0xab, 0xf9, 0xff, 0x96, 0xff, 0xff, 0xff,
   0xff, 0xff, 0xb4, 0x3f, 0x8a, 0xe6, 0x5f, 0x85, 0x36, 0x52, 0xf3, 0xff,
   0xb4, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x96, 0xbf, 0xab, 0xc5, 0xdf, 0xd6,
   0x32, 0xb5, 0xfa, 0xff, 0x96, 0xff, 0xff, 0xff, 0xff, 0xff, 0xac, 0x9f,
   0x25, 0x9d, 0xaf, 0x92, 0xf6, 0xd2, 0xf2, 0xff, 0xac, 0xff, 0xff, 0xff,
   0xff, 0x7f, 0x9a, 0x43, 0xb5, 0x2a, 0xc0, 0xca, 0xf2, 0x5c, 0xfb, 0xff,
   0x9a, 0xff, 0xff, 0xff, 0xff, 0xff, 0x2a, 0x60, 0x72, 0xda, 0xaa, 0x99,
   0xe6, 0xd3, 0xf2, 0xff, 0xaa, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x56, 0xdf,
   0x79, 0x56, 0x4d, 0xcc, 0xf2, 0xab, 0xfa, 0xff, 0x96, 0xff, 0xff, 0xff,
   0xff, 0xff, 0xda, 0xaa, 0xfc, 0xb4, 0xd5, 0x9c, 0xe6, 0xd7, 0xf2, 0xff,
   0xb4, 0xff, 0xff, 0xff, 0xff, 0x7f, 0xb6, 0x36, 0xfe, 0x53, 0x0b, 0xcf,
   0xf2, 0xa7, 0xf9, 0xff, 0x96, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00,
   0xff, 0x07, 0x8a, 0x1f, 0xe0, 0x0f, 0xf0, 0xff, 0x80, 0xff, 0xff, 0xff,
   0xff, 0xff, 0x76, 0xfb, 0xff, 0x7f, 0xf1, 0xdf, 0xfb, 0xbf, 0xfb, 0xff,
   0xae, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x55, 0xfd,
   0xff, 0xaa, 0xff, 0xd5, 0xff, 0xd3, 0xab, 0xff, 0x97, 0xfe, 0xff, 0xff,
   0xff, 0xff, 0x00, 0x80, 0x7f, 0x00, 0xff, 0x00, 0xff, 0x01, 0x03, 0xfe,
   0x00, 0xe0, 0xff, 0xff, 0xff, 0x7f, 0xde, 0x2a, 0x3f, 0x37, 0xff, 0x2e,
   0xff, 0x95, 0x59, 0x3e, 0xfa, 0xc2, 0xff, 0xff, 0xff, 0xff, 0x54, 0xdb,
   0x3e, 0x6d, 0xfe, 0x68, 0xfc, 0x3d, 0xd3, 0xbe, 0xab, 0x9e, 0xff, 0xff,
   0xff, 0x7f, 0x5a, 0xb5, 0x9e, 0xaa, 0xfe, 0xae, 0xfc, 0x91, 0x59, 0x4e,
   0x6a, 0xd5, 0xff, 0xff, 0xff, 0xff, 0x36, 0xa0, 0xbc, 0xb6, 0xfc, 0xda,
   0xf9, 0x31, 0xd3, 0xce, 0x5b, 0x95, 0xff, 0xff, 0xff, 0x7f, 0xaa, 0x57,
   0x5c, 0xd5, 0xfc, 0xb4, 0xf2, 0x95, 0x59, 0xa6, 0x02, 0xc8, 0xff, 0xff,
   0xff, 0xff, 0x2c, 0x6f, 0x89, 0xa5, 0xf9, 0xaa, 0xe5, 0x31, 0xd3, 0x56,
   0xf2, 0x87, 0xff, 0xff, 0xff, 0x7f, 0xaa, 0xa7, 0x6d, 0x51, 0xfd, 0x5a,
   0xcb, 0xad, 0x59, 0xb2, 0xfc, 0xdf, 0xff, 0xff, 0xff, 0xff, 0x2c, 0xc7,
   0x4d, 0x63, 0xf9, 0xb4, 0x9a, 0x29, 0xd3, 0x52, 0xfc, 0xff, 0xff, 0xff,
   0xff, 0x7f, 0x2a, 0xb0, 0x64, 0xcd, 0xf2, 0xaa, 0x15, 0x9d, 0x59, 0x6a,
   0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0x5a, 0x55, 0x54, 0x9d, 0xf6, 0x2c,
   0x76, 0x30, 0xd3, 0x52, 0xfe, 0xff, 0xff, 0xff, 0xff, 0x7f, 0xb6, 0xb6,
   0xb2, 0x5c, 0xe5, 0x1a, 0xaa, 0xac, 0x59, 0x6a, 0xfe, 0xff, 0xff, 0xff,
   0xff, 0xff, 0xaa, 0x55, 0xab, 0x5c, 0xeb, 0x34, 0xa9, 0x2a, 0xd3, 0xaa,
   0xfe, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x36, 0x80, 0x59, 0x80, 0xea, 0x2a,
   0xdb, 0x9e, 0x59, 0xb2, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0x2a, 0xff,
   0xd5, 0xab, 0xea, 0x2c, 0xb3, 0x32, 0xd3, 0x66, 0xfc, 0x9f, 0xff, 0xff,
   0xff, 0x7f, 0xb6, 0xff, 0xb4, 0xda, 0xf6, 0x9a, 0xc7, 0xae, 0x59, 0x52,
   0xf8, 0xc7, 0xff, 0xff, 0xff, 0xff, 0x2a, 0xff, 0x54, 0x55, 0xd5, 0x34,
   0x9f, 0x2a, 0xd3, 0x56, 0x03, 0x90, 0xff, 0xff, 0xff, 0x7f, 0x96, 0xff,
   0x36, 0x00, 0xcd, 0x2a, 0x9f, 0x9d, 0x59, 0xae, 0xad, 0xd6, 0xff, 0xff,
   0xff, 0xff, 0x34, 0xff, 0xac, 0xff, 0x8a, 0x2c, 0x3f, 0x35, 0xd3, 0xce,
   0x55, 0x95, 0xff, 0xff, 0xff, 0x7f, 0x96, 0x7f, 0xcb, 0xff, 0x8c, 0x9a,
   0x7f, 0x92, 0x59, 0x1e, 0x6d, 0xdb, 0xff, 0xff, 0xff, 0xff, 0x34, 0x7f,
   0x9a, 0xff, 0xa9, 0x34, 0xff, 0x30, 0xb3, 0x7e, 0xda, 0x8a, 0xff, 0xff,
   0xff, 0x7f, 0x80, 0x7f, 0xe0, 0xff, 0x01, 0x00, 0xff, 0x81, 0x01, 0xfe,
   0x20, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xbf, 0xff, 0xef, 0xff, 0xdf, 0xff,
   0xff, 0xbf, 0xff, 0xfe, 0x4f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
   0xff, 0xff, 0xff, 0xff };
