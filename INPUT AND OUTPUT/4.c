/*
Problem Description:
A passenger's journey on a train from Chennai to Delhi experienced a delay upon arrival. Given the total delay time in minutes, determine the exact delay in terms of hours and minutes.
Constraints:
The total delay time ranges from 0 to 550 minutes.
Input Format:
A single integer tot_mins representing the total delay time in minutes.
Output Format:
Print the total delay time in hours and minutes in a single line.
*/

#include <stdio.h>
int main(){
    int tot_mins, hrs, mins;
    int MINaHOUR=60;
    scanf("%d",&tot_mins);
    if (tot_mins<550 && tot_mins>0){
        mins = (tot_mins % MINaHOUR);
        hrs = (tot_mins / MINaHOUR);
        printf("%d Hours and %d Minutes",hrs,mins);
    }
    else {printf("Invalid input");}
}