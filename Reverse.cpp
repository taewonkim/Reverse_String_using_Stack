#include <stdio.h>
#include <string.h>
#include "Const.h"
#include "Stack.h"
#include "Reverse.h"

int Reverse( char* string )
{
	int i = 0, nLen = 0;	
	char *pBegin = 0, *pEnd = 0;
	char nState = 0;

	// if string is Null Situation, it is avoid ERROR Situation.
	if( string == NULL ) {
		fprintf(stderr, "Error: this String Argument is NULL.\n");
		return FALSE;
	}
	
	nLen = (int) strlen( string );
	pBegin = string;
	pEnd = string + nLen;

	// if nLen is Minus One, how problem occur?
	// nLen = -1;

	// if nLen is Zero, how problem occur?
	// nLen = 0;

	// if occur Overflow...
	// look a warning message.
	/*
	if( OverflowedWithArgs( nLen ) == TRUE )
	{
		pEnd = string + STACK_LIMIT;
		fprintf(stderr, "Warning: In this String, Occured Overflow.\n");
	}
	*/

	// if occur Underflow...
	// look a warning message.
	/*
	if( UnderflowedWithArgs( nLen ) == TRUE )
	{
		pEnd = string + ZERO;
		fprintf(stderr, "Warning: In this String, Occured Underflow.\n");
	}
	*/

	// Push string.
	while( pBegin <= pEnd ) 
	{
		nState = Push( *pBegin );
		if( nState == FALSE )
			break;
		pBegin++;
		i++;
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
