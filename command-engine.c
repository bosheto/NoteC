//
// Created by Boris Gezkovski on 19.03.24.
//

#include <stdio.h>
#include <stdlib.h>

#include "app-command-engine.h"
#include "app-note.h"

#define CREATE_NOTE 1
#define EXIT 0


void clearInputBuffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {} // Clear the input buffer
}

bool setupApp() {
    return true;
}

void runApp() {
    int exit = 0;
    sNote *note;
    while(exit == 0) {
        int option;
        printf("enter option\n");
        scanf("%d", &option);
        clearInputBuffer();

        switch (option) {
            case EXIT:
                exit = 1;
            break;
            case CREATE_NOTE:
                note = malloc(sizeof(sNote));
            createNote(note);
            printNote(note);
            free(note);
            break;
            default:
                break;
        }
    }
}