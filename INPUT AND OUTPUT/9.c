/*
Problem Description:
The Phoenix mall, located in the capital city of Washington, is rectangular in shape when viewed on the map, with dimensions of n x m meters.
In celebration of the jubilee anniversary, it was decided to pave the square in front of the mall with square marble stones. Each stone is of size n x n.
Your task is to determine the minimum number of stones needed to pave the square.
It's permissible to cover a surface larger than the mall square, but the square itself must be completely covered.
Breaking the stones is not allowed, and the sides of the stones must be aligned parallel to the sides of the square.
Constraints:
- 1 <= n <= 10000
- 1 <= m <= 10000
- 1 <= a <= 10000
Input Format:
The only line of input contains three positive integers n, m, and a separated by a space.
Output Format:
Print the needed number of stones.
With this problem description, you can proceed to implement the solution for determining the minimum number of stones needed to pave the square.
*/
#include <stdio.h>
int main(){
    int n, m, a ;
    scanf("%d %d %d", &n, &m, &a);
    if(n > 10000 || m > 10000 || a > 10000){
        printf("Invalid Input");
    }else{
        long long stones = ((m + a - 1LL) / a) * ((n + a - 1LL) / a);
        printf("%lld",stones);
    }
	return 0;
}