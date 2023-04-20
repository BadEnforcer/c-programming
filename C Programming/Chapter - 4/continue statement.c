#include "stdio.h"
/* continue will skip the current set of loop. while "break" takes out of the loop
int main(){
    for(int i=1; i<=5; i++){
        if (i ==3){
            continue;
        }
        else {
            printf("%d ", i);
        }
    }
} */

/*print all odd no. from 5 to 50
int main(){
    for(int i=5; i <=50; i++){
        if (i % 2 != 0){
            printf("%d ", i);
        }
        else {
            continue;
        }
    }
} */

/*print factorial of given no.
int main(){
    int n, sum = 1;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        sum *= i;
    }
    printf("%d ", sum);
}*/

/*print reverse table of a no. n
int main(){
    int n;
    scanf("%d", &n);
    for(int i = 10; i >= 0; i--){
        printf("%d ", i*n);
    }
} */

/*calculate the sum of no. between 5 and 10
int main(){
    int sum = 0;
    for(int i = 5; i <= 50 ; i++){
        sum += i;
    }
    printf("%d ", sum);
} */


