//
// Created by Rajdw on 3/31/2023.
//
#include <stdio.h>
int main(){
    printf("Hello\n");
    printf("Hello \nWorld\n");

    /*
     *Printing integers:
     * printf("age is %d", age);
     *
     * printing numbers
     * printf("value of pi is %f", pi);
     *
     * printing chars
     * printf("value of hash is %c", hash);
     */
    int age = 17;
    float pi = 3.14;
    char hash = '#';
    printf("age is %d\n", age);
    printf("value of pi is %f\n", pi);
    printf("value of hash is %c\n", hash);



//    TAKING INPUT
    scanf("%d", &age);
//    <input_command>(<type of input>, &<what name to store input to>)
// The '&' is used to say "address"
    printf("age is %d\n", age);


//    TEST:
//creating a sum code
float n1;
float n2;
    scanf("%f", &n1);
    scanf("%f", &n2);
    float sum = n1 + n2;
    printf("sum of number 1 & 2 is: %f\n1", sum);

//    TRICK: make it short
    printf("sum of numbers is %f", n1+n2);
    return 0;
}