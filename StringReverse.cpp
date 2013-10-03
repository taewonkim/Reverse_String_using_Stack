#include <stdio.h>
#include <string.h>

#define TRUE		1
#define FALSE		0
#define ZERO		0

static const int STACK_LIMIT = 16;
static int g_Top = -1;
static char g_Stack[STACK_LIMIT] = {0,};

// Overflow...

int OverflowedWithArgs(int curPos)
{
	if(curPos >= STACK_LIMIT)
		return TRUE;
	return FALSE;
}

// if is Overflow...return 1
// otherwise return 0
// g_Top greater equal(ge) than STACK_LIMIT(245)
int Overflowed()
{
	if( OverflowedWithArgs( g_Top ) == TRUE )
		return TRUE;
	return FALSE;
}

// Underflow...

int UnderflowedWithArgs(int curPos)
{
	if( curPos < ZERO )
		return TRUE;
	return FALSE;
}

// if is Underflow...return 1
// otherwise return 0
// g_Top equal(ge) than -1
int Underflowed()
{
	if( UnderflowedWithArgs( g_Top ) == TRUE )
		return TRUE;
	return FALSE;
}

int GreateNumber(int nNum)
{
	return nNum + 1;
}

int LessNumber(int nNum)
{
	return nNum - 1;
}

char Push(char c)
{
	// Check the Overflow...
	if( OverflowedWithArgs( GreateNumber( g_Top ) ) == TRUE )
		return FALSE;
	g_Top++;
	g_Stack[g_Top] = c;
	return c;
}

char Pop()
{
	char bChar;
	// Check the Underflow...
	if( UnderflowedWithArgs( LessNumber( g_Top ) ) == TRUE )
		return FALSE;
	g_Top--;
	bChar = g_Stack[g_Top];
	g_Stack[g_Top] = 0;
	return bChar;
}

int Reverse(char* string)
{
	int i = 0, nLen = 0;	
	char *pBegin = 0, *pEnd = 0;
	char nState = FALSE;

	// if string is Null Situation, it is avoid ERROR Situation.
	if( string == NULL ) {
		fprintf(stderr, "Warning: this String Argument is NULL.\n");
		return FALSE;
	}
	
	pBegin = string;
	pEnd = string + nLen;
	nLen = (int) strlen( string );

	// if nLen is Minus One, how problem occur?
	// nLen = -1;

	// if nLen is Zero, how problem occur?
	// nLen = 0;

	// if occur Overflow...
	// return this function
	if( OverflowedWithArgs( nLen ) == TRUE ) {
		pEnd = string + STACK_LIMIT;
		fprintf(stderr, "Warning: In this String, Occured Overflow.\n");
	}

	// if occur Underflow...
	// return this function
	if( UnderflowedWithArgs( nLen ) == TRUE ) {
		pEnd = string + ZERO;
		fprintf(stderr, "Warning: In this String, Occured Underflow.\n");
	}

	// Push string.
	while( *pBegin != NULL && 
		pBegin <= pEnd ) {
		nState = Push(*pBegin);
		if( nState == FALSE )
			break;
		pBegin++;
		i++;
	}

	// I needed Reinitialize pBegin Point Variable.
	pBegin = string;

	// and Pop string.
	// As a result, return reversed string.
	while( Underflowed() == FALSE && 
		pBegin <= pEnd ) {
		nState = Pop();
		if( nState == FALSE )
			break;
		*(pBegin++) = nState;
	}

	return TRUE;
}

int main(int argc, char** argv)
{
	// Test Situation of Arguments.
	char bBuffer[] = "String Rerverse using Stack";
	//char bBuffer[] = "String";
	//char bBuffer[] = "";
	//char* bBuffer = NULL;

	if( bBuffer != NULL )
	{
		printf("%s\n", bBuffer);
		if( Reverse(bBuffer) == TRUE )
			printf("%s\n", bBuffer);
	}
	return 0;
}