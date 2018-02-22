/* Application that calculates the sum of the areas and circumferences of a range between 2 radius
 */
/* 8500 Accepted */

#include <stdio.h>
#include <math.h>

#define PI 3.14

/* Calculates the area of the circle
 * Takes the radius as an int
 * Returns the area as a double
 */
double calcCircleArea(int radius) {
    return (PI * pow(radius, 2));
}

/* Calculates the circumference of the circle
 * Takes the radius as an int
 * Returns the circumference as a double
 */
double calcCircleCircumf(int radius) {
    return (2 * PI * radius);
}

/* Prints the results
 * Takes the sum of the area and the sum of the circumference as doubles
 * Prints them to the console to 3s.f.
 */
void printResults(double sumArea, double sumCircumf) {
    printf("%.3f\n", sumArea);
    printf("%.3f\n", sumCircumf);
}

/* Main function that takes the user input, sums and calls the functions */
int main() {
    int r1, r2;
    scanf("%d", &r1);
    scanf("%d", &r2);
    
    double sumOfArea = 0, sumOfCircumf = 0;
    int i = r1;
    /* Loops through the inputs as a range and adds up the results of the calls */
    while(i <= r2) {
        sumOfArea = sumOfArea + calcCircleArea(i);
        sumOfCircumf = sumOfCircumf + calcCircleCircumf(i);
        i++;
    }
    
    printResults(sumOfArea, sumOfCircumf);
    
    return 0;
}
