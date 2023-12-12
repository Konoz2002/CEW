#include "fileio.h"
#include <stdio.h>

int readFromFile(const char *fileName) {
    FILE *file = fopen(fileName, "r");
    if (file == NULL) {
        printf("File '%s' not found or unable to open.\n", fileName);
        return 0;
    }

    printf("Contents of file '%s':\n", fileName);
    int ch;
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    fclose(file);
    return 1;
}

int writeToFile(const char *fileName, const char *text) {
    FILE *file = fopen(fileName, "w");
    if (file == NULL) {
        printf("Unable to create or open file '%s'.\n", fileName);
        return 0;
    }

    fprintf(file, "%s", text);
    fclose(file);
    printf("Text successfully written to file '%s'.\n", fileName);
    return 1;
}

int fileExists(const char *fileName) {
    FILE *file = fopen(fileName, "r");
    if (file != NULL) {
        fclose(file);
        return 1;
    }
    return 0;
}
