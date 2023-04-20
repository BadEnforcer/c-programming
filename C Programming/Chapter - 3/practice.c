//a .check if a give no. is armstrong no. or not. (without loop)
//b. WAP to check if given no. is natural no. (starting from 1)

#include "stdio.h"
#include "math.h"
/*
int main() {
    // only for 4 digits max
    int _a, _b, _c, _d;
    int whole_digit;
    printf("Enter the full 4 Digit number");
    scanf("%d", &whole_digit);
    printf("%d", whole_digit);

    printf("Enter 4 digits again (hit enter after each digit)");
    scanf("%d%d%d%d", &_a, &_b, &_c, &_d);
    //    printf("%d%d%d", _a, _b, _c);

    if (pow(_a, 4)+ pow(_b, 4) + pow(_c, 4) + pow(_d, 4)  == whole_digit) {
        printf("The number is Armstrong number.");
    } else {
        printf("The number is not Armstrong number.");
    }
}
*/
// Q.2
int main() {
    int number;
    printf("Enter number to be checked: ");
    scanf("%d", &number);

    number < 0 ? printf("Unnatural number \n") : printf("Natural number");
// not did any bug checks for alphabets
}