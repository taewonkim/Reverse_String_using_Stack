#include <stdio.h>
#include "Screen.h"

int main( int argc, char** argv )
{
	/* Unused Variables */
	( void ) argc; ( void ) argv;

	// Test Situation of Arguments.
	//char bBuffer[] = "String Rerverse using Stack";
	//char bBuffer[] = "String";
	//char bBuffer[] = "";
	//char* bBuffer = NULL;
	//char bBuffer[] = "ÇÑ±Û TEST";
	//char bBuffer[] = "-A";
	char bBuffer[] = "abcdefghijklmnopqrstuvwxyz";
	fprintf(stdout, "Buffer Size = %d\n", sizeof(bBuffer) );
	Screen( bBuffer );
	
	return 0;
}