#include "stdio.h"

int main(){
    int age;
    printf("Enter age : ");
    scanf("%d", &age);

//condition
    if(age >= 18) {
        printf("Adult \n");
        printf("You can vote. \n");
    }
    else if (age > 13 && age < 18) {
        printf("teenager\n");

    }
    else {
        printf("fuck off kid. \n");
    }


//    TRICK
//if only 1 statement is in the block. no need to add {} brackets. (not recommended)
//    if(age >= 18)
//        printf("Adult \n");
//    else
//        printf("Minor \n");

//Using else if




    printf("Thanks for running.");
}