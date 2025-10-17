/*
Problem Description:
In a technical interview at TechFusion for computer science candidates, a problem involving basic arithmetic operations is presented. Candidates must perform addition, subtraction, multiplication, and division of two given numbers within a strict 5-minute deadline.
Constraints:
1 testnum1 ≤ 50
1 testnum2 ≤ 50
Input Format: The input consists of a single line containing two integers, 'a' and 'b', separated by a comma.
Output Format: Candidates must print the results of addition, subtraction, multiplication, division (rounded to three decimal places), and modulus of the given two numbers in separate lines.
Note: Candidates are instructed to round the result of division to three decimal places.
Note: If the input values provided fall outside the specified range as indicated in the input format, the program output will display 'Invalid input'.
*/

#include <stdio.h>
int main() 
{
    int testnum1, testnum2; 
    int sum, sub, mult, mod;  
    float div;
    scanf("%d %d", &testnum1, &testnum2);
    if (1 <= testnum1 && testnum1 <= 50 && 1 <= testnum2 && testnum2 <= 50) {
        sum = testnum1 + testnum2;
        sub = testnum1 - testnum2;
        mult = testnum1 * testnum2;
        div = (float)testnum1 / testnum2;
        mod = testnum1 % testnum2;
        printf("Addition: %d\n", sum);
        printf("Subtraction: %d\n", sub);
        printf("Multiplication: %d\n", mult);
        printf("Division: %.3f\n", div);
        printf("Modulus: %d", mod);
    } 
    else {
        printf("Invalid input");
    }
}