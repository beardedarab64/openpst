
#ifndef _definitions_h
#define _definitions_h


#if defined(_WIN32) && !defined(__MINGW32__)
	#define _CRT_SECURE_NO_WARNINGS

	#define PACKED( __Declaration__ ) __pragma( pack(push, 1) ) __Declaration__ __pragma( pack(pop) )

	typedef unsigned char uint8_t;
	typedef unsigned short uint16_t;
	typedef unsigned int uint32_t;
#else
	#include <stdint.h>
	#define PACKED( __Declaration__ ) __Declaration__ __attribute__((__packed__))
#endif


#endif //_definitions_h
