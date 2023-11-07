#include <stdio.h>

void calculateDegrees(int hours, int minutes, double *hoursDegree, double *minutesDegree) {
    *hoursDegree = (360 / 12) * hours;
    *hoursDegree += (360 / 12) * (minutes / 60.0);  // Adjust for minutes
    *minutesDegree = (360 / 60) * minutes;
}

int main() {
    int hours, minutes;
    double hoursDegree, minutesDegree;

    // Prompt the user for input
    // printf("Enter the time in 12-hour format (HH:MM): ");
    scanf("%d %d", &hours, &minutes);

    if ((hours >= 1 && hours <= 12) && (minutes >= 0 && minutes <= 59)) {
        calculateDegrees(hours, minutes, &hoursDegree, &minutesDegree);
        
        double totalDegrees = hoursDegree - minutesDegree; // The total degrees between the hands
        if (totalDegrees > 180.0) {
            double total = totalDegrees - 180.0;
            printf(" %.3lf\n", total);
        } 
        else {
            printf(" %.3lf\n", totalDegrees);
        }
       
    } else {
        printf("Invalid input. Please enter a valid time in the format HH:MM.\n");
    }

    return 0;
}

