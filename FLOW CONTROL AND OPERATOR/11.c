/*
Problem Description:
Caleb and Irfan are purchasing oranges which were priced according to their size. But their budget is minimum.
So they plan to choose one small, one medium and one large orange so that it will fit in their budget.
So can you help them choose the right orange by creating a logic by naming three oranges they choose as orangel, orange2, orange3.
Then check the condition if orange2 is greater than orangel and orange3 is greater than orange2.
Constraints:
1≤ orangel ≤600 1≤ orange2 ≤600 1≤ orange3 ≤600
Input format:
First Line: Single number of type integer representing the size of orange 1
Second Line: Single number of type integer representing the size of orange2
Third Line: Single number of type integer representing the size of orange3
Output Format:
Print as "Fit into Budget" or "Dosen't fit into Budget" based on the condition.
*/
#include <stdio.h>
int main(){
    int orange1,orange2,orange3;
    scanf("%d %d %d",&orange1,&orange2,&orange3);
    if (1>orange1){
        printf("Enter the valid price");
    }else{
        if(orange2>orange1 && orange3>orange2){
            printf("Fit into Budget");
        }else{
            printf("Dosen't fit into Budget");
        }
    }
}