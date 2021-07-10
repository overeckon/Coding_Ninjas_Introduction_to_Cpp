Code : Triangle of Numbers
Print the following pattern for the given number of rows.
Pattern for N = 3
       1
     232
   34543
Input format :
Integer N (Total no. of rows)
Output format :
Pattern in N lines
Constraints :
0 <= N <= 50
Sample Input 1:
5
Sample Output 1:
           1
         232
       34543
     4567654
   567898765
Sample Input 2:
4
Sample Output 2:
           1
         232
       34543
     4567654
     
     
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
            cout<<i+j-1;
                j=j+1;
        }
        int p=i-1;
        while(p>=1){
        	cout<<i+p-1;
        	p=p-1;
		}
        cout<<endl;
        i=i+1;
    }
  return 0;
}



