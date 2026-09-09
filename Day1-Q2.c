/*Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.


Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/
#include <stdio.h>
int main(){
    int a,b;
    int sum = 0,diff = 0,prod = 1,quotient = 1;
printf("Enter a number ");
scanf("%d",&a);
printf("Enter another number ");
scanf("%d",&b);
sum = a+b;
diff = a-b;
if(diff<0){
    diff*=-1;
}
prod = a*b;
quotient = a/b;
printf("The sum of two number is %d\n",sum);
printf("The differnce of two number is %d\n",diff);
printf("The product of two number is %d\n",prod);
printf("The quotient of two number is %d\n",quotient);
return 0;

}