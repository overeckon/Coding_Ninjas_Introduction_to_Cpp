#include<iostream>
using namespace std;


int main(){

    Sum of even & odd
Write a program to input an integer N and print the sum of all its even digits and sum of all its odd digits separately.
Digits mean numbers, not the places! That is, if the given integer is "13245", even digits are 2 & 4 and odd digits are 1, 3 & 5.
Input format :
 Integer N
Output format :
Sum_of_Even_Digits Sum_of_Odd_Digits
(Print first even sum and then odd sum separated by space)
Constraints
0 <= N <= 10^8
Sample Input 1:
1234
Sample Output 1:
6 4
Sample Input 2:
552245
Sample Output 2:
8 15

/************************************************** SOLUTION *****************************************************************************/

	int n;
    cin>>n;
    int i=1;
    int j=1;
    while(i<=n){
        int p=1;
        while(p<=n-i){
            cout<<" ";
            p=p+1;
        }
        int k=1;
        j=i;
        while(k<=i){
            cout<<j;
            k=k+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
  
}



