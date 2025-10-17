/*
Problem Description:
Elon Musk, a visionary entrepreneur, was passionate about agriculture despite his demanding 9-5 job on weekdays. On weekends, he dedicated his time to his agricultural pursuits, dreaming of merging technology with farming practices in the future.
His vision led him to develop a small automated automobile that could water plants when he couldn't be present in the field personally. This invention marked just the beginning of his journey to combine technology and agriculture.
Elon measured his field in square feet, but for generalizing his project, he wished to convert it to acres. He understood that such conversions would facilitate better communication and planning among farmers.
Can you help him with a code that reads the area of the farmer's field in square feet and displays the area in acres?
Functional Description:
There are 43,560 square feet in an acre.
Constraints:
20000.00 tractLand ≤ 70000.00
Input format:
Single Line of Input has a tractland's area in square feet of type float.
Output format:
Print the input area of the tractland in square feet and its equivalent area in acres in a single line.
Additional Scenario:
Elon Musk plans to expand his farming operations and wishes to estimate the acreage of a larger tract of land. He needs a tool to quickly convert the area from square feet to acres for better planning and management.
Sample Input/Output:
Input: 35000.00
Output: 35000.00 sq.ft is equal to 0.80 acres
Note: If the input values provided fall outside the specified range as indicated in the input format, the program output will display 'Invalid Input'.
*/
#include <stdio.h>
int main(){
    float tractLand, tractLandAcred;
    int oneAcre = 43560;
    scanf("%f",&tractLand);
    if (tractLand >= 20000 && tractLand <= 70000){
        tractLandAcred = tractLand / oneAcre;
        printf("%.2f sq.ft is equal to %.2f acres.",tractLand,tractLandAcred);
    }else{
        printf("Invalid input.");
    }
}