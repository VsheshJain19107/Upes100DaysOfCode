/*Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.


Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/
#include <stdio.h>
int main(){
    int length,breath;
    int area,perimeter;
    printf("Enter the length ");
    scanf("%d",&length);
    printf("Enter the Breath ");
    scanf("%d",&breath);
    area = length*breath;
    perimeter = 2*(length+breath);
    printf("The area and perimeter of rectangle is %d %d",area,perimeter);

}