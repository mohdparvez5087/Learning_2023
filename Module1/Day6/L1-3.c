#include <stdio.h>

// Structure to represent a time period
struct Time {
    int hours;
    int minutes;
    int seconds;
};

// Function to calculate the difference between two time periods
struct Time calculateTimeDifference(struct Time start, struct Time end) {
    struct Time difference;

    if (end.seconds < start.seconds) {
        end.seconds += 60;
        end.minutes--;
    }

    difference.seconds = end.seconds - start.seconds;

    if (end.minutes < start.minutes) {
        end.minutes += 60;
        end.hours--;
    }

    difference.minutes = end.minutes - start.minutes;
    difference.hours = end.hours - start.hours;

    return difference;
}

int main() {
    // Declare two time periods
    struct Time startTime, endTime;

    // Read the start time
    printf("Enter the start time (hh:mm:ss): ");
    scanf("%d:%d:%d", &(startTime.hours), &(startTime.minutes), &(startTime.seconds));

    // Read the end time
    printf("Enter the end time (hh:mm:ss): ");
    scanf("%d:%d:%d", &(endTime.hours), &(endTime.minutes), &(endTime.seconds));

    // Calculate the difference between the time periods
    struct Time difference = calculateTimeDifference(startTime, endTime);

    // Output the difference
    printf("Time difference: %d hours, %d minutes, %d seconds\n",
           difference.hours, difference.minutes, difference.seconds);

    return 0;
}

