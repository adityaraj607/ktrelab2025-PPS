/*
Problem Description:
Selvan, working as a Quality Control (QC) specialist in a reputed multinational conglomerate, is tasked with verifying the validity of alphabets on keyboards. However, due to the high volume of keyboards needing verification, he finds it challenging to complete the task manually.
To alleviate Selvan's workload, an automated checking process is required to determine if the given input is a valid alphabet.
Constraints:
Lowercase alphabets: 'a' ≤ ch ≤ 'z'
Uppercase alphabets: 'A' ≤ ch≤ 'Z'
1 <= ch <= 500
Input Format:
The only line of input contains a single character that needs to be checked. It can be a lowercase or uppercase alphabet, or a number.
Output Format:
If the input is an alphabet, print "ALPHABET".
If the input is not an alphabet, print "NOT AN ALPHABET".
By automating this process, we aim to reduce Selvan's workload and streamline the verification process.
*/
#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("ALPHABET");
    } else {
        printf("NOT AN ALPHABET");
    }
}