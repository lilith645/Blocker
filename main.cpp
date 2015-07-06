#include <stdio.h>
#include "display.h"
#include "game.h"

int main(int argc, char** argv) {

        display displayer(argc, argv);

	displayer.setup();
	
	

        return 0;
    }
