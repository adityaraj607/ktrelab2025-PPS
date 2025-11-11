/*
Problem Description:
The Matriculation school have arranged an Annual Day Function.
Volunteers have decorated a floor on various places of the school using Rose and Tulip flowers.
But one of the coordinators requested the volunteers to rearrange the decoration like a triangular size.
Coordinator also told them that tulips flowers need to be positioned at the middle of the roses
School has 20 buildings and as per Principal order the numbers of rows in the decoration should also match the building number. The Principal of the school is interested in seeing the final decoration but he is quite busy with the other works.
So he likes to see how the final decoration have come through online mode if he gives the building number.
So can you display him the final decoration layout?
Note:
Roses are represented by 1.
Tulips are represented by 0.
Constraints: 1 ≤ rows ≤ 20
Input Format:
Only line of input has single integer representing the building number.
Output Format:
Print the final layout of the decoration.
*/
#include <stdio.h>
int main(){
    int rows,i,j;
    scanf("%d",&rows);
    if (rows && rows>20){
        printf("Invalid");
    }else{
        for (i=1; i<=rows; i++){
            for (j=1; j<=i; j++){
                if (i==1 || i==rows || j==1 || j==i){
                    printf("1 ");
                }else{
                    printf("0 ");
                }
            }
            printf("\n");
        }
    }
}