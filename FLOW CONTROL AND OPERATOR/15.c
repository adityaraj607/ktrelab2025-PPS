/*
Problem Description:
Britta's parents said they will buy her a puppy on a 2nd week of a month.
They selected a puppy but the vet said it will be delivered only based on the token given to them.
The token was printed from 1-7 in number representing days of the week.
Britta is very eager and needs to Know the Day on providing the week number [1-7].
Can you help her?
If the input is other than 1 to 7 print "Invalid Input"
Constraints:
l <= day <= 7
Note: According to Britta starting day of the week is Monday and it is represented by 1.
Input:
Single line Containing an integer representing a day.
Output:
Print the Day corresponding to a number
*/
#include <stdio.h>
int main(){
    char days[8][20]={"","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    int day;
    scanf("%d",&day);
    if (day<8 && day>0){
        printf("%s",days[day]);
    }else if (0==0) {
        printf("Invalid Input");
    }
}