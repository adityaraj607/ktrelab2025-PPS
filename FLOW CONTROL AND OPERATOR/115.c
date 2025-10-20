/*
Problem Description:
Aarav, a novice entrepreneur, is analyzing the financial performance of his company. He discovered that for certain products, the cost price exceeds the selling price, resulting in a loss, while for others, he gained a profit. Could you please assist him by creating a code that automatically identifies which products incurred a loss and which ones generated a profit?
Constraints:
1940 <= cp <= 3270
1460 <= sp <= 7050
If Cost Price > Selling Price then its "Loss"
If Cost Price < Selling Price then its "Profit"
If Cost Price = Selling Price then its "No Profit No Loss".
Input Format:
First Line: Integer representing the Cost price
Second Line: Integer representing Selling Price
Output Format:
Print Profit, Loss or No Profit No Loss Based on the condition.
Note: If the input values provided fall outside the specified range as indicated in the constraaints, the program output will display 'Invalid input'.
*/
#include <stdio.h>
int main(){
    int cp,sp;
    scanf("%d %d",&cp,&sp);
    if (cp >= 3270 || cp <= 1940 || sp>=7050 || cp<=1460){
        printf("Invalid input.");
    }else if(sp > cp) printf("Profit");
    else if(sp<cp) printf("Loss");
    else printf("No Profit No Loss");
	return 0;
}