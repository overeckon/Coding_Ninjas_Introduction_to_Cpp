Code : Mirror Number Pattern
Print the following pattern for the given N number of rows.
Pattern for N = 4
      1
    12
  123
1234
Input format :
Integer N (Total no. of rows)
Output format :
Pattern in N lines
Constraints
0 <= N <= 50
Sample Input 1:
3
Sample Output 1:
      1 
    12
  123
Sample Input 2:
4
Sample Output 2:
      1 
    12
  123
1234
	      
/*************************************************** SOLUTION *************************************************************************/

#include<iostream>
using namespace std;


int main(){

    int n,i=1;
    cin>>n;
    while(i<=n){
        int spaces=1;
        while(spaces<=n-i){
            cout<<' ';
            spaces=spaces+1;
        }
        int j=1;
        while(j<=i){
            cout<<j;
                j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
  return 0;
}



