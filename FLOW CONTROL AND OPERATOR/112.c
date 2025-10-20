/*
Problem Description:
Caleb and Salima, residing in the interior village of Nilgais, find themselves stranded due to the lockdown imposed by the government of Tamil Nadu. With few friends in the village, they devise a technical game to pass the time during the lockdown.
The rules of the game are straightforward:
When one of them, either Caleb or Salima, presents two numbers to the other, the recipient must calculate and respond with the difference between the numbers if the first number is greater than the second number.
Otherwise, they must provide the sum of the two numbers.
Constraints:
890 <= n * 1 <= 1930 750 <= n * 2 <= 3240
Input Format:
The input consists of a single line containing two integers separated by a space. These integers represent the first and second numbers provided in the game.
Output Format:
The output should be printed based on the condition satisfied by the two input numbers as per the game rules.
*/
#include <stdio.h>
int main(){
    int n1,n2,n3;
    scanf("%d %d",&n1,&n2);
    if (n1 >= 1930 || n1 <= 890 ||  n2 >= 3240 || n2 <= 750){
        printf("Invalid input.");
    }else{
        if (n1 > n2) { n3 = n1 - n2;}
        else n3=n1+n2;
        printf("%d",n3);
    }
}