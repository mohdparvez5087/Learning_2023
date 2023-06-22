#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void changeToUpperCase(char *str) {
    while (*str) {
        *str = toupper((unsigned char)*str);
        str++;
    }
}

void changeToLowerCase(char *str) {
    while (*str) {
        *str = tolower((unsigned char)*str);
        str++;
    }
}

void changeToSentenceCase(char *str) {
    int len = strlen(str);
    int i;

    for (i = 0; i < len; i++) {
        if (i == 0 || (i > 0 && str[i - 1] == ' ')) {
            str[i] = toupper((unsigned char)str[i]);
        } else {
            str[i] = tolower((unsigned char)str[i]);
        }
    }
}

void copyFileWithCaseConversion(FILE *sourceFile, FILE *destinationFile, int option) {
    char ch;

    while ((ch = fgetc(sourceFile)) != EOF) {
        if (option == 'u') {
            ch = toupper((unsigned char)ch);
        } else if (option == 'l') {
            ch = tolower((unsigned char)ch);
        } else if (option == 's') {
            // Assume the sentence starts with a letter or digit
            if (isalpha((unsigned char)ch) || isdigit((unsigned char)ch)) {
                changeToSentenceCase(&ch);
            }
        }

        fputc(ch, destinationFile);
    }
}

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Usage: ./cp <option> <source_file> <destination_file>\n");
        return 1;
    }

    char *option = argv[1];
    char *sourceFileName = argv[2];
    char *destinationFileName = argv[3];

    FILE *sourceFile = fopen(sourceFileName, "r");
    if (sourceFile == NULL) {
        printf("Unable to open the source file.\n");
        return 1;
    }

    FILE *destinationFile = fopen(destinationFileName, "w");
    if (destinationFile == NULL) {
        printf("Unable to create the destination file.\n");
        fclose(sourceFile);
        return 1;
    }

    if (strcmp(option, "-u") == 0) {
        copyFileWithCaseConversion(sourceFile, destinationFile, 'u');
    } else if (strcmp(option, "-l") == 0) {
        copyFileWithCaseConversion(sourceFile, destinationFile, 'l');
    } else if (strcmp(option, "-s") == 0) {
        copyFileWithCaseConversion(sourceFile, destinationFile, 's');
    } else {
        char ch;
        while ((ch = fgetc(sourceFile)) != EOF) {
            fputc(ch, destinationFile);
        }
    }

    fclose(sourceFile);
    fclose(destinationFile);

    printf("File copied successfully.\n");

    return 0;
}

