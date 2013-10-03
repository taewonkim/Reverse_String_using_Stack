#include "Screen.h"

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