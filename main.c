#include <stdio.h>
#include <stdlib.h>

#include "app-note.h"

#define CREATE_NOTE 1
#define EXIT 0

void clearInputBuffer(void);

int main(void) {
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

    return 0;
}


void printNote(sNote* note) {
    printf("\n%s\n", note->name);
    printf("----------------------------");
    printf("\n\t%s\n", note->content);
};

void createNote(sNote* note) {
    printf("Enter note name: %lu characters\n", sizeof(note->name));
    fgets(note->name, sizeof(note->name), stdin);
    printf("Enter note content: %lu characters\n", sizeof(note->content));
    fgets(note->content, sizeof(note->content), stdin);
}

void clearInputBuffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {} // Clear the input buffer
}