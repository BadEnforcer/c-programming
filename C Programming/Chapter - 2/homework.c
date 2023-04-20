//Q1. write a program to print avg. of 3 numbers
//Q2. check if given char is digit or not
//Q3. print the smallest number of given number

#include "stdio.h"
#include "math.h"
int main(){
//    int a,b,c;
//    printf("Enter 3 numbers");
//    scanf("%d%d%d", &a,&b,&c);
//    printf("Avg. of the given numbers is :%d", (a+b+c)/3);

    char input;
    scanf("%c", &input);
    int a = input-'0';
    printf("%d", a < 10 && a > 0);

//    int a,b,c;
//    printf("Enter 3 numbers");
//    scanf("%d%d%d", &a,&b,&c);
//    int small_1 = a < b == a;
//    int small_2 = a < c == a;
//    int small_3 = c < b == c;
//    printf("smallest no. is numbers is :%d", );
//
//Q3 not solved.
}