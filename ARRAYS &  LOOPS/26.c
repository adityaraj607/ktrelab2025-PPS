/*
Problem Description:
Yogesh booked the ticket and went for the magic show with his partner.
Since the magician is popular among general public both married couples and the unmarried youths will come to his show.
In order to make it convenient for both the set of audience the show organisers have given the seating arrangement instruction for couples and singles individually.
According to the instruction couples have to sit in the even numbered seats and singles have to sit in the odd numbered seats.
For better positioning of seats the event organisers wold like to develop a seating arrangement software which will print the layout if the total number of rows for the show is provided.
Constraints: 1≤ noofrows ≤ 20
Input Format:
Only line of input has single integer representing the number of rows of seats for the particular day of the show.
Output Format:
Print the seating layout according to the number of rows provided.
*/
#include <stdio.h>
int main(){
    int noofrows;
    scanf("%d",&noofrows);
    for(int i=1;i<=noofrows;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",i);
        }
        printf("\n");
    }
	return 0;
}