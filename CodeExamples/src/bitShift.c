/****************************************************************************
 File name:  bitShift.c
 Author:     chadd
 Date:       Nov 7, 2011
 Class:      CS 300
 Assignment: In Class Examples
 Purpose:    Demonstrate bit shifting
 ****************************************************************************/

#include <stdio.h>

int main()
{
	unsigned int i = 0x1231a456;
	unsigned int middle;

	middle = (i & 0x000ff000) >> 12 ;

	printf(" %d %d\n", i, middle);

	printf(" %08x %08x\n", i, middle);
}
