/*
Problem Description:
Sajid, a fervent admirer of superheroes, found himself embroiled in a mathematical conundrum during class. His teacher mentioned Heron's formula for finding the area of a triangle, but Sajid misheard it as "Hero's formula." Intrigued, he set out to unravel this mathematical mystery and find the Hero's formula for determining the area of a triangle. Can you assist Sajid in solving his mathematical riddle by providing the correct logic for the code?
Functional Description:
Area = sqrt(s(sa) (sb) (sc)), where s = [a + b + c] / 2 and
a, b & c are the sides of triangle.
Constraints:
4≤ a <= 16
4 <= b <= 13
3 <= c <= 9
Input Format:
A single line of input containing three integers separated by a space, representing the three sides of the triangle.
Output Format:
Print the area of the triangle with precision limited to two decimal places.
*/

#include <stdio.h>
#include <math.h>
int main(){
    int a,b,c;
    float s,area;
    scanf("%d %d %d",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    if (isnan(area)){
        printf("Invalid Inputs");
    }else{
        printf("%.2f",area);
    }
}