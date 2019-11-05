#ifdef WIN32
#pragma once
#endif

#ifndef __H_STACK__
#define __H_STACK__

#define STACK_LIMIT 256

static int OverflowedWithArgs( int );
int Overflowed( void );
static int UnderflowedWithArgs( int );
int Underflowed( void );
char Push( char );
char Pop( void );

#endif
