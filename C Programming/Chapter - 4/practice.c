#include <stdio.h>
/*check if prime no.
int main(){
    int sum = 0, n=0;
    scanf("%d", &n);
    if (n % 2 != 0){
        if (n % 3 != 0){
            if (n % 5 != 0) {
                printf("%d is prime no.", n);
            } else{
                printf("%d is not a prime no.", n);
            }
        }
    }

}*/

/* check if prime no. in a given range
int main() {
    int max, min;
    printf("Enter lowest value : ");
    scanf("%d", &min);
    printf("Enter highest value : ");
    scanf("%d", &max);
    for (int i = min; i >= min && i <= max; i++)
        if (i == 2 || i == 3 || i == 5) {
            printf("%d is prime no. \n", i);
        } else {
            if (i % 2 != 0) {
                if (i % 3 != 0) {
                    if (i % 5 != 0) {
                        printf("%d is prime no. \n", i);
                    }
                }
            }
        }
} */

//Q. print the pattern
int main() {
    char star = '*';
    for (int i = 1; i <= 4; i++) {
        for (int j = 0; j <= 4; j++) {
            if (j == 4){
                printf("%c\n", star);
            }
            else {
                printf("%c", star);
            }
        }
    }
}