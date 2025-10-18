/*
Problem Description:
Given the heights of three brothers, the photographer wants to determine the tallest among them to clarify who is visible in the photo. Can you help identify the tallest brother?
Constraints:
Each brother's height ranges from 60 to 80.
Input Format:
The input consists of a single line containing three integers separated by a space: brol, bro2, and bro3, representing the heights of the three brothers.
Output Format:
Print the height of the tallest brother among the three.
*/
#include <stdio.h>
int main(){
    int bro1,bro2,bro3,tallest;
    scanf("%d %d %d",&bro1,&bro2,&bro3);
    if (bro1<60 || bro1>80 || bro2>80 || bro3>80){
        printf("Invalid input");
    }else{
        if (bro1 > bro2 && bro1 > bro3){
            tallest=bro1;
        } else if (bro2 > bro1 && bro2 > bro3){
            tallest=bro2;
        } else tallest=bro3;
        printf("%d", tallest);
    }
}