#include "stdio.h"
int main(){
//    take input from user until odd number is entered
//we can do this with do while loop but we will use "break statement here"
//    int n;
//    do {
//        scanf("%d", &n);
//        if (n % 2 != 0) {
//            printf("odd number %d is entered.", n);
//            break;
//        }
//    } while (1);
//    take user input until the no. is multiple of 7
    int n;
    do {
        scanf("%d", &n);
        if (n % 7 != 0) {
            printf("%d is entered.", n);
            break;
        }
    } while (1);
}