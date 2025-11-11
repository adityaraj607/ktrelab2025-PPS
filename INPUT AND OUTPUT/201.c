/*
Problem Description:
Freddy Krueger, the proprietor of a welding company, oversees the production process, which involves joining different types of metal. To accomplish this, he must know the specific temperature of each metal, typically measured in degrees Fahrenheit.
However, the raw materials imported for welding are labeled with temperatures in degrees Celsius. Freddy requires assistance in converting these Celsius temperatures to Fahrenheit.
Can you help him with this conversion?
Constraints:
1.00 ≤ celsius ≤ 57.00
Input Format:
The only line of input contains a single float value representing the temperature in Celsius.
Output Format:
Print the equivalent temperature in Fahrenheit in the only line of output.
Additional Scenario:
In addition to his welding company, Freddy Krueger has been experimenting with new welding techniques using advanced materials. He needs to accurately convert temperatures between Celsius and Fahrenheit to ensure the success of his experiments and maintain the quality of his products.
Sample Input/Output:
Input:
25.50
Output:
The equivalent temperature in Fahrenheit is 77.90°F.
Note: If the input values provided fall outside the specified range as indicated in the input format the program output will display Invalid Input'
*/
#include <stdio.h>
int main(){
    float celsius, fahrenheit;
    scanf("%f",&celsius);
    if( celsius > 57.00 ){
        printf("Invalid input.");
    }else{
        fahrenheit=(celsius*1.8)+32;
        printf("%0.2f fahrenheit",fahrenheit);
    }
	return 0;
}