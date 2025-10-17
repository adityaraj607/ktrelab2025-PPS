/*
Problem Description:
Given the total units consumed and the cost per unit, customers need to calculate the exact amount that needs to be paid for their electricity bill. The total bill amount is calculated using the formula: Total Bill Amount = unitconsumed costperunit.
Constraints:
The total units consumed range from 1 to 500.
The cost per unit ranges from 2 to 10.
Input Format:
The first line of input contains an integer representing the total units consumed (unitconsumed).
The second line of input contains an integer representing the cost per unit (costperunit).
Output Format:
Print the total bill amount in a single line.
*/
#include <stdio.h>
#include <math.h>   
int main(){
    int unitconsumed, costperunit;
    scanf("%d %d",&unitconsumed,&costperunit);
    if (unitconsumed>=1 && unitconsumed<=500 && costperunit>=2 && costperunit<=10){
        printf("%.0lf",pow(unitconsumed,costperunit));
    }
    else{printf("Invalid input");}
}