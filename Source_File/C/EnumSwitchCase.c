#include <stdio.h>

// Declare an enum named 'Month' representing months of the year
enum Month {
    January,   // 0
    February,  // 1
    March,     // 2
    April,     // 3
    May,       // 4
    June,      // 5
    July,      // 6
    August,    // 7
    September, // 8
    October,   // 9
    November,  // 10
    December   // 11
};

int main() {
    // Declare a variable of type 'enum Month'
    enum Month currentMonth;

    // Assign a value from the 'Month' enum to the variable
    currentMonth = August;

    // Use a switch statement to determine the number of days in the current month
    switch (currentMonth) {
        case January:
        case March:
        case May:
        case July:
        case August:
        case October:
        case December:
            printf("This month has 31 days.\n");
            break;

        case April:
        case June:
        case September:
        case November:
            printf("This month has 30 days.\n");
            break;

        case February:
            printf("This month has either 28 or 29 days.\n");
            break;

        default:
            printf("Invalid month.\n");
    }

    return 0;
}
