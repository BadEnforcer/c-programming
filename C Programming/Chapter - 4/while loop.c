#include "stdio.h"
int main(){
//    while loop
    /*
     * while(condition){
     * // do something
     *      }
     */
    /*
     *  NOTE: in while loop update statement is added in the code-block itself. like Python.
     *
    int i = 0;
    while(i<=5){
        printf("%d", i);
        i++;
    }
    */

//    Q. print from 0 to n, when n is given by the user
    int max_point, i = 0;
    printf("Enter number : ");
    scanf("%d", &max_point);
    while (i <= max_point){
        printf("%d ", i);
        i++;
    }
}