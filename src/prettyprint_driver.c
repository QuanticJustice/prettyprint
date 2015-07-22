#include <stdio.h>
#include <stdlib.h>
#include "prettyprint.h"

int main( int argc, char* argv[] )
{
	printf( "argc is: %d\n", argc );

	prettyprint( 5 );

	return 0;
}
