/*Q5: Write a program to convert temperature from Celsius to Fahrenheit.


Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/
#include <stdio.h>
int main(){
    int temp;
    printf("Enter the temperature in Celsius ");
    scanf("%d",&temp);
int tempConvert = (temp*9/5)+32;
printf("The temperature in Farenheit is %d",tempConvert);
    return 0;
}