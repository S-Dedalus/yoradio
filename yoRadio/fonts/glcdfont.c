#ifndef FONT5X7_H
#define FONT5X7_H

#ifdef __AVR__
 #include <avr/io.h>
 #include <avr/pgmspace.h>
#elif defined(ESP8266)
 #include <pgmspace.h>
#else
 #define PROGMEM
#endif

// Standard ASCII 5x7 font

static const unsigned char font[] PROGMEM = {
0x00, 0x00, 0x00, 0x00, 0x00, 
0x20, 0x20, 0x00, 0x10, 0x10, // \001 rssi 00__
0x08, 0x08, 0x00, 0x04, 0x04, // \002 rssi __00
0x60, 0x60, 0x00, 0x10, 0x10, // \003 rssi 10__
0x60, 0x60, 0x00, 0x70, 0x70, // \004 rssi 11__
0x78, 0x78, 0x00, 0x04, 0x04, // \005 rssi __10
0x78, 0x78, 0x00, 0x7C, 0x7C, // \006 rssi __11
0x00, 0x1C, 0x1C, 0x1C, 0x00, // \007 weather div
0x7A, 0x00, 0x7E, 0x12, 0x1E, // \010 ip
0x06, 0x09, 0x09, 0x06, 0x00, // \011 degree
0x7F, 0x63, 0x6B, 0x63, 0x7F, 
0x30, 0x48, 0x4D, 0x33, 0x07, 
0x06, 0x29, 0x79, 0x29, 0x06, 
0x20, 0x50, 0x3F, 0x02, 0x0C, 
0x60, 0x7F, 0x05, 0x35, 0x3F, // \016 note
0x2A, 0x1C, 0x77, 0x1C, 0x2A, 
0x00, 0x7F, 0x3E, 0x1C, 0x08, // \020 next/play
0x08, 0x1C, 0x3E, 0x7F, 0x00, // \021 prev
0x14, 0x22, 0x7F, 0x22, 0x14, 
0x00, 0x00, 0x18, 0x3C, 0x7E, // \023 speaker
0x18, 0x00, 0x00, 0x00, 0x00, // \024 25%
0x18, 0x42, 0x3C, 0x00, 0x00, // \025 50%
0x18, 0x42, 0x3C, 0x42, 0x3C, // \026 100%
0x54, 0x62, 0x7F, 0x62, 0x54, 
0x08, 0x04, 0x7E, 0x04, 0x08, 
0x08, 0x10, 0x3F, 0x10, 0x08, 
0x08, 0x08, 0x2A, 0x1C, 0x08, 
0x08, 0x1C, 0x2A, 0x08, 0x08, 
0x7F, 0x7F, 0x00, 0x7F, 0x7F, // \034 pause
0x55, 0x00, 0x55, 0x55, 0x55, // \035 list
0x30, 0x3C, 0x3F, 0x3C, 0x30, 
0x06, 0x1E, 0x7E, 0x1E, 0x06, 
0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x5F, 0x00, 0x00, 
0x00, 0x07, 0x00, 0x07, 0x00, 
0x14, 0x7F, 0x14, 0x7F, 0x14, 
0x24, 0x2A, 0x7F, 0x2A, 0x12, 
0x23, 0x13, 0x08, 0x64, 0x62, 
0x36, 0x49, 0x56, 0x20, 0x50, 
0x00, 0x00, 0x07, 0x00, 0x00, 
0x00, 0x1C, 0x22, 0x41, 0x00, 
0x00, 0x41, 0x22, 0x1C, 0x00, 
0x14, 0x08, 0x3E, 0x08, 0x14, 
0x08, 0x08, 0x3E, 0x08, 0x08, 
0x00, 0xA0, 0x60, 0x00, 0x00, 
0x08, 0x08, 0x08, 0x08, 0x08, 
0x00, 0x60, 0x60, 0x00, 0x00, 
0x20, 0x10, 0x08, 0x04, 0x02, 
0x3E, 0x51, 0x49, 0x45, 0x3E, 
0x44, 0x42, 0x7F, 0x40, 0x40, 
0x42, 0x61, 0x51, 0x49, 0x46, 
0x21, 0x41, 0x45, 0x4B, 0x31, 
0x18, 0x14, 0x12, 0x7F, 0x10, 
0x27, 0x45, 0x45, 0x45, 0x39, 
0x3C, 0x4A, 0x49, 0x49, 0x30, 
0x01, 0x71, 0x09, 0x05, 0x03, 
0x36, 0x49, 0x49, 0x49, 0x36, 
0x06, 0x49, 0x49, 0x29, 0x1E, 
0x00, 0x6C, 0x6C, 0x00, 0x00, 
0x00, 0xAC, 0x6C, 0x00, 0x00, 
0x08, 0x14, 0x22, 0x41, 0x00, 
0x14, 0x14, 0x14, 0x14, 0x14, 
0x00, 0x41, 0x22, 0x14, 0x08, 
0x02, 0x01, 0x51, 0x09, 0x06, 
0x3E, 0x41, 0x5D, 0x55, 0x5E, 
0x7C, 0x12, 0x11, 0x12, 0x7C, 
0x7F, 0x49, 0x49, 0x49, 0x36, 
0x3E, 0x41, 0x41, 0x41, 0x22, 
0x7F, 0x41, 0x41, 0x22, 0x1C, 
0x7F, 0x49, 0x49, 0x49, 0x41, 
0x7F, 0x09, 0x09, 0x09, 0x01, 
0x3E, 0x41, 0x49, 0x49, 0x7A, 
0x7F, 0x08, 0x08, 0x08, 0x7F, 
0x00, 0x41, 0x7F, 0x41, 0x00, 
0x20, 0x40, 0x41, 0x3F, 0x01, 
0x7F, 0x08, 0x14, 0x22, 0x41, 
0x7F, 0x40, 0x40, 0x40, 0x60, 
0x7F, 0x02, 0x0C, 0x02, 0x7F, 
0x7F, 0x04, 0x08, 0x10, 0x7F, 
0x3E, 0x41, 0x41, 0x41, 0x3E, 
0x7F, 0x09, 0x09, 0x09, 0x06, 
0x3E, 0x41, 0x51, 0x21, 0x5E, 
0x7F, 0x09, 0x19, 0x29, 0x46, 
0x46, 0x49, 0x49, 0x49, 0x31, 
0x03, 0x01, 0x7F, 0x01, 0x03, 
0x3F, 0x40, 0x40, 0x40, 0x3F, 
0x1F, 0x20, 0x40, 0x20, 0x1F, 
0x3F, 0x40, 0x3C, 0x40, 0x3F, 
0x63, 0x14, 0x08, 0x14, 0x63, 
0x07, 0x08, 0x70, 0x08, 0x07, 
0x61, 0x51, 0x49, 0x45, 0x43, 
0x00, 0x7F, 0x41, 0x41, 0x00, 
0x02, 0x04, 0x08, 0x10, 0x20, 
0x00, 0x41, 0x41, 0x7F, 0x00, 
0x04, 0x02, 0x01, 0x02, 0x04, 
0x40, 0x40, 0x40, 0x40, 0x40, 
0x00, 0x01, 0x02, 0x04, 0x00, 
0x20, 0x54, 0x54, 0x54, 0x78, 
0x7F, 0x48, 0x44, 0x44, 0x38, 
0x38, 0x44, 0x44, 0x44, 0x48, 
0x38, 0x44, 0x44, 0x48, 0x7F, 
0x38, 0x54, 0x54, 0x54, 0x18, 
0x08, 0x7E, 0x09, 0x01, 0x02, 
0x08, 0x54, 0x54, 0x58, 0x3C, 
0x7F, 0x08, 0x04, 0x04, 0x78, 
0x00, 0x44, 0x7D, 0x40, 0x00, 
0x20, 0x40, 0x44, 0x3D, 0x00, 
0x7F, 0x10, 0x10, 0x28, 0x44, 
0x00, 0x41, 0x7F, 0x40, 0x00, 
0x7C, 0x04, 0x78, 0x04, 0x78, 
0x7C, 0x08, 0x04, 0x04, 0x78, 
0x38, 0x44, 0x44, 0x44, 0x38, 
0x7C, 0x14, 0x14, 0x14, 0x08, 
0x08, 0x14, 0x14, 0x0C, 0x7C, 
0x7C, 0x08, 0x04, 0x04, 0x08, 
0x48, 0x54, 0x54, 0x54, 0x24, 
0x04, 0x3F, 0x44, 0x40, 0x20, 
0x3C, 0x40, 0x40, 0x20, 0x7C, 
0x1C, 0x20, 0x40, 0x20, 0x1C, 
0x3C, 0x40, 0x38, 0x40, 0x3C, 
0x44, 0x28, 0x10, 0x28, 0x44, 
0x0C, 0x50, 0x50, 0x50, 0x3C, 
0x44, 0x64, 0x54, 0x4C, 0x44, 
0x00, 0x08, 0x36, 0x41, 0x00, 
0x00, 0x00, 0x7F, 0x00, 0x00, 
0x00, 0x41, 0x36, 0x08, 0x00, 
0x02, 0x01, 0x02, 0x04, 0x02, 
0x70, 0x48, 0x44, 0x48, 0x70, 
0x00, 0x0E, 0x11, 0x0E, 0x00, 
0x00, 0x12, 0x1F, 0x10, 0x00, 
0x00, 0x12, 0x19, 0x16, 0x00, 
0x00, 0x11, 0x15, 0x0B, 0x00, 
0x00, 0x07, 0x04, 0x1F, 0x00, 
0x00, 0x17, 0x15, 0x09, 0x00, 
0x00, 0x0E, 0x15, 0x09, 0x00, 
0x00, 0x01, 0x1D, 0x03, 0x00, 
0x00, 0x0A, 0x15, 0x0A, 0x00, 
0x00, 0x12, 0x15, 0x0E, 0x00, 
0x00, 0x04, 0x04, 0x04, 0x00, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0x3E, 0x00, 0x00, 0x00, 0x00, 
0x3E, 0x3E, 0x00, 0x00, 0x00, 
0x3E, 0x3E, 0x00, 0x3E, 0x00, 
0x3E, 0x3E, 0x00, 0x3E, 0x3E, 
0x58, 0x64, 0x04, 0x64, 0x58, 
0x7F, 0x3E, 0x1C, 0x08, 0x7F, 
0x7F, 0x08, 0x1C, 0x3E, 0x7F, 
0x7F, 0x7F, 0x00, 0x7F, 0x7F, 
0x08, 0x3E, 0x22, 0x22, 0x22, 
0x22, 0x22, 0x22, 0x3E, 0x08, 
0x40, 0x00, 0x40, 0x00, 0x40, 
0x60, 0x00, 0x40, 0x00, 0x40, 
0x60, 0x00, 0x70, 0x00, 0x40, 
0x60, 0x00, 0x70, 0x00, 0x78, 
0x7C, 0x00, 0x40, 0x00, 0x40, 
0x7C, 0x00, 0x7E, 0x00, 0x40, 
0x7C, 0x00, 0x7E, 0x00, 0x7F, 
0x1C, 0x77, 0x41, 0x41, 0x41, 
0x41, 0x41, 0x41, 0x41, 0x41, 
0x41, 0x41, 0x41, 0x7F, 0x00, 
0x1C, 0x77, 0x41, 0x5D, 0x5D, 
0x41, 0x41, 0x41, 0x5D, 0x5D, 
0x5D, 0x5D, 0x41, 0x5D, 0x5D, 
0x5D, 0x5D, 0x41, 0x7F, 0x00, 
0x22, 0x1C, 0x14, 0x1C, 0x22, 
0x00, 0x08, 0x1C, 0x08, 0x00, 
0x00, 0x00, 0x77, 0x00, 0x00, 
0x46, 0x5D, 0x55, 0x5D, 0x31, 
0x7C, 0x55, 0x54, 0x55, 0x44, 
0x08, 0x08, 0x2A, 0x08, 0x08, 
0x00, 0x14, 0x08, 0x14, 0x00, 
0x08, 0x14, 0x22, 0x08, 0x14, 
0x7F, 0x41, 0x71, 0x31, 0x1F, 
0x03, 0x05, 0x7F, 0x05, 0x03, 
0x22, 0x14, 0x7F, 0x55, 0x22, 
0x02, 0x55, 0x7D, 0x05, 0x02, 
0x06, 0x09, 0x09, 0x06, 0x00, 
0x44, 0x44, 0x5F, 0x44, 0x44, 
0x1C, 0x14, 0x1C, 0x22, 0x7F, 
0x20, 0x3E, 0x61, 0x3E, 0x20, 
0x20, 0x50, 0x3F, 0x02, 0x0C, 
0x80, 0x7C, 0x20, 0x3C, 0x40, 
0x44, 0x3C, 0x04, 0x7C, 0x44, 
0x00, 0x00, 0x08, 0x00, 0x00, 
0x38, 0x55, 0x54, 0x55, 0x18, 
0x7E, 0x08, 0x10, 0x7F, 0x01, 
0x08, 0x10, 0x08, 0x04, 0x02, 
0x14, 0x08, 0x22, 0x14, 0x08, 
0x0E, 0x06, 0x0A, 0x10, 0x20, 
0x20, 0x10, 0x0A, 0x06, 0x0E, 
0x38, 0x30, 0x28, 0x04, 0x02, 
0x02, 0x04, 0x28, 0x30, 0x38, 
0x7E, 0x11, 0x11, 0x11, 0x7E, 
0x7F, 0x49, 0x49, 0x49, 0x31, 
0x7F, 0x49, 0x49, 0x49, 0x36, 
0x7F, 0x01, 0x01, 0x01, 0x03, 
0xC0, 0x7F, 0x41, 0x7F, 0xC0, 
0x7F, 0x49, 0x49, 0x49, 0x41, 
0x77, 0x08, 0x7F, 0x08, 0x77, 
0x41, 0x49, 0x49, 0x49, 0x36, 
0x7F, 0x10, 0x08, 0x04, 0x7F, 
0x7C, 0x21, 0x12, 0x09, 0x7C, 
0x7F, 0x08, 0x14, 0x22, 0x41, 
0x40, 0x3E, 0x01, 0x01, 0x7F, 
0x7F, 0x02, 0x0C, 0x02, 0x7F, 
0x7F, 0x08, 0x08, 0x08, 0x7F, 
0x3E, 0x41, 0x41, 0x41, 0x3E, 
0x7F, 0x01, 0x01, 0x01, 0x7F, 
0x7F, 0x09, 0x09, 0x09, 0x06, 
0x3E, 0x41, 0x41, 0x41, 0x22, 
0x01, 0x01, 0x7F, 0x01, 0x01, 
0x07, 0x48, 0x48, 0x48, 0x3F, 
0x0E, 0x11, 0x7F, 0x11, 0x0E, 
0x63, 0x14, 0x08, 0x14, 0x63, 
0x7F, 0x40, 0x40, 0x7F, 0xC0, 
0x07, 0x08, 0x08, 0x08, 0x7F, 
0x7F, 0x40, 0x7F, 0x40, 0x7F, 
0x7F, 0x40, 0x7F, 0x40, 0xFF, 
0x01, 0x7F, 0x48, 0x48, 0x30, 
0x7F, 0x48, 0x48, 0x30, 0x7F, 
0x7F, 0x48, 0x48, 0x48, 0x30, 
0x22, 0x41, 0x49, 0x49, 0x3E, 
0x7F, 0x08, 0x3E, 0x41, 0x3E, 
0x46, 0x29, 0x19, 0x09, 0x7F, 
0x20, 0x54, 0x54, 0x54, 0x78, 
0x3C, 0x4A, 0x4A, 0x49, 0x31, 
0x7C, 0x54, 0x54, 0x54, 0x28, 
0x7C, 0x04, 0x04, 0x04, 0x0C, 
0xC0, 0x78, 0x44, 0x7C, 0xC0, 
0x38, 0x54, 0x54, 0x54, 0x18, 
0x6C, 0x10, 0x7C, 0x10, 0x6C, 
0x44, 0x54, 0x54, 0x54, 0x28, 
0x7C, 0x20, 0x10, 0x08, 0x7C, 
0x7C, 0x40, 0x26, 0x10, 0x7C, 
0x7C, 0x10, 0x10, 0x28, 0x44, 
0x40, 0x38, 0x04, 0x04, 0x7C, 
0x7C, 0x08, 0x10, 0x08, 0x7C, 
0x7C, 0x10, 0x10, 0x10, 0x7C, 
0x38, 0x44, 0x44, 0x44, 0x38, 
0x7C, 0x04, 0x04, 0x04, 0x7C, 
0x7C, 0x14, 0x14, 0x14, 0x08, 
0x38, 0x44, 0x44, 0x44, 0x48, 
0x04, 0x04, 0x7C, 0x04, 0x04, 
0x0C, 0x50, 0x50, 0x50, 0x3C, 
0x18, 0x24, 0xFC, 0x24, 0x18, 
0x44, 0x28, 0x10, 0x28, 0x44, 
0x7C, 0x40, 0x40, 0x7C, 0xC0, 
0x0C, 0x10, 0x10, 0x10, 0x7C, 
0x7C, 0x40, 0x7C, 0x40, 0x7C, 
0x7C, 0x40, 0x7C, 0x40, 0xFC, 
0x04, 0x7C, 0x50, 0x50, 0x20, 
0x7C, 0x50, 0x50, 0x20, 0x7C, 
0x7C, 0x50, 0x50, 0x50, 0x20, 
0x28, 0x44, 0x54, 0x54, 0x38, 
0x7C, 0x10, 0x38, 0x44, 0x38, 
0x48, 0x34, 0x14, 0x14, 0x7C, 
0x06, 0x09, 0x09, 0x06, 0x00, // 1 °
0x7c, 0x12, 0x11, 0x92, 0x7c, // 2 Ą
0x20, 0x54, 0x54, 0x78, 0xc0, // 3 ą
0x7f, 0x49, 0x49, 0x49, 0xc1, // 4 Ę
0x38, 0x54, 0x54, 0x54, 0x98, // 5 ę
0x24, 0x4a, 0x4a, 0x4a, 0x31, // 6 Ś
0x48, 0x54, 0x54, 0x56, 0x25, // 7 ś
0x3c, 0x42, 0x42, 0x42, 0x25, // 10 Ć
0x38, 0x44, 0x44, 0x46, 0x29, // 11 ć
0x00, 0x00, 0x00, 0x00, 0x00, // 12
0x3c, 0x42, 0x42, 0x42, 0x3d, // 13 Ó
0x38, 0x44, 0x44, 0x46, 0x39, // 14 ó
0x00, 0x00, 0x00, 0x00, 0x00, // 15
0x69, 0x59, 0x49, 0x4d, 0x4b, // 16 Ż
0x44, 0x64, 0x55, 0x4c, 0x44, // 17 ż
0x62, 0x5a, 0x4a, 0x4e, 0x43, // 20 Ź
0x44, 0x64, 0x54, 0x4e, 0x45, // 21 ź
0x7e, 0x08, 0x10, 0x22, 0x7d, // 22 Ń
0x7c, 0x08, 0x04, 0x06, 0x79, // 23 ń
0x7f, 0x48, 0x44, 0x40, 0x40, // 24 Ł
0x00, 0x51, 0x7f, 0x44, 0x00, // 25 ł
0xa2, 0xe7, 0xfd, 0x07, 0x02, // 26 klucz
0x30, 0x3c, 0x1e, 0x3c, 0x30, // 27 up
0x36, 0x3e, 0x1c, 0x1c, 0x08, // 28 right
0x06, 0x1e, 0x3c, 0x1e, 0x06, // 29 down
0x08, 0x1c, 0x1c, 0x3e, 0x36 // 29 left
};

static inline void avoid_unused_const_variable_compiler_warning(void) {
  (void)font;
}
#endif // FONT5X7_H
