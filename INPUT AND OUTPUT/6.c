/*
Problem Description:
A customer bought apples from a fruit shop and received a bill from the shopkeeper. The customer then provided an amount to the shopkeeper for paying the bill. They are interested in knowing the quotient and remainder after dividing the amount they provided by the bill amount specified by the shopkeeper.
Constraints:
The amount provided by the customer ranges from 5 to 2500.
The bill amount specified by the shopkeeper ranges from 5 to 2500.
Input Format:
The first line contains an integer representing the amount provided by the customer (amtgiven).
The second line contains an integer representing the bill amount specified by the shopkeeper (billamt).
Output Format:
The first line contains the quotient of the division in integer format.
The second line contains the remainder of the division in integer format
Note: If the input values provided fall outside the specified range as indicated in the input format, the program output will display 'Invalid Input'.
*/
#include <stdio.h>
int main()
{
    int billamt, amtgiven;
    scanf("%d %d",&billamt,&amtgiven);
    int a = billamt;
    billamt=amtgiven;
    amtgiven=a;
    if (billamt == 0){printf("Error: Division by zero.");}
    else{
        printf("Quotient: %d",amtgiven/billamt);
        printf("\nRemainder: %d",amtgiven%billamt);
    }
}