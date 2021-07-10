Code : Alpha Pattern
Send Feedback
Print the following pattern for the given N number of rows.
Pattern for N = 3
 A
 BB
 CCC
Input format :
Integer N (Total no. of rows)
Output format :
Pattern in N lines
Constraints
0 <= N <= 26
Sample Input 1:
7
Sample Output 1:
A
BB
CCC
DDDD
EEEEE
FFFFFF
GGGGGGG
Sample Input 2:
6
Sample Output 2:
A
BB
CCC
DDDD
EEEEE
FFFFFF


/***************************************************** SOLUTION ***********************************************************************/

#include<iostream>
using namespace std;


int main(){

    int n,i=1;
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=i){
            char c= 'A'+i-1;
            cout<<c;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
  return 0;
}

