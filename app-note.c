//
// Created by Boris Gezkovski on 19.03.24.
//

#include <stdio.h>

#include "app-note.h"

// FIXME make the printing not so ungly
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