Code : Character Pattern
Print the following pattern for the given N number of rows.
Pattern for N = 4
A
BC
CDE
DEFG
Input format :
Integer N (Total no. of rows)
Output format :
Pattern in N lines
Constraints
0 <= N <= 13
Sample Input 1:
5
Sample Output 1:
A
BC
CDE
DEFG
EFGHI
Sample Input 2:
6
Sample Output 2:
A
BC
CDE
DEFG
EFGHI
FGHIJK


/***************************************************** SOLUTION ***********************************************************************/

#include<iostream>
using namespace std;


int main(){

    int n,i=1;
    cin>>n;
    while(i<=n){
        int j=1;
        
        while(j<=i){
            char c= 'A'+i+j-1-1;
            cout<<c;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
  return 0;
}
