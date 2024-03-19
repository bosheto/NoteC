//
// Created by Boris Gezkovski on 19.03.24.
//

#ifndef APP_NOTE_H
#define APP_NOTE_H


typedef struct sNote sNote;

struct sNote{
    char name[64];
    char content[256];
};

void printNote(sNote* note);
void createNote(sNote* note);

#endif //APP_NOTE_H
