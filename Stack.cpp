#include "Const.h"
#include "Stack.h"

static int g_Top = -1;
static char g_Stack[STACK_LIMIT] = {0,};

// Overflow...
static int OverflowedWithArgs( int curPos )
{
	if(curPos >= STACK_LIMIT)
		return TRUE;
	return FALSE;
}

// if is Overflow...return 1
// otherwise return 0
// g_Top greater equal(ge) than STACK_LIMIT(256)
int Overflowed( void )
{
	if( OverflowedWithArgs( g_Top ) == TRUE )
		return TRUE;
	return FALSE;
}

// Underflow...

static int UnderflowedWithArgs( int curPos )
{
	if( curPos < ZERO )
		return TRUE;
	return FALSE;
}

// if is Underflow...return 1
// otherwise return 0
// g_Top equal(ge) than -1
int Underflowed( void )
{
	if( UnderflowedWithArgs( g_Top ) == TRUE )
		return TRUE;
	return FALSE;
}

char Push( char bChar )
{
	// Check the Overflow...
	if( OverflowedWithArgs( g_Top ) == TRUE )
		return FALSE;
	g_Top++;
	g_Stack[g_Top] = bChar;
	return bChar;
}

char Pop( void )
{
	char bChar;
	// Check the Underflow...
	if( UnderflowedWithArgs( g_Top ) == TRUE )
		return FALSE;
	g_Top--;
	bChar = g_Stack[g_Top];
	g_Stack[g_Top] = 0;
	return bChar;
}
