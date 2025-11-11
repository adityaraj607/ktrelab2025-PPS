/*
Problem Description:
Laaysa with his friends going to the theatre for a movie.
The seating arrangement is triangular in size.
Theatre staffs insisted the audience to sit in odd row if the seat number is odd and in even row if the seat number is even.
But the instruction is very confusing for Laaysa and his friends.
So help them with the seating layout so that they can sit in correct seats.
Constraints:
4 <= N <= 20
Input Format:
Only line of input has single integer value representing the number of rows in the theatre.
Output Format:
Print the layout based on the number of rows specified in input.
Refer sample testcases for format specification.
*/
#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++){
        int val= (i % 2 == 0) ? 2 : 1; 
        for (int j = 1; j <= i; j++){
            printf("%d ", val);
            val+=2;
        }
        printf("\n");
    }
    return 0;
}