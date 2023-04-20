//switch
//
//switch(number){
//    case C1: //Do something
//    break;
//    case C2: //Do something
//    break;
//    default: //Do something
//}

//if break is not used, all switches will run.

#include "stdio.h"
int main() {
//    int day;
//    printf("Enter Day (1-7) :");
//    scanf("%d", &day);
//
//    switch (day) {
//        case 1 : printf("sunday \n");
//            break;
//        case 2 : printf("monday \n");
//            break;
//        case 3 : printf("tuesday \n");
//            break;
//        case 4 : printf("wednesday \n");
//            break;
//        case 5 : printf("thursday \n");
//            break;
//        case 6 : printf("friday \n");
//            break;
//        case 7 : printf("saturday \n");
//            break;
//        default:
//            printf("Not a valid Day\n");
//
//    }


//    using words
    char day;
    printf("Enter Day (S, m, t, w, T, f, s) :");
    scanf("%c", &day);

    switch (day) {
        case 'S' : printf("sunday \n");
            break;
        case 'm' : printf("monday \n");
            break;
        case 't' : printf("tuesday \n");
            break;
        case 'w' : printf("wednesday \n");
            break;
        case 'T' : printf("thursday \n");
            break;
        case 'f' : printf("friday \n");
            break;
        case 's' : printf("saturday \n");
            break;
        default:
            printf("Not a valid Day\n");

    }

//    properties of switch.
//cases can be in any order
//nested switches are allowed

}
