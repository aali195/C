/* Application that calculates the largest common factor and smallest common multiple of 2 positive integers
 */

#include <stdio.h>

/* Prints the results
 * Takes the worked out scm and lcf values as int
 * Prints them
 */
void printResult(int lcfValue, int scmValue) {
    printf("%d ", lcfValue);
    printf("%d\n", scmValue);
}

/* Calculates the LCF and 
 * Takes the two values as int
 * Returns the LCF as int
 */
int calcLCF(int n1Value, int n2Value) {
    /* If the value of the first is 0, then return the other */
    if (n1Value == 0) {
        return n2Value;
    }
    
    /* while the value of the second is not 0m repeat the if statement 's subtraction until it is */
    while (n2Value != 0) {
        if (n1Value > n2Value) {
            n1Value = n1Value - n2Value;
        } else {
            n2Value = n2Value - n1Value;
        }
    }
    
    /* Return the modified value */
    return n1Value;
}

/* Main function that takes user input and calls calculation and printing */
int main() {
    int n1, n2;
    scanf("%d", &n1);
    scanf("%d", &n2);
    
    int lcf = calcLCF(n1, n2);
    /* Calculates the SCM using the LCF value */
    int scm = n1 * n2 / lcf;
    
    printResult(lcf, scm);
    
}
