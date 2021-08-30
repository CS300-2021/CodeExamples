/****************************************************************************
 File name:		pointerToStaticData.c
 Author:			chadd
 Date:				Sep 8, 2011
 Class:				CS300
 Assignment:	In Class Example
 Purpose:    	Demonstrate pointers to static data
 ****************************************************************************/

#include <stdio.h>
#include <stdlib.h>

/****************************************************************************
 Function:    	main
 Description: 	sets a pointer to static data and then access that data via
 	 	 	 	 	 	 		the pointer
 Parameters:  	None
 Returned:    	None
 ****************************************************************************/
int main ()
{
	int value;
	int *pValue = &value;

	value = 8;

	printf ("%d %d\n", value, *pValue);

	/*
	 * print the memory address of value and the memory address stored
	 * in pValue
	 */

	// %p means pointer (must be void *)
	printf ("%p %p\n", (void*) &value, (void*) pValue);

	return EXIT_SUCCESS;
}
