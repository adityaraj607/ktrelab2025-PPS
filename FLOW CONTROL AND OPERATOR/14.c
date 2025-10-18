/*
Problem Description:
Rythan a techie working in a military camp was checking the landmine as per their sequence of numbers.
Whatever the number the major gives Rythan has to :
Check if (number < 0), then need to print as negative.
Check if(number > 0), then need to print as positive.
Functional Description:
But Major Surya imposes a strict constraint that he should use If else concept to complete the task.
Since he doesn't know the if else concept he is frustrated.
Can you help him to complete his task?
Constraints:
1 <= num <= 500
- 1 <= num <= - 500
Input Format:
Single Line Containing the value of number given by Major Surya
Output Format:
Print either POSITIVE or NEGATIVE based on the input of Major Surya.
*/
#include <stdio.h>
int main(){
    int number;
    scanf("%d",&number);
    if (number == 0){
        printf("INVALID INPUT");
    } else {
        printf("%s",number>0?"POSITIVE":"NEGATIVE");
    }
	return 0;
}