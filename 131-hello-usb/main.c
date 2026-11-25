#include <stdio.h>

#include <pico/stdio.h>
#include <pico/time.h>
#include <stdlib.h>

int main() {
	if( !stdio_init_all() ) exit(EXIT_FAILURE);

	while( true ) {
		printf("Hello, world!\n");
		sleep_ms( 1000 );
	}
}
