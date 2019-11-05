#include <stdio.h>

#include "Reverse.h"

void Screen( char* bBuffer )
{
	if( bBuffer != NULL )
	{
		//fprintf(stdout, "Before: %s\n", bBuffer);
		if( Reverse(bBuffer) == TRUE )
			fprintf(stdout, "%s\n", bBuffer);
	}
}
