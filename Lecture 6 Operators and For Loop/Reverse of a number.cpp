Reverse of a number
Write a program to generate the reverse of a given number N. Print the corresponding reverse number.
Input format :
Integer N
Output format :
Corresponding reverse number
Constraints:
0 <= N < 10^8
Sample Input 1 :
1234
Sample Output 1 :
4321
Sample Input 2 :
1980
Sample Output 2 :
891


/*************************************************** SOLUTION *************************************************************************/


#include<iostream>
using namespace std;

int main() {
	int n,a,b=0;
    cin>>n;
    while(n>0){
    	a=n%10;
    	b=(b*10)+(a*10);
    	n=n/10;
	}
	cout<<b/10;
    }

