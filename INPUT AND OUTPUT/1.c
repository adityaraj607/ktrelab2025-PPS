/*
Problem Description:
Laasya recently purchased a new volleyball from the sports shop, noting its medium size appearance.
Although she managed to ascertain the radius of the sphere, she now seeks assistance in calculating its volume.
Can you aid her in determining the volume of the volleyball?
Functional Description:
Volume = (4/3) x Π x r^3 where pi = 3.14
Constraint:
1 <= r <= 5
Input Format:
The only line of input consists of a single float value representing the radius of the ball.
Output Format:
Print the volume of the ball in a single line.
*/

#include <stdio.h>
int main()
{
    float radiusofball,volumeofball;
    scanf("%f",&radiusofball);
    if(radiusofball<=0.0 || radiusofball>=6.0) {
        printf("Invalid Input");
    }
    else{
        volumeofball = (4.0/3.0)*3.14*radiusofball*radiusofball*radiusofball ;
        printf("%.2f",volumeofball);
    }
}