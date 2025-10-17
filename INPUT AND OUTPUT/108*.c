/*
Problem Description:
Athika and Ritu landed a job at a prestigious MNC (Multi-National Corporation) company. However, they found themselves confused about the salary credited to their accounts. To ensure the correctness of the provided HRA (House Rent Allowance) and DA (Dearness Allowance), they decided to develop software that calculates the salary payout based on the basic pay.
The salary policy of Athika and Ritu's company is as follows:
- HRA is 80% of the basic pay.
- DA is 40% of the basic pay.
Can you assist Ritu and Athika in developing the software to calculate the gross salary?
Constraints:
- 20000 ≤ basic ≤ 75000
Input Format:
- Single integer representing the basic pay of the employee.
Output Format:
- Print the gross salary of the employee by adding the calculated HRA and DA to the basic pay.
With this description, Ritu and Athika can proceed with the development of their salary calculation software.
*/
#include <stdio.h>
int main(){
    float basic,sal;
    float HRA = 0.8, TA=0.4;
    scanf("%f",&basic);
    sal = basic + (HRA * basic) + (TA * basic);
    if(basic<=19999||basic>=75001) printf("Invalid Input");
    else printf("%.2f",sal);
}
/*
This code gives accuracy of 84%
Logical t4 failed [unknown]
Complexity t2 failed, allowed tokens 67 (used 73) [unable to shorten the code subject to given mandatory keywords]. 
*/