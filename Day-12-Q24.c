/*Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit

/*
Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹850

Input 3:
250
Output 3:
Bill: ₹1700

*/
#include <stdio.h>
int main(){
    int units,charge;
    printf("Enter the Number of units ");
    scanf("%d",&units); 
    if(units>300){
        charge = (100*5)+(100*7)+(100*10)+(units-300)*12;
        printf("Bill: %d",charge);

    }
    else if(units >200){
        charge = (100*5)+(100*7)+(units-200)*10;
        printf("Bill: %d",charge);
    }
    else if(units>100){
        charge = (100*5)+(units-100)*7;
        printf("Bill: %d",charge);
    }
    else if(units<100){
        charge = (100-units)*5;
        printf("Bill: %d",charge);
    }
    else{
        printf("Invalid Units");
    }
    return 0;
}