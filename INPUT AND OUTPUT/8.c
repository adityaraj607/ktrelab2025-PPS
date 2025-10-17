/*
Problem Description:
On a beautiful Sunday, Selvan visited Aaron's house to prepare for exams. They decided to focus on Mathematics since they had exams the following Monday. Aaron, being a master in Mathematics, decided to help
Selvan, who wasn't as proficient in the subject. James also joined in to assist Selvan in achieving a high score in the exam.
After teaching Selvan some problems, Aaron assigned him a task: to convert input float values into double. Can you help Selvan find the solution?
Constraints:
- 1 <= numl <= 100
- 1 <= num * 2 <= 100
- 1.00 ≤ resnum1 ≤ 100.00
- 1.00 ≤ resnum2 ≤ 100.00
Input Format:
The first and second lines of the input represent two different input values of type float.
Output Format:
The first and second lines of the output represent the converted outputs of the first and second lines of input, respectively, of type double.
Now, you can implement the solution based on this problem description
*/
#include <stdio.h>
int main(){
    float num1,num2;
    double resnum1,resnum2;
    scanf("%f %f",&num1,&num2);
    if(num1>=101.00||num2>=101.00) {
        printf("Invalid Input");
    } else {
        resnum1=(double)num1;
        resnum2=(double)num2;
        printf("%lf\n%lf",resnum1,resnum2);
    }
	return 0;
}