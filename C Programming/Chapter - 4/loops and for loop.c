//LOOPS
//for, while, do while


/* NOTE : we can write (i = i + 1) as (i++)
 * all operators >> ( i++, ++i, i--, --i)
 * i++ & i-- means, "use, then increase value"
 * ++i & --i means, "increase value then use"
*/

/*
 * loop counter can be decimal or character
 */

#include "stdio.h"
int main() {
/*
for loop
initialization = variable that will rack how many times event is executed
condition = when till the loop will run
update = example i = i+1 (inc. value of i by 1)

    for (initialization; condition; update) {
        //do something
    }
     */

/*    running a loop to print meow 5 times
    for (int i=0; i <=5; i +=1){
        printf("Meow \n");
    } */
/*printing no. from 1 to 100
    for(int i = 0;i <= 100; i+=1){
        printf("%d ", i);
    }

  //  Q. print from 0 to 10
    for(int i = 0; i<=10; i+=1){
        printf("%d ", i);
    } */

/* using float value
for(float i = 1.0; i <=5.0; i += 0.5){
    printf("%f ", i);
} */

//using chars (prints a b c d ...)
    for(char i = 'a'; i <='z'; i++){
        printf("%c ", i);
    }

}