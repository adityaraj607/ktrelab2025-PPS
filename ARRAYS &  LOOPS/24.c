/*
Problem Description:
Akash the die heart fan of AR Rahman went to the live concert happened in Bangalore with his family members.
The event management firm responsible for the event arranged the seats for the audience in descending order of maximum number of tickets booked for single family.
As per the seating arrangement family with the highest number of people are allotted the seats in the front rows and the family with the lowest number of people are allotted the seats in the last row.
For the convenience of the seating arrangement volunteers to know how many seat need to be positioned in each row the event management firm have planned to develop the software which displays the exact seat layout if the total number of rows is provided.
Can you help them with the logic of doing so?
Constraints: 1≤ nooffamilymembers ≤ 20
Input Format: Only line of input has single integer representing the total number of rows for the concert.
Output Format:
Print the seating arrangement layout based on the number of rows provided.
Refer sample testcases for format specification.
*/
#include <stdio.h>
int main(){
    int nooffamilymembers;
    scanf("%d",&nooffamilymembers);
    for (int i=nooffamilymembers;i!=0;i--){
        for (int j=0;j<i;j++){
            printf("%d ",i);
        }
        printf("\n");
    }
	return 0;
}