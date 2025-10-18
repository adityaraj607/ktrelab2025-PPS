/*
Problem Description:
Priya is browsing a social media site's wedding anniversary list of friends and wants to determine whether a specific person's anniversary year is a leap year.
To streamline the process for many others who may have the same question, she intends to automate the task by creating a code snippet.
However, she lacks the logic to write it. Can you assist Priya in achieving her goal?
Constraints:
l <= year <= 9999
Input Format:
The Single Line Containing the integer value representing year.
Only 4-digit inputs are accepted
Output Format:
Print as either NOT A LEAP YEAR or LEAP YEAR after checking the year. If input is above 4 digit then print - PLEASE ENTER A 4-DIGIT YEAR.
*/
#include <stdio.h>
int main(){
    int year;
    scanf("%d",&year);
    if(year>9999){
        printf("PLEASE ENTER A 4-DIGIT YEAR");
    } else if (((year%4)==0)&&((year%400)!=0)){
        printf("LEAP YEAR");
    } else {
        printf("NOT A LEAP YEAR");
    }
	return 0;
}