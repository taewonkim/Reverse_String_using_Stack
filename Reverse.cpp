#include <stdio.h>
#include <string.h>
#include "Const.h"
#include "Stack.h"
#include "Reverse.h"

int Reverse( char* string )
{
	int nLen = 0;
	char *pBegin = 0, *pEnd = 0;
	char nState = 0;

	// if string is NULL Situation, it is avoid ERROR Situation.
	if( string == NULL ) 
	{
		fprintf(stderr, "Error: this String Argument is NULL.\n");
		return FALSE;
	}
	
	nLen = (int) strlen( string );
	pBegin = string;
	pEnd = string + nLen;

	// Push string.
	while( pBegin <= pEnd ) 
	{
		nState = Push( *pBegin );
		if( nState == FALSE )
			break;
		pBegin++;
	}

	// I needed Reinitialize pBegin Point Variable.
	pBegin = string;

	// and Pop string.
	// As a result, return reversed string.
	while( Underflowed() == FALSE )
	{
		nState = Pop();
		if( nState == FALSE )
			break;
		*(pBegin++) = nState;
	}

	return TRUE;
}
