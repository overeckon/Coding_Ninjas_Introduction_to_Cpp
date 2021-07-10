Binary to decimal
Send Feedback
Given a binary number as an integer N, convert it into decimal and print.
Input format :
An integer N in the Binary Format
Output format :
Corresponding Decimal number (as integer)
Constraints :
0 <= N <= 10^9
Sample Input 1 :
1100
Sample Output 1 :
12
Sample Input 2 :
111
Sample Output 2 :
7


/*************************************************** SOLUTION *************************************************************************/

#include<iostream>
using namespace std;
int main() {
	int n, a,b=0, c=1;
    cin>>n;
    
    while(n > 0){
        a = n % 10;
        b = b + a* c;
        c *= 2;
        n /= 10;
    }
    cout<<b;
}
