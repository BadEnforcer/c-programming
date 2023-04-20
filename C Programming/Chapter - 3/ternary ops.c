// Ternary operators

//SYNTAX
//Condition ? doSomething if TRUE : doSomething if FALSE;

#include "stdio.h"
int main() {
    int age;
    scanf("%d", &age);

    age >= 18 ? printf("Adult \n"), printf("You can vote. \n") : printf("fuck off kid. \n");
    return 0;
}