// Q.1 write a program to check if a student passed or failed.
//marks < 30 = fail, marks > 30 = pass
/*
#include "stdio.h"
int main() {
    int marks;
    printf("Enter Marks : ");
    scanf("%d", &marks);
//    using ternary functions
    if (marks < 0 || marks > 100){
        printf("Wrong input");
        return 1;
    }
    else{
        marks >= 30 ? printf("Passed.") : printf("Failed.");
    }

}
*/


//Q.2 W.A.P. to give grades to students
/*
 * marks < 30 = C
 * 30 <= marks < 70 == B
 * 30 <= marks < 90 == A
 * 90 <= marks <= 100 == A+
 */
/*
#include "stdio.h"
int main() {
    int marks;
    printf("Enter Marks : ");
    scanf("%d", &marks);
//    using ternary functions (only for fun) xD
    marks < 30 ? printf("Grade is 'C'") :
    (30 <= marks && marks < 70) ? printf("Grade is 'B'") :
    (70 <= marks && marks < 90) ? printf("Grade is 'A'") :
    (90 <= marks && marks <= 100) ? printf("Grade is 'A+'") : printf("Invalid input");
}
 */

//Last Q.
//WAP to find if given char is uppercase or lowercase
#include "stdio.h"
int main(){
    char letter;
    scanf("%c", &letter);
//    hint: we will use ASCII value
// a = 97, z= , A = 65, Z = 96
// we can use both marks >= 'a' OR letter >= 97. both are valid
    if (letter >= 'a' && letter <= 'z') {
        printf("lowercase letter");
    }
    else if(letter >= 'A' && letter <= 'Z') {
        printf("uppercase letter");
    }
    else{
        printf("Invalid input");
        return 1;
    }
}