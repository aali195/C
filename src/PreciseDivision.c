/* Application that divides two integers and returns the value at the position after the decimal
 */

#include <stdio.h>

/* Calculates the a/b and works out the position value
 * Takes the two values as well as the position 
 * Returns the position value as an int
 */
int calcPosition(int a, int b, int n) {
    double divResult = (double) a / b;
    
    double posResult = divResult;
    /* Multiplies the value until the wanted position is the first digit */
    while (n > 0) {
        posResult = posResult * 10;
        n--;
    }
    
    /* Returns only the first digit */
    return ((int) posResult) % 10;
}

/* Prints the results
 * Takes the position as an int
 * Prints it
 */
void printResult(int position) {
    printf("%d\n", position);
}

/* Main function to take input and call the calculation and printing */
int main() {
    int a, b, n;
    scanf("%d %d %d", &a, &b, &n);
    
    int pos = calcPosition(a, b, n);
    printResult(pos);
    
    return 0;
}
