/*
Problem Description:
Help the eye donation center staff to select eligible individuals for eye donation by implementing a system where people are required to enter their age and weight. If a person meets the eligibility criteria of being above 18 years old and weighing over 40 kilograms, they will be permitted to enter the donation center.
Constraints:
11 people_age ≤ 40
23≤ weight ≤ 90
Input Format:
The input consists of a single line containing two integers separated by a space, representing a person's age and weight.
Output Format:
Print either "Eligible for Donation" or "Not Eligible for Donation" based on the given conditions.
*/
#include <stdio.h>
int main(){
    int people_age,weight;
    scanf("%d %d",&people_age,&weight);
    if (people_age>40 || people_age<11 || weight>90 || weight<23){
        printf("Invalid input.");
    }
    else if(people_age>18 && weight>40) printf("Eligible for Donation");
    else printf("Not Eligible for Donation");
	return 0;
}