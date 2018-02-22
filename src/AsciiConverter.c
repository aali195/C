/* Application that converts integers into ASCII code and finishes with EOF input
 */

#include <stdio.h>

/* Main function that takes input and returns the ASCII chara */
int main() {
    int input;
    /* Take the input and while the input is not the EOF, print the ASCII character equiv */
    while((scanf("%d", &input)) != EOF) {
        printf("%c", input);
    }
    
    return 0;
}
