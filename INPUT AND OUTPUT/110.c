/*
Problem Description:
Nathan, a student by day and a computer enthusiast by night, found himself working at a grocery store to make ends meet. He was responsible for retrieving the product ID, price per unit, and quantity of items purchased by customers. Realizing the repetitive nature of his tasks, Nathan decided to automate the process to save time and effort.
Help Nathan develop a program to streamline his work at the grocery store.
Constraint:
Bill ID: 1000 < billid ≤ 9999
Product ID: 1000 ≤ prodid ≤ 9999
Price per unit: 10.00 ≤ price ≤ 500.00
Quantity: 1 quantity ≤ 500
Input Format:
The first line contains the bill ID in integer format.
The second line contains the product ID in integer format.
The third line contains the price of the product in float format.
The fourth line contains the quantity of purchased items in integer format.
Output Format:
Print the total bill amount corresponding to the bill ID.
With this description, Nathan can proceed to develop his grocery billing system.
*/
#include <stdio.h>
int main(){
    int prodid,billid,quantity;
    float price,totprice;
    scanf("%d %d %f %d",&billid,&prodid,&price,&quantity);
    if(billid<=999||billid>=10001||prodid<=999||prodid>=10001||price<=9||price>=51||quantity<=0||quantity>=501){
        printf("Invalid Input");
    }else{
        totprice=price*quantity;
        printf("%.2f",totprice);
    }
	return 0;
}