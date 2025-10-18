/*
Problem Description:
Given Amira's age, this program determines her eligibility for voting based on the criteria set by the Election Commission of India. If her age is 18 years or older, she is considered eligible; otherwise, she is considered not eligible.
Constraints:
Amira's age ranges from 1 to 100.
Input Format:
The input consists of a single line containing an integer representing Amira's age.
Output Format:
Print "Eligible" if Amira is eligible for voting, or "Not Eligible" if she is not eligible, in a single line.
*/
#include <stdio.h>
int main(){
    int age;
    scanf("%d",&age);
    if (age <= 1 || age >= 100){
        printf("Invalid input");
    }else if (age>=18){
        printf("Eligible");
    }else{
        printf("Not Eligible");
    }
	return 0;
}