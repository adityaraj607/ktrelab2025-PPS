/*
Problem Description:
Aaron took his girlfriend, Binita, out to a restaurant to celebrate landing his dream job. Despite feeling a bit tense due to a recent welcome interview, Binita noticed and decided to boost Aaron's confidence. She gave him a small task: to calculate the tax amount and tip for their meal using a computer code.
To assist Aaron, he can utilize the local tax rate when determining the tax amount owed. Could you help Aaron by providing the suitable logic for this task?
Note:
Local tax= 18% Tip amount=5%
Constraint:
50≤billwt≤1300
Where billwt is the variable you should use for getting the bill amount without tax and tip.
Input format:
Single Line of input has single value of type integer representing the Bill Amount Without Tax and Tip
Output format:
Sure, here's the rewritten output format:
Tax: [Calculated Tax Value]
Tip: [Calculated Tip Value]
Total Bill Amount (including tax and tip): [Total Bill Amount Value]
*/
#include <stdio.h>
int main(){
    float totaltax,totaltip,billwt,tax,tip;
    tip=0.05;
    tax=0.18;
    scanf("%f",&billwt);
    if (50<=billwt && billwt<1000){
        totaltip=billwt*tip;
        totaltax=billwt*tax;
        printf("The Tax is %.2f",totaltax);
        printf("\nThe Tip is %.2f",totaltip);
        printf("\nTotal Bill With Tax and Tip is %.2f",billwt+totaltax+totaltip);
    }else printf("Invalid Inputs");
	return 0;
}