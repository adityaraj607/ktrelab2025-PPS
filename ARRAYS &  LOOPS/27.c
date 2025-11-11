/*
Problem Description:
Caleb likes to challenge Selvan's math ability.
He will provide a starting and ending value that describes a range of integers, inclusive of the endpoints.
Selvan must determine the number of square integers within that range.
Note:
A square integer is an integer which is the square of an integer, e.g. 1, 4, 9, 16, 25
Constraints:
1 <= q <= 100
1 <= start <= 10^9
1 <= end <= 10 ^ 9
Input Format
The first line contains 'q', number of test cases.
Each of the next 'q' lines contains two space-separated integers, representing 'start' and 'end'.
*/
#include <stdio.h>
#include <math.h>
int main(){
    long int q,start,end;
    scanf("%ld",&q);
    if(q<=0||q>=100){
        printf("Invalid Input");
    }
    else {
        for (int i = 0; i < q; i++) {
            scanf("%ld %ld", &start, &end);
            int count = (int)(sqrt(end)) - (int)(sqrt(start - 1));
            printf("%d\n", count);
        }
    }
	return 0;
}