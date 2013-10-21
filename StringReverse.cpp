#include <stdio.h>
#include <stdlib.h>
#include "Screen.h"

void usage( void )
{
	fprintf(stdout, "Usage: StringReverse String\n");
	fprintf(stdout, "Ex) StringReverse ABCDEFG\n");
}

int main( int argc, char** argv )
{
	/* Unused Variables */
	//( void ) argc; ( void ) argv;

	// Test Situation of Arguments.
	//char bBuffer[] = "String Rerverse using Stack";
	//char bBuffer[] = "String";
	//char bBuffer[] = "";
	//char* bBuffer = NULL;
	//char bBuffer[] = "ÇÑ±Û TEST";
	//char bBuffer[] = "-A";

	if(argc < 2)
	{
		usage();
		return -1;
	}
	
	Screen( argv[1] );
	
	//while(true)
	/*
	{
		//char bBuffer[] = "abcdefghijklmnopqrstuvwxyz";
		char bBuffer[] = "123456789";
		Screen( bBuffer );
	}
	*/
	
	return 0;
}
