Pyramid Number Pattern
Print the following pattern for the given number of rows.
Pattern for N = 4
   1
  212
 32123
4321234
Input format : N (Total no. of rows)

Output format : Pattern in N lines

Sample Input :
5
Sample Output :
        1
      212
    32123
  4321234
543212345
		
		
/*************************************************** SOLUTION *************************************************************************/
		
#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int i, spaces, j, k;
    
    for (i = 1; i <= N; i++)
    {
        for (spaces = N; spaces > i; spaces--)
        {
            cout<<(" ");
        }
        for (j = i; j >= 1; j--)
        {
            cout<< j;
        }
        for (k = 2; k <= i; k++)
        {
            cout<<k;
        }
        cout<<endl;
    }
}
