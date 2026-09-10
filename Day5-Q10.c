/*Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.


Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/
#include <stdio.h>
int main(){
    int sec,hours,min;
    printf("Enter time in seconds ");
    scanf("%d",&sec);
    min = sec/60;
    hours = sec/3600;
    printf("Seconds:%d Minutes:%d Hours:%d",sec,min,hours);
    return 0;
}