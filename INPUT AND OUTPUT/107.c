/*
Problem Description:
Arif is working on creating a room cleaning robot for his college mini project competition. As a part of the project, he needs to develop a program to simulate the movements of the robot inside the room. To start, Arif needs to measure the length and width of the room. Once these values are available, his program should compute and display the area of the room.
Can you assist Arif by providing a suitable logic for the code?
Constraint:
- 20.00 ≤ length ≤ 100.00 - 20.00 ≤ width ≤ 100.00
Input Format:
- The first line contains a single floating-point number representing the length of the room.
- The second line contains a single floating-point number representing the width of the room.
Output Format:
- Print the area of the room in square feet.ido
With this problem description, you can proceed to implement the solution to compute the area of the room based on the provided length and width.
*/
#include <stdio.h>
int main(){
    float l,w;
    scanf("%f %f",&l,&w);
    if (20<=l && l<=100 && 20<=w && w<=100){
        printf("%.2f sq.ft",l*w);
    }else{
        printf("Invalid Input");
    }
}