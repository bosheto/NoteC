#include <stdio.h>

typedef struct sNote sNote;

struct sNote{
    char name[64];
    char content[256];

};

void printNote(sNote* note) {
    printf("\n%s", note->name);
    printf("----------------------------");
    printf("\n\t%s", note->content);
};

int main(void) {

    sNote note;

    printf("Enter note heading: 64 characters\n");
    fgets(note.name, sizeof(note.name), stdin);
    printf("Enter note content: max 256 characters\n");
    fgets(note.content, sizeof(note.content), stdin);

    printNote(&note);

    return 0;
}
