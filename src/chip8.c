#include <stdio.h>
#include "chip8.h"

void init(){

	unsigned char memory[MEM_SIZE];
	unsigned char V[V_SIZE];
	unsigned short[STACK_SIZE];

	stackPointer = 0;		//stack pointer
	pc = 0x200;
	opcode = 0;

	I = 0;
	delay_timer = 0;
	sound_timer = 0;

}

void emulateCycle(){

	//fetch opcode

	opcode = memory[pc] << 8 | memory[pc + 1];

	switch(opcode & 0xF000){


		case 0xA000:

			I = opcode & 0x0FFF;
			pc += 2;
		break;



		default:
			printf("Unkown Opcode: 0x%X\n", opcode);
	}


}
