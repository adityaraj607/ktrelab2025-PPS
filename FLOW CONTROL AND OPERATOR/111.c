/*
Problem Description:
Sophia and Oliver lived in the town of Denmark, where they often spent their weekends brainstorming and working on innovative projects. Each day, they embarked on new endeavors, much to the annoyance of their sister, Emily, who often tried to interfere with their plans.
One Sunday, while sitting under a tree in their backyard, they decided to invent a machine that could determine whether two numbers were approximately equal to each other.
Functional Description:
According to their logic, a number is considered to be an approximate value of another number if they differ by at most 0.5. They planned to implement this logic into their machine, but they were struggling to devise the appropriate algorithm. Can you help them with the logic?
Constraints:
1.0≤number1≤50.0
1.0≤number2≤50.0
Input Format:
The only line of input consists of two floating-point numbers separated by a space, representing number1 and number2, respectively.
Output format:
Print either "Approximate Number" or "Not an Approximate Number" according to the condition.
Additional Scenario:
In addition to their invention, Sophia and Oliver also wanted to explore the possibility of extending their machine's functionality to determine whether two numbers were approximately equal within a certain range. They believed this could have practical applications in various fields, such as scientific research and engineering.
Sample Input/Output:
Input:
10.2 10.7
Output:
Approximate Number
*/
#include <stdio.h>
int main(){
    float number1, number2, diff;
    scanf("%f %f",&number1,&number2);
    if (number1<1 || number1>50 || number1<1 || number2>50){
        printf("Invalid input.\n");
    }
    diff=(number1>number2)?number1-number2:number2-number1;
    if (diff>0.5){
        printf("Not an Approximate Number");
    }else{
        printf("Approximate Number");
    }
}