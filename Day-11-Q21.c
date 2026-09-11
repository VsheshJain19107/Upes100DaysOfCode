/*Q21: Write a program to display the month name and number of days using switch-case for a given month number.


Sample Test Cases:
Input 1:
2
Output 1:
February, 28 days

Input 2:
12
Output 2:
December, 31 days

*/
#include <stdio.h>
int main(){

    int month;
    printf("Enter the Month Number ");
    scanf("%d",&month);
    switch (month)
    {
    case 1:printf("January\n");
    printf("31");
        break;
        case 2:printf("Febuary\n");
    printf("28");
        break;
        case 3:printf("March\n");
    printf("31");
        break;
        case 4:printf("April\n");
    printf("30");
        break;
        case 5:printf("May\n");
    printf("31");
        break;
        case 6:printf("June\n");
    printf("30");
        break;
        case 7:printf("July\n");
    printf("31");
        break;
        case 8:printf("Auguest\n");
    printf("31");
        break;
        case 9:printf("September\n");
    printf("30");
        break;
        case 10:printf("October\n");
    printf("31");
        break;
        case 11:printf("November\n");
    printf("30");
        break;
        case 12:printf("December\n");
    printf("31");
        break;
    default:
    printf("Invalid Month Number");
        break;
    }
    return 0;
}