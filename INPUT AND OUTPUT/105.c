/*
Problem Description: Roopa and Atifa, two competitive sisters, engage in math puzzles to hone their skills and have fun. Today, Roopa presents Atifa with a unique challenge: adding two decimal numbers, but with a twist. Atifa is tasked with adding only the integer parts of the decimals. Atifa decides to tackle the challenge by coding a program but finds it challenging.
Can you help Atifa devise a suitable logic to crack this puzzle?
Explanation: Roopa provides her sister Atifa with two floating-point numbers: 23.44 and 33.22. Atifa's objective is to identify the integral parts of these numbers, which are 23 and 33, respectively. Finally, she needs to compute the sum of these integer parts, resulting in the output value of 56.
Constraint:
33.00 ≤ num1 ≤ 255.00
98 <= num * 2 <= 263
Input Format:
First Line: Single floating-point number representing the first number.
Second Line: Single floating-point number representing the second number.
Output Format:
Print the sum of the integer parts of the two numbers.
*/
#include <stdio.h>
int main(){
    float num1,num2;
    int sum;
    scanf("%f %f",&num1,&num2);
    if (num1<=33.0 || num1>=255 || num2<=98 || num2>=263){
        printf("Invalid Inputs");
    }else{
        sum = (int)num1+num2;
        printf("%d",sum);
    }
	return 0;
}