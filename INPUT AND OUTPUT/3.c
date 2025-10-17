/*
Problem Description:
Given the length, width, and height of an object, a person wants to calculate the surface area of the object for stress relief purposes. The surface area is calculated using the formula: Surface Area = 2 x (width x length + length x height + height x width).
Constraints:
The length, width, and height of the object range from 1 to 10.
Input Format:
The first line contains an integer representing the length of the object.
The second line contains an integer representing the width of the object.
The third line contains an integer representing the height of the object.
Output Format:
Print a single integer value representing the surface area of the object the person is playing with.
*/
#include <stdio.h>
int main()
{
    int length, width, height, surfacearea;
    scanf("%d %d %d", &length, &width, &height);
    if (length<=10 && length>=1 && width<=10 && width >=1 && height<=10 && width>=1){
        surfacearea=2*(length*width+width*height+height*length);
        printf("%d", surfacearea);
    }
    else printf("Invalid input");
}