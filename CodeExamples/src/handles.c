/****************************************************************************
 File name:		handles.c
 Author:			chadd
 Date:				Sep 29, 2011
 Class:				CS 300
 Assignment:	In Class Example
 Purpose:			Demonstrate handles (**)
 ****************************************************************************/

#include <stdio.h>
#include <stdlib.h>

/****************************************************************************
 Function:    allocInt

 Description: Allocate an int via the provided handle and set to 42

 Parameters:  hTheInt - handle for a int
 Returned:    None

 ****************************************************************************/
void allocInt(int **hTheInt)
{
	int *pInt;

	pInt = (int*) malloc(sizeof(int));

	*hTheInt = pInt;

	*pInt = 42;
	return;
}

/****************************************************************************
 Function:    main

 Description: Demonstrate handles

 Parameters:  None

 Returned:    None
 ****************************************************************************/
int main()
{

	int *pTheInt;
	int actualInt = 9;


	allocInt(&pTheInt);
	printf("%d %d\n", *pTheInt, actualInt);

	return EXIT_SUCCESS;
}

