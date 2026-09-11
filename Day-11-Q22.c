/*Q22: Write a program to find profit or loss percentage given cost price and selling price.

Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/
#include <stdio.h>
int main(){
    int cp,sp;
    int profit,loss;
    printf("Enter the Cost Price ");
    scanf("%d",&cp);
    printf("Enter the Selling Price ");
    scanf("%d",&sp);
    if(cp == sp){
        printf("No Profit No loss");
    }
    else if(sp>cp){
    profit = ((sp-cp)*100)/cp;
    printf("Profit %% is %d",profit);
    }
    else {
    loss = ((cp - sp)*100)/cp;
    printf("Loss %% is %d",loss);
    }
    return 0;
}