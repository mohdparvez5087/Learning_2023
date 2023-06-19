#include <stdio.h>
#include <ctype.h>
#include <string.h>

void toggleCase(char* str) {
    int length = strlen(str);
	int i;
    for (i = 0; i < length; i++) {
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
        } else if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
    }
}

int main() {
    char str[] = "Hello, World!";
    printf("Original String: %s\n", str);

    toggleCase(str);
    printf("Toggled String: %s\n", str);

    return 0;
}

