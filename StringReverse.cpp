#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Screen.h"

void usage( char* pName )
{
	if( pName == NULL )
		return;
	
	fprintf(stdout, "Usage: %s String\n", pName);
	fprintf(stdout, "Ex) %s ABCDEFG\n", pName);
}

int main( int argc, char** argv )
{
	char* pBuffer = NULL;
	unsigned int nLength = 0;
	
	/* UNUSED Variables */
	/*
		( void ) argc; ( void ) argv;
	*/

	// Test Situation of Arguments.
	//char bBuffer[] = "String Rerverse using Stack";
	//char bBuffer[] = "String";
	//char bBuffer[] = "";
	//char* bBuffer = NULL;
	//char bBuffer[] = "ÇÑ±Û TEST";
	//char bBuffer[] = "-A";

	if(argc < 2)
	{
		usage( argv[0] );
		return -1;
	}
	
	nLength = strlen( argv[1] );
	pBuffer = (char *) malloc( nLength );
	memset( pBuffer, 0, nLength );
	strncpy( pBuffer, argv[1], nLength );
	
	Screen( pBuffer );
	
	if( pBuffer != NULL )
	{
		free(pBuffer);
		pBuffer = NULL;
	}
	
	return 0;
}
