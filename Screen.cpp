#include <stdio.h>

#include "Const.h"
#include "Reverse.h"

void Screen( char* bBuffer )
{
	if( bBuffer != NULL )
	{
		fprintf(stdout, "Before: %s\n", bBuffer);
		if( Reverse(bBuffer) == TRUE )
			fprintf(stdout, "After : %s\n", bBuffer);
	}
}