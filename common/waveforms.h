/*
 * waveforms.h
 *
 * Created: 2019-04-06 00:19:16
 *  Author: Batawi
 */ 


#ifndef WAVEFORMS_H_
#define WAVEFORMS_H_

const int8_t Sine[256] PROGMEM = {
	0, 3, 6, 9, 12, 15, 18, 21,
	24, 27, 30, 34, 37, 39, 42, 45,
	48, 51, 54, 57, 60, 62, 65, 68,
	70, 73, 75, 78, 80, 83, 85, 87,
	90, 92, 94, 96, 98, 100, 102, 104,
	106, 107, 109, 110, 112, 113, 115, 116,
	117, 118, 120, 121, 122, 122, 123, 124,
	125, 125, 126, 126, 126, 127, 127, 127,
	127, 127, 127, 127, 126, 126, 126, 125,
	125, 124, 123, 122, 122, 121, 120, 118,
	117, 116, 115, 113, 112, 110, 109, 107,
	106, 104, 102, 100, 98, 96, 94, 92,
	90, 87, 85, 83, 80, 78, 75, 73,
	70, 68, 65, 62, 60, 57, 54, 51,
	48, 45, 42, 39, 37, 34, 30, 27,
	24, 21, 18, 15, 12, 9, 6, 3,
	0, -4, -7, -10, -13, -16, -19, -22,
	-25, -28, -31, -35, -38, -40, -43, -46,
	-49, -52, -55, -58, -61, -63, -66, -69,
	-71, -74, -76, -79, -81, -84, -86, -88,
	-91, -93, -95, -97, -99, -101, -103, -105,
	-107, -108, -110, -111, -113, -114, -116, -117,
	-118, -119, -121, -122, -123, -123, -124, -125,
	-126, -126, -127, -127, -127, -128, -128, -128,
	-128, -128, -128, -128, -127, -127, -127, -126,
	-126, -125, -124, -123, -123, -122, -121, -119,
	-118, -117, -116, -114, -113, -111, -110, -108,
	-107, -105, -103, -101, -99, -97, -95, -93,
	-91, -88, -86, -84, -81, -79, -76, -74,
	-71, -69, -66, -63, -61, -58, -55, -52,
	-49, -46, -43, -40, -38, -35, -31, -28,
	-25, -22, -19, -16, -13, -10, -7, -4
};

const uint8_t sine_wave[256] PROGMEM = {
	0x80, 0x83, 0x86, 0x89, 0x8C, 0x90, 0x93, 0x96,
	0x99, 0x9C, 0x9F, 0xA2, 0xA5, 0xA8, 0xAB, 0xAE,
	0xB1, 0xB3, 0xB6, 0xB9, 0xBC, 0xBF, 0xC1, 0xC4,
	0xC7, 0xC9, 0xCC, 0xCE, 0xD1, 0xD3, 0xD5, 0xD8,
	0xDA, 0xDC, 0xDE, 0xE0, 0xE2, 0xE4, 0xE6, 0xE8,
	0xEA, 0xEB, 0xED, 0xEF, 0xF0, 0xF1, 0xF3, 0xF4,
	0xF5, 0xF6, 0xF8, 0xF9, 0xFA, 0xFA, 0xFB, 0xFC,
	0xFD, 0xFD, 0xFE, 0xFE, 0xFE, 0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFE, 0xFE, 0xFD,
	0xFD, 0xFC, 0xFB, 0xFA, 0xFA, 0xF9, 0xF8, 0xF6,
	0xF5, 0xF4, 0xF3, 0xF1, 0xF0, 0xEF, 0xED, 0xEB,
	0xEA, 0xE8, 0xE6, 0xE4, 0xE2, 0xE0, 0xDE, 0xDC,
	0xDA, 0xD8, 0xD5, 0xD3, 0xD1, 0xCE, 0xCC, 0xC9,
	0xC7, 0xC4, 0xC1, 0xBF, 0xBC, 0xB9, 0xB6, 0xB3,
	0xB1, 0xAE, 0xAB, 0xA8, 0xA5, 0xA2, 0x9F, 0x9C,
	0x99, 0x96, 0x93, 0x90, 0x8C, 0x89, 0x86, 0x83,
	0x80, 0x7D, 0x7A, 0x77, 0x74, 0x70, 0x6D, 0x6A,
	0x67, 0x64, 0x61, 0x5E, 0x5B, 0x58, 0x55, 0x52,
	0x4F, 0x4D, 0x4A, 0x47, 0x44, 0x41, 0x3F, 0x3C,
	0x39, 0x37, 0x34, 0x32, 0x2F, 0x2D, 0x2B, 0x28,
	0x26, 0x24, 0x22, 0x20, 0x1E, 0x1C, 0x1A, 0x18,
	0x16, 0x15, 0x13, 0x11, 0x10, 0x0F, 0x0D, 0x0C,
	0x0B, 0x0A, 0x08, 0x07, 0x06, 0x06, 0x05, 0x04,
	0x03, 0x03, 0x02, 0x02, 0x02, 0x01, 0x01, 0x01,
	0x01, 0x01, 0x01, 0x01, 0x02, 0x02, 0x02, 0x03,
	0x03, 0x04, 0x05, 0x06, 0x06, 0x07, 0x08, 0x0A,
	0x0B, 0x0C, 0x0D, 0x0F, 0x10, 0x11, 0x13, 0x15,
	0x16, 0x18, 0x1A, 0x1C, 0x1E, 0x20, 0x22, 0x24,
	0x26, 0x28, 0x2B, 0x2D, 0x2F, 0x32, 0x34, 0x37,
	0x39, 0x3C, 0x3F, 0x41, 0x44, 0x47, 0x4A, 0x4D,
	0x4F, 0x52, 0x55, 0x58, 0x5B, 0x5E, 0x61, 0x64,
	0x67, 0x6A, 0x6D, 0x70, 0x74, 0x77, 0x7A, 0x7D
};




const int8_t Triangle[256] PROGMEM = {
	0, 1, 3, 5, 7, 9, 11, 13,
	15, 17, 19, 21, 23, 25, 27, 29,
	31, 33, 35, 37, 39, 41, 43, 45,
	47, 49, 51, 53, 55, 57, 59, 61,
	63, 65, 67, 69, 71, 73, 75, 77,
	79, 81, 83, 85, 87, 89, 91, 93,
	95, 97, 99, 101, 103, 105, 107, 109,
	111, 113, 115, 117, 119, 121, 123, 125,
	127, 125, 123, 121, 119, 117, 115, 113,
	111, 109, 107, 105, 103, 101, 99, 97,
	95, 93, 91, 89, 87, 85, 83, 81,
	79, 77, 75, 73, 71, 69, 67, 65,
	63, 61, 59, 57, 55, 53, 51, 49,
	47, 45, 43, 41, 39, 37, 35, 33,
	31, 29, 27, 25, 23, 21, 19, 17,
	15, 13, 11, 9, 7, 5, 3, 1,
	0, -2, -4, -6, -8, -10, -12, -14,
	-16, -18, -20, -22, -24, -26, -28, -30,
	-32, -34, -36, -38, -40, -42, -44, -46,
	-48, -50, -52, -54, -56, -58, -60, -62,
	-64, -66, -68, -70, -72, -74, -76, -78,
	-80, -82, -84, -86, -88, -90, -92, -94,
	-96, -98, -100, -102, -104, -106, -108, -110,
	-112, -114, -116, -118, -120, -122, -124, -126,
	-128, -126, -124, -122, -120, -118, -116, -114,
	-112, -110, -108, -106, -104, -102, -100, -98,
	-96, -94, -92, -90, -88, -86, -84, -82,
	-80, -78, -76, -74, -72, -70, -68, -66,
	-64, -62, -60, -58, -56, -54, -52, -50,
	-48, -46, -44, -42, -40, -38, -36, -34,
	-32, -30, -28, -26, -24, -22, -20, -18,
	-16, -14, -12, -10, -8, -6, -4, -2
};
const int8_t Saw3[256] PROGMEM = {
	0, 2, 4, 6, 8, 10, 12, 14,
	16, 18, 20, 22, 23, 25, 27, 28,
	29, 31, 32, 33, 34, 35, 35, 36,
	37, 37, 38, 38, 38, 38, 39, 39,
	39, 39, 39, 38, 38, 38, 38, 38,
	38, 38, 38, 38, 38, 38, 38, 38,
	39, 39, 40, 40, 41, 42, 43, 44,
	45, 46, 47, 49, 51, 52, 54, 56,
	58, 61, 63, 65, 68, 70, 73, 76,
	79, 81, 84, 87, 90, 93, 96, 98,
	101, 104, 106, 109, 111, 114, 116, 118,
	120, 121, 123, 124, 125, 126, 126, 127,
	127, 127, 126, 126, 125, 124, 122, 120,
	118, 116, 113, 110, 107, 104, 100, 96,
	92, 87, 83, 78, 72, 67, 62, 56,
	50, 44, 38, 32, 25, 19, 12, 6,
	0, -7, -13, -20, -26, -33, -39, -45,
	-51, -57, -63, -68, -73, -79, -84, -88,
	-93, -97, -101, -105, -108, -111, -114, -117,
	-119, -121, -123, -125, -126, -127, -127, -128,
	-128, -128, -127, -127, -126, -125, -124, -122,
	-121, -119, -117, -115, -112, -110, -107, -105,
	-102, -99, -97, -94, -91, -88, -85, -82,
	-80, -77, -74, -71, -69, -66, -64, -62,
	-59, -57, -55, -53, -52, -50, -48, -47,
	-46, -45, -44, -43, -42, -41, -41, -40,
	-40, -39, -39, -39, -39, -39, -39, -39,
	-39, -39, -39, -39, -39, -39, -40, -40,
	-40, -40, -40, -39, -39, -39, -39, -38,
	-38, -37, -36, -36, -35, -34, -33, -32,
	-30, -29, -28, -26, -24, -23, -21, -19,
	-17, -15, -13, -11, -9, -7, -5, -3
};
const int8_t Tri3[256] PROGMEM = {
	0, 2, 4, 7, 9, 11, 13, 16,
	18, 20, 22, 24, 27, 29, 31, 33,
	35, 37, 38, 40, 42, 44, 46, 48,
	50, 52, 54, 56, 58, 60, 62, 64,
	66, 68, 70, 73, 75, 77, 80, 82,
	85, 87, 90, 92, 95, 97, 100, 102,
	105, 107, 109, 112, 114, 116, 118, 119,
	121, 122, 123, 125, 125, 126, 127, 127,
	127, 127, 127, 126, 125, 125, 123, 122,
	121, 119, 118, 116, 114, 112, 109, 107,
	105, 102, 100, 97, 95, 92, 90, 87,
	85, 82, 80, 77, 75, 73, 70, 68,
	66, 64, 62, 60, 58, 56, 54, 52,
	50, 48, 46, 44, 42, 40, 38, 37,
	35, 33, 31, 29, 27, 24, 22, 20,
	18, 16, 13, 11, 9, 7, 4, 2,
	0, -3, -5, -8, -10, -12, -14, -17,
	-19, -21, -23, -25, -28, -30, -32, -34,
	-36, -38, -39, -41, -43, -45, -47, -49,
	-51, -53, -55, -57, -59, -61, -63, -65,
	-67, -69, -71, -74, -76, -78, -81, -83,
	-86, -88, -91, -93, -96, -98, -101, -103,
	-106, -108, -110, -113, -115, -117, -119, -120,
	-122, -123, -124, -126, -126, -127, -128, -128,
	-128, -128, -128, -127, -126, -126, -124, -123,
	-122, -120, -119, -117, -115, -113, -110, -108,
	-106, -103, -101, -98, -96, -93, -91, -88,
	-86, -83, -81, -78, -76, -74, -71, -69,
	-67, -65, -63, -61, -59, -57, -55, -53,
	-51, -49, -47, -45, -43, -41, -39, -38,
	-36, -34, -32, -30, -28, -25, -23, -21,
	-19, -17, -14, -12, -10, -8, -5, -3
};
const int8_t Square3[256] PROGMEM = {
	0, 10, 20, 29, 39, 48, 57, 66,
	74, 82, 89, 96, 102, 107, 112, 116,
	119, 122, 124, 126, 127, 127, 127, 126,
	125, 124, 122, 121, 118, 116, 114, 111,
	109, 107, 104, 102, 100, 99, 97, 96,
	95, 95, 94, 94, 94, 95, 96, 97,
	98, 99, 101, 102, 104, 106, 108, 109,
	111, 112, 114, 115, 116, 117, 117, 118,
	118, 118, 117, 117, 116, 115, 114, 112,
	111, 109, 108, 106, 104, 102, 101, 99,
	98, 97, 96, 95, 94, 94, 94, 95,
	95, 96, 97, 99, 100, 102, 104, 107,
	109, 111, 114, 116, 118, 121, 122, 124,
	125, 126, 127, 127, 127, 126, 124, 122,
	119, 116, 112, 107, 102, 96, 89, 82,
	74, 66, 57, 48, 39, 29, 20, 10,
	0, -11, -21, -30, -40, -49, -58, -67,
	-75, -83, -90, -97, -103, -108, -113, -117,
	-120, -123, -125, -127, -128, -128, -128, -127,
	-126, -125, -123, -122, -119, -117, -115, -112,
	-110, -108, -105, -103, -101, -100, -98, -97,
	-96, -96, -95, -95, -95, -96, -97, -98,
	-99, -100, -102, -103, -105, -107, -109, -110,
	-112, -113, -115, -116, -117, -118, -118, -119,
	-119, -119, -118, -118, -117, -116, -115, -113,
	-112, -110, -109, -107, -105, -103, -102, -100,
	-99, -98, -97, -96, -95, -95, -95, -96,
	-96, -97, -98, -100, -101, -103, -105, -108,
	-110, -112, -115, -117, -119, -122, -123, -125,
	-126, -127, -128, -128, -128, -127, -125, -123,
	-120, -117, -113, -108, -103, -97, -90, -83,
	-75, -67, -58, -49, -40, -30, -21, -11
};
const int8_t Saw7[256] PROGMEM = {
	0, 1, 3, 5, 7, 8, 10, 11,
	12, 13, 14, 15, 15, 15, 15, 16,
	16, 16, 16, 16, 16, 16, 16, 17,
	17, 18, 19, 20, 21, 23, 24, 26,
	28, 30, 32, 34, 36, 38, 39, 41,
	43, 44, 45, 46, 47, 47, 48, 48,
	48, 48, 48, 48, 48, 47, 47, 47,
	47, 47, 48, 49, 50, 51, 52, 54,
	55, 57, 60, 62, 64, 66, 69, 71,
	73, 75, 77, 79, 80, 81, 82, 82,
	82, 82, 82, 81, 80, 80, 79, 78,
	77, 76, 75, 75, 75, 76, 76, 78,
	79, 81, 84, 87, 90, 94, 98, 102,
	106, 110, 114, 117, 121, 123, 125, 127,
	127, 127, 125, 122, 119, 114, 108, 101,
	93, 84, 74, 63, 51, 39, 26, 13,
	0, -14, -27, -40, -52, -64, -75, -85,
	-94, -102, -109, -115, -120, -123, -126, -128,
	-128, -128, -126, -124, -122, -118, -115, -111,
	-107, -103, -99, -95, -91, -88, -85, -82,
	-80, -79, -77, -77, -76, -76, -76, -77,
	-78, -79, -80, -81, -81, -82, -83, -83,
	-83, -83, -83, -82, -81, -80, -78, -76,
	-74, -72, -70, -67, -65, -63, -61, -58,
	-56, -55, -53, -52, -51, -50, -49, -48,
	-48, -48, -48, -48, -49, -49, -49, -49,
	-49, -49, -49, -48, -48, -47, -46, -45,
	-44, -42, -40, -39, -37, -35, -33, -31,
	-29, -27, -25, -24, -22, -21, -20, -19,
	-18, -18, -17, -17, -17, -17, -17, -17,
	-17, -17, -16, -16, -16, -16, -15, -14,
	-13, -12, -11, -9, -8, -6, -4, -2
};
const int8_t Tri7[256] PROGMEM = {
	0, 2, 4, 6, 8, 10, 12, 14,
	16, 18, 20, 22, 24, 26, 28, 30,
	32, 34, 36, 39, 41, 43, 45, 47,
	49, 51, 53, 55, 57, 59, 61, 63,
	65, 67, 69, 71, 73, 76, 78, 80,
	82, 84, 86, 88, 90, 92, 94, 96,
	97, 99, 101, 103, 106, 108, 110, 113,
	115, 118, 120, 122, 124, 125, 126, 127,
	127, 127, 126, 125, 124, 122, 120, 118,
	115, 113, 110, 108, 106, 103, 101, 99,
	97, 96, 94, 92, 90, 88, 86, 84,
	82, 80, 78, 76, 73, 71, 69, 67,
	65, 63, 61, 59, 57, 55, 53, 51,
	49, 47, 45, 43, 41, 39, 36, 34,
	32, 30, 28, 26, 24, 22, 20, 18,
	16, 14, 12, 10, 8, 6, 4, 2,
	0, -3, -5, -7, -9, -11, -13, -15,
	-17, -19, -21, -23, -25, -27, -29, -31,
	-33, -35, -37, -40, -42, -44, -46, -48,
	-50, -52, -54, -56, -58, -60, -62, -64,
	-66, -68, -70, -72, -74, -77, -79, -81,
	-83, -85, -87, -89, -91, -93, -95, -97,
	-98, -100, -102, -104, -107, -109, -111, -114,
	-116, -119, -121, -123, -125, -126, -127, -128,
	-128, -128, -127, -126, -125, -123, -121, -119,
	-116, -114, -111, -109, -107, -104, -102, -100,
	-98, -97, -95, -93, -91, -89, -87, -85,
	-83, -81, -79, -77, -74, -72, -70, -68,
	-66, -64, -62, -60, -58, -56, -54, -52,
	-50, -48, -46, -44, -42, -40, -37, -35,
	-33, -31, -29, -27, -25, -23, -21, -19,
	-17, -15, -13, -11, -9, -7, -5, -3
};
const int8_t Square7[256] PROGMEM = {
	-1, 23, 46, 66, 85, 100, 112, 120,
	125, 127, 126, 123, 119, 114, 109, 104,
	100, 98, 97, 97, 98, 101, 104, 107,
	110, 113, 114, 115, 115, 114, 112, 110,
	108, 106, 104, 102, 101, 101, 102, 103,
	105, 107, 109, 111, 112, 113, 113, 112,
	111, 110, 108, 106, 105, 103, 103, 103,
	103, 104, 105, 107, 108, 110, 111, 112,
	112, 112, 111, 110, 108, 107, 105, 104,
	103, 103, 103, 103, 105, 106, 108, 110,
	111, 112, 113, 113, 112, 111, 109, 107,
	105, 103, 102, 101, 101, 102, 104, 106,
	108, 110, 112, 114, 115, 115, 114, 113,
	110, 107, 104, 101, 98, 97, 97, 98,
	100, 104, 109, 114, 119, 123, 126, 127,
	125, 120, 112, 100, 85, 66, 46, 23,
	0, -24, -47, -67, -86, -101, -113, -121,
	-126, -128, -127, -124, -120, -115, -110, -105,
	-101, -99, -98, -98, -99, -102, -105, -108,
	-111, -114, -115, -116, -116, -115, -113, -111,
	-109, -107, -105, -103, -102, -102, -103, -104,
	-106, -108, -110, -112, -113, -114, -114, -113,
	-112, -111, -109, -107, -106, -104, -104, -104,
	-104, -105, -106, -108, -109, -111, -112, -113,
	-113, -113, -112, -111, -109, -108, -106, -105,
	-104, -104, -104, -104, -106, -107, -109, -111,
	-112, -113, -114, -114, -113, -112, -110, -108,
	-106, -104, -103, -102, -102, -103, -105, -107,
	-109, -111, -113, -115, -116, -116, -115, -114,
	-111, -108, -105, -102, -99, -98, -98, -99,
	-101, -105, -110, -115, -120, -124, -127, -128,
	-126, -121, -113, -101, -86, -67, -47, -24
};
const int8_t Saw15[256] PROGMEM = {
	0, 1, 3, 4, 5, 6, 7, 7,
	7, 7, 7, 7, 8, 9, 10, 12,
	13, 15, 17, 18, 20, 21, 21, 22,
	22, 22, 22, 22, 22, 23, 24, 25,
	27, 29, 31, 33, 34, 35, 36, 36,
	36, 36, 36, 36, 36, 37, 38, 39,
	41, 43, 45, 47, 48, 50, 51, 51,
	51, 51, 51, 51, 51, 51, 52, 53,
	54, 56, 58, 61, 63, 64, 66, 66,
	67, 66, 66, 65, 65, 65, 65, 66,
	68, 70, 72, 75, 77, 79, 81, 82,
	82, 82, 81, 80, 79, 78, 78, 78,
	80, 82, 85, 88, 92, 95, 97, 99,
	100, 99, 98, 95, 93, 90, 88, 88,
	89, 91, 96, 101, 108, 115, 121, 125,
	127, 125, 119, 108, 93, 74, 51, 26,
	0, -27, -52, -75, -94, -109, -120, -126,
	-128, -126, -122, -116, -109, -102, -97, -92,
	-90, -89, -89, -91, -94, -96, -99, -100,
	-101, -100, -98, -96, -93, -89, -86, -83,
	-81, -79, -79, -79, -80, -81, -82, -83,
	-83, -83, -82, -80, -78, -76, -73, -71,
	-69, -67, -66, -66, -66, -66, -67, -67,
	-68, -67, -67, -65, -64, -62, -59, -57,
	-55, -54, -53, -52, -52, -52, -52, -52,
	-52, -52, -52, -51, -49, -48, -46, -44,
	-42, -40, -39, -38, -37, -37, -37, -37,
	-37, -37, -37, -36, -35, -34, -32, -30,
	-28, -26, -25, -24, -23, -23, -23, -23,
	-23, -23, -22, -22, -21, -19, -18, -16,
	-14, -13, -11, -10, -9, -8, -8, -8,
	-8, -8, -8, -7, -6, -5, -4, -2
};
const int8_t Tri15[256] PROGMEM = {
	0, 2, 4, 6, 8, 10, 12, 14,
	16, 18, 20, 22, 24, 26, 28, 30,
	32, 34, 36, 38, 40, 42, 44, 46,
	48, 50, 52, 54, 56, 58, 60, 62,
	64, 66, 68, 70, 72, 74, 76, 78,
	80, 82, 84, 86, 88, 90, 92, 94,
	96, 98, 100, 102, 105, 107, 109, 111,
	112, 114, 116, 119, 121, 123, 125, 127,
	127, 127, 125, 123, 121, 119, 116, 114,
	112, 111, 109, 107, 105, 102, 100, 98,
	96, 94, 92, 90, 88, 86, 84, 82,
	80, 78, 76, 74, 72, 70, 68, 66,
	64, 62, 60, 58, 56, 54, 52, 50,
	48, 46, 44, 42, 40, 38, 36, 34,
	32, 30, 28, 26, 24, 22, 20, 18,
	16, 14, 12, 10, 8, 6, 4, 2,
	0, -3, -5, -7, -9, -11, -13, -15,
	-17, -19, -21, -23, -25, -27, -29, -31,
	-33, -35, -37, -39, -41, -43, -45, -47,
	-49, -51, -53, -55, -57, -59, -61, -63,
	-65, -67, -69, -71, -73, -75, -77, -79,
	-81, -83, -85, -87, -89, -91, -93, -95,
	-97, -99, -101, -103, -106, -108, -110, -112,
	-113, -115, -117, -120, -122, -124, -126, -128,
	-128, -128, -126, -124, -122, -120, -117, -115,
	-113, -112, -110, -108, -106, -103, -101, -99,
	-97, -95, -93, -91, -89, -87, -85, -83,
	-81, -79, -77, -75, -73, -71, -69, -67,
	-65, -63, -61, -59, -57, -55, -53, -51,
	-49, -47, -45, -43, -41, -39, -37, -35,
	-33, -31, -29, -27, -25, -23, -21, -19,
	-17, -15, -13, -11, -9, -7, -5, -3
};
const int8_t Square15[256] PROGMEM = {
	-1, 49, 90, 116, 127, 125, 115, 105,
	98, 98, 103, 109, 114, 115, 113, 108,
	104, 102, 104, 107, 110, 112, 112, 110,
	107, 104, 104, 106, 109, 111, 111, 110,
	108, 106, 105, 105, 107, 109, 111, 111,
	109, 107, 106, 105, 106, 108, 110, 110,
	110, 108, 106, 106, 106, 107, 109, 110,
	110, 109, 107, 106, 106, 107, 108, 110,
	110, 110, 108, 107, 106, 106, 107, 109,
	110, 110, 109, 107, 106, 106, 106, 108,
	110, 110, 110, 108, 106, 105, 106, 107,
	109, 111, 111, 109, 107, 105, 105, 106,
	108, 110, 111, 111, 109, 106, 104, 104,
	107, 110, 112, 112, 110, 107, 104, 102,
	104, 108, 113, 115, 114, 109, 103, 98,
	98, 105, 115, 125, 127, 116, 90, 49,
	0, -50, -91, -117, -128, -126, -116, -106,
	-99, -99, -104, -110, -115, -116, -114, -109,
	-105, -103, -105, -108, -111, -113, -113, -111,
	-108, -105, -105, -107, -110, -112, -112, -111,
	-109, -107, -106, -106, -108, -110, -112, -112,
	-110, -108, -107, -106, -107, -109, -111, -111,
	-111, -109, -107, -107, -107, -108, -110, -111,
	-111, -110, -108, -107, -107, -108, -109, -111,
	-111, -111, -109, -108, -107, -107, -108, -110,
	-111, -111, -110, -108, -107, -107, -107, -109,
	-111, -111, -111, -109, -107, -106, -107, -108,
	-110, -112, -112, -110, -108, -106, -106, -107,
	-109, -111, -112, -112, -110, -107, -105, -105,
	-108, -111, -113, -113, -111, -108, -105, -103,
	-105, -109, -114, -116, -115, -110, -104, -99,
	-99, -106, -116, -126, -128, -117, -91, -50
};



#endif /* WAVEFORMS_H_ */
