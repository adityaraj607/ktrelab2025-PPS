/*
Problem Description:
Ratik, a young millionaire, deposited $10,000 into a bank account that pays 7% simple interest per year. He intends to leave the money in the account for 5 years. He wants to predict the interest and the total amount in his account at the end of the 5-year period. Can you help him find out?
Functional Description:
Here's how you can calculate it using the formulas provided:
Interest earned (1) can be calculated using the formula:
interest (p*i*t) / 100 and
amount = p + interest.
Where:
p is the principal amount
i is the rate of interest per year
t is the total time in years
Constraints:
10000 <= p <= 21, 600
5 <= i <= 12
5≤≤15
Input Format:
The only line of input contains three values representing the principal, interest per year, and time in investment of type float, float, and integer respectively.
Output Format:
First Line: Print the interest earned for the principal amount in floating-point format with 2 values after the decimal point.
Second Line: Print the total amount earned, including interest at the end of the investment period, in floating-point format with 2 values after the decimal point.
*/
#include <stdio.h>
int main(){
    float p, i, interest, amount;
    int t;
    scanf("%f %f %d",&p,&i,&t);
    if (p <= 9999 || p >= 21601 || i <= 5.0 || i >= 12.0 || t <= 4 || t >= 16){
        printf("Invalid Input");
    }else{
        interest = (p * i * t) / 100;
        amount=p+interest;
        printf("Interest after %d Years = $%.2f\n",t,interest);
        printf("Total Amount after %d Years = $%.2f",t,amount);
    }
	return 0;
}