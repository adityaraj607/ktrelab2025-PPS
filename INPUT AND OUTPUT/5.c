/*
Problem Description:
The employees of TeamZilla, a million-dollar profit company, organized a strike demanding additional salary increments. The strike has persisted for over a month, causing disruption within the company.
Rathik, the CEO of TeamZilla, sought to resolve the strike by organizing a small technical competition for the employees. In this competition, participants were tasked with various technical challenges to engage them.
One such challenge involved printing the ASCII value of a given character. Can you assist the employees in completing this task and potentially winning the competition?
Constraint:
Lowercase alphabets: a ≤ Asc ≤ z
Uppercase alphabets: A ≤ Asc ≤ Z
Input Format:
The only line of input represents a single alphabetic character.
Output Format:
Print the integer ASCII value corresponding to the input alphabet.
With this description, you can proceed to implement the solution for the given problem.
*/
#include <stdio.h>
#include <ctype.h>

int main() {
    char inputChar;
    scanf("%c", &inputChar);
    if (isdigit(inputChar)) {printf("%d", inputChar);}
    else if (isalpha(inputChar)){printf("%d", inputChar);}
    else {printf("Invalid input: Not a digit or letter");}
}