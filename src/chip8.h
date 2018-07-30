#ifndef __CHIP8_H__
#define __CHIP8_H__

#define DISPLAY_SIZE (32 * 64)	//2048 pixels
#define MEM_SIZE 4096			//4K memory
#define STACK_SIZE 16			//stack has 16 levels 2 bits each
#define V_SIZE 16				///16 8-bit registers V0 - VF

unsigned char I;			//address register 16 bits wide
unsigned char delay_timer;
unsigned char sound_timer;

unsigned short stackPointer;
unsigned short pc;
unsigned short opcode;


void init();

#endif