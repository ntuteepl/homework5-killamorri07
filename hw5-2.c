#include <stdio.h>

int main() {
    int totalMinutes;
    double rate = 0.9;  // Rate per minute
    double totalFee;

    // Prompt the user for input
    // printf("Enter the total number of minutes: ");
    scanf("%d", &totalMinutes);

    // Calculate the total fee
    if (totalMinutes <= 800) {
        totalFee = totalMinutes * rate;
    } else if (totalMinutes <= 1500) {
        totalFee = totalMinutes * rate * 0.9; // 10% discount for all minutes
    } else {
        totalFee = totalMinutes * rate * 0.79; // 21% discount for all minutes
    }

    // Display the result with one decimal point
    printf("%.1lf\n", totalFee);

    return 0;
}

