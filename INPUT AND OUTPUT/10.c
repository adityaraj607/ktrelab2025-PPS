/*
Problem Description:
Ravi was booking train tickets from Chennai to Delhi for his family. Additionally, two relatives from different locations have expressed interest in joining the journey with their respective family members. Ravi has decided to book tickets for these relatives as well, along with his own family members.
To determine the total number of tickets for this travel, Ravi needs to declare three integer variables: num1, num2, and num3.
The constraints for these variables are as follows:
1 ≤ num1 ≤ 15
1 <= num * 3 <= 15
1 <= num * 2 <= 15
Input format: consists of a single line containing three integers separated by a space: num1, num2, and num3, representing the numbers of tickets booked by Ravi at three different intervals of time.
Output format: requires printing the total number of tickets booked by Ravi.
Can you assist Ravi in finding the total number of passengers?
Number of tickets must be between 1 and 15 otherwise print "Invalid Inputs"
*/

#include <stdio.h>
int main(){
    int num1,num2,num3;
    int sum;
    scanf("%d %d %d",&num1,&num2,&num3);
    if (1>num1 || 1>num2 || 1>num3 || 15<num1 || 15<num2 || 15<num3){
        printf("Invalid Inputs");
    }else{
        sum = num1+num2+num3;
        printf("%d",sum);
    }
	return 0;
}