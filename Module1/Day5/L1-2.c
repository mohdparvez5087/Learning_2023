#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char timeStr[] = "10:12:50";

    // Extract hours, minutes, and seconds from the time string
    char* token = strtok(timeStr, ":");
    int hours = atoi(token);
    token = strtok(NULL, ":");
    int minutes = atoi(token);
    token = strtok(NULL, ":");
    int seconds = atoi(token);

    // Calculate the total seconds
    int totalSeconds = (hours * 3600) + (minutes * 60) + seconds;

    printf("Total seconds: %d\n", totalSeconds);

    return 0;
}

