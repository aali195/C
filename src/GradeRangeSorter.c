/* Application that calculates grade range totals and prints them
 */

#include <stdio.h>

#define STOPPER 0

int low = 0, medium = 0, high = 0;

/* Scans for the user input
 * Increments the variables declared based on the value entered and the conditions in the loop
 * Stops if the STOPPER constant variable is inputted by the user
 */
void scanInput() {
    int input = 1;
    while (input != STOPPER) {
        scanf("%d", &input);
        if (input >= 85) {
            high++;
        } else if (input <= 84 && input >= 60) {
            medium++;
        } else if (input < 60 && input != STOPPER) {
            low++;
        }
    }
}

/* Prints the results into the 3 categories */
void printResults() {
    printf(">=85:%d\n", high);
    printf("60-84:%d\n", medium);
    printf("<60:%d\n", low);
}

/* Main function that calls the other functions */
int main() {
    scanInput();
    printResults();
    return 0;
}
