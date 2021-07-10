Print All Substrings
Given a String S of length n, print all its substrings.
Substring of a String S is a part of S (of any length from 1 to n), which contains all consecutive characters from S.
Input Format :
String S
Output Format :
 All Substrings of S, one in each line.
Note : The order in which you print substrings doesn't matter.
Sample Input 1 :
xyz
Sample Output 1 :
x
xy
xyz
y
yz
z


/********************************************************* SOLUTION *******************************************************************/

#include<cstring>
void printSubstrings(char input[]) {
   int a=strlen(input);
    for(int i=0;input[i]!='\0';i++){
        for(int j=i;input[j]!='\0';j++){
            for(int k=i;k<=j;k++){
                cout<<input[k];
            }
            cout<<endl;
        }}
        
}
