
Code : Diamond of stars
Print the following pattern for the given number of rows.
Note: N is always odd.


Pattern for N = 7
   *
  ***
 *****
*******
 *****
  ***
   *
Input format :
N (Total no. of rows and can only be odd)
Output format :
Pattern in N lines
Constraints :
1 <= N <= 49
Sample Input 1:
5
Sample Output 1:
  *
 ***
*****
 ***
  *
Sample Input 2:
3
Sample Output 2:
  *
 ***
  *
  
  
/*************************************************** SOLUTION *************************************************************************/

#include<iostream>
using namespace std;


int main(){

    int n,i=1;
    cin>>n;
    while(i<=n/2+1){
        int spaces=1;
        while(spaces<=n/2-i+1){
            cout<<' ';
            spaces=spaces+1;
        }
        int j=1;
        while(j<=i){
            cout<<'*';
                j=j+1;
        }
        int p=i-1;
        while(p>=1){
        	cout<<'*';
        	p=p-1;
		}
        cout<<endl;
        i=i+1;
    }
    i=1;
    while(i<=n/2){
        int spaces=1;
        while(spaces<=i){
            cout<<' ';
            spaces=spaces+1;
        }
        int j=2*(n/2-i+1)-1;
        while(j>=1){
            cout<<'*';
                j=j-1;
        }
        cout<<endl;
        i=i+1;
    }
  return 0;
}



