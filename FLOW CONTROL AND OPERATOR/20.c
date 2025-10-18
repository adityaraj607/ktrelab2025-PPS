/*
Problem Description:
Swathi works at a world-famous pizza restaurant where her manager has tasked her with verifying the size of pizza slices to ensure they form an exact triangle when combined.
Given three values representing the angles of the slices cut by chefs, Swathi needs to determine whether the slice is valid or not.
Constraints:
30 angle1 ≤ 90 30 ≤ angle2 ≤ 90 30 ≤ angle3 ≤ 90
Note:
A pizza slice is considered valid only if the sum of all the angles equals 180 degrees.
Input Format:
A single line containing three integer values separated by space representing the three angles of the pizza slice.
Output Format:
Print "Pizza Slice is Valid" if the pizza slice is valid, or "Pizza Slice is Not Valid" if it is not.
With this program, Swathi can efficiently verify the validity of pizza slices based on their angles.
*/
#include <stdio.h>
int main(){
    int angle1,angle2,angle3;
    int sum;
    scanf("%d %d %d",&angle1,&angle2,&angle3);
    sum=angle1+angle2+angle3;
    if(sum == 180 && angle1 > 0 && angle2 > 0 && angle3 > 0){
        printf("Pizza Slice is Valid");
    } else {
        printf("Pizza Slice is Not Valid");
    }
	return 0;
}