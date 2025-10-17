/*
Problem Description:
Swathy and Nancy, both aspiring to be part of the SpaceY program, faced a critical question during their interview. They were tasked with creating a code that could accurately extract the rightmost integer from the integer part of a given floating-point number. Success in this challenge would secure their dream roles in designing the digital meters for the SpaceY Mars launch. Can you assist them by providing the logic for this code?
Constraints:
340.00 ≤ spacenum < 2300.00
Input Format:
Only Line of Input has single value of type float.
Output Format:
Print the rightmost integer from the input value.
Explanation:
If the input is given 124.37, then the output to be displayed is 4
*/
#include <stdio.h>
int main(){
    float spacenum;
    int digit;
    int num;
    scanf("%f",&spacenum);
    if (340<=spacenum && spacenum<2300){
        num = (int)spacenum;
        digit = num%10;
        printf("%d",digit);
    }else{
        printf("Invalid Input");
    }
}

// this code is not 100% accurate, it gives 92% accuracy
// elab says logical t4 failed but even after following all constraints it was impossible to fix it