#include <stdio.h>

#include "Const.h"
#include "Stack.h"
#include "Reverse.h"

void Screen( char* bBuffer )
{
	if( bBuffer != NULL )
	{
		printf("%s\n", bBuffer);
		if( Reverse(bBuffer) == TRUE )
			printf("%s\n", bBuffer);
	}
}

int main( int argc, char** argv )
{
	/* Unused Variables */
	( void ) argc; ( void ) argv;

	// Test Situation of Arguments.
	char bBuffer[] = "String Rerverse using Stack";
	//char bBuffer[] = "String";
	//char bBuffer[] = "";
	//char* bBuffer = NULL;
	Screen( bBuffer );
	
	return 0;
}