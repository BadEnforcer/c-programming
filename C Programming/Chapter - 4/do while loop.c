#include "stdio.h"
int main(){
    //    do while loop
    /* SYNTAX:
     * do {
     *  // do something
     *     }while(condition);
    */

/*    printing from o to n
    int i = 0;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 7);
    */

/*    print sum of first n natural numbers (n == 4)
    int i,n, sum = 0;
    printf("Enter number: ");
    scanf("%d", &n);

    do {
        if (n < 0){
            printf("Natural numbers can't be negative");
            break;
        } else {
            int j;
            for (i=1, j=n; i <= n && j >= 1; i++, j--){
                sum += i;
                printf("%d ", j);
            }

        }
    } while (i <= n);
    printf("Sum is : %d", sum);
    return 0;

//    we can simply go from reverse and only use one variable (ie use i--)
*/


//Print table of no given by user
    int n;
    printf("Enter number: ");
    scanf("%d ", &n);
    for (int i = 1; i <= 10; i++){
        printf("%d ", i*n);
    }

}