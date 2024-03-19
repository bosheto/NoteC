#include <stdio.h>

#include "app-note.h"
#include "app-command-engine.h"


int main(void) {

    if(!setupApp()) {
        printf("Error in setup!");
        return 1;
    }

    runApp();

    return 0;
}
