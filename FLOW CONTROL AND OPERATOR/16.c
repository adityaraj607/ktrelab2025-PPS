/*
Problem Description:
Tamilselvan wanted to help the needy people on his birthday, starting from the temple where beggars are high in numbers. However, upon checking his wallet, he realized he didn't have enough money. Fortunately, he had the required amount in his UPI (Unified Payments Interface) app.
A bystander noticed Tamilselvan's predicament and offered to provide him with the minimum number of currency notes required if he transferred the amount to him through the UPI app.
Tamilselvan, preferring to have the amount in the form of Rs. 50, 20, 10, 5, 2, and 1 notes, wondered if there was any logic available to verify the correctness of the amount he receives from the person.
Can you assist Tamilselvan in determining the minimum required combination of currency notes?
Constraints:
1≤ amount ≤ 100000
Input Format:
Single line containing an integer representing the amount.
Output Format:
Print the minimum required combination of currency notes.
With this program, Tamilselvan can easily verify the correctness of the amount received in currency notes from the person.
*/
#include <stdio.h>
int main(){
    int note50,note20,note10,note5,note2,note1,amount;
    note50=note20=note10=note5=note2=note1=0;
    scanf("%d",&amount);
    if(amount<=0||amount>=100001) {
        printf("Invalid Input");
    }else{
        while (amount!=0){
            if (amount>=50){
                note50=amount/50;
                amount=amount%50;
            }else if (amount>=20){
                note20=amount/20;
                amount=amount%20;
            }else if (amount>=10){
                note10=amount/10;
                amount=amount%10;
            }else if (amount>=5){
                note5=amount/5;
                amount=amount%5;
            }else if (amount>=2){
                note2=amount/2;
                amount=amount%2;
            }else{
                note1=amount/1;
                amount=amount%1;
            }
        }
        printf("50:%d\n20:%d\n10:%d\n5:%d\n2:%d\n1:%d\n",note50,note20,note10,note5,note2,note1);
    }
}