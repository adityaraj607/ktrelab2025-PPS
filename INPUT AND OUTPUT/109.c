/*
Problem Description:
Scarlett Johansson stumbled upon a pair of beautiful dresses online but was perplexed by the metric system used for their size. The measurements were given in feet and inches, a system unfamiliar to Scarlett, especially considering she resides in a country that primarily uses a different metric system.
Being somewhat proficient in programming, Scarlett decided to create a program that takes the number of feet and inches and computes the height of the customer in centimeters.
Functional Description:
One foot is equivalent to 12 inches.
One inch is equal to 2.54 centimeters.
Constraints:
5 ≤ feet ≤ 75
1 inches ≤ 11
Input format:
The only line of input consists of two integers representing the feet and inches, separated by a space.
Output format:
Print the height of the customer in centimeters.
Additional Scenario:
Scarlett Johansson is an international celebrity and often interacts with fans from all over the world. She frequently receives inquiries about her fashion choices and wishes to provide a quick and accurate conversion of measurements to centimeters for her global fanbase.
Sample Input/Output:
Input: 65
Output:
Your height in centimeters is: 195.58
Note: If the input values provided fall outside the specified range as indicated in the input format, the program output will display 'Invalid Input'.
*/
#include <stdio.h>
int main(){
    int feet, inches;
    float cm;
    scanf("%d %d",&feet,&inches);
    if (feet >= 5 && feet <= 75 && inches >= 1 && inches <= 11){
        cm=((feet*12)+inches)*2.54;
        printf("Your height in centimeters is: %.2f",cm);
    }else printf("Invalid input.");
}