Column Wise Sum
Given a 2D integer array of size M*N, find and print the sum of ith column elements separated by space.
Input Format :
Line 1 : Two integers M and N (separated by space)
Next M lines : ith row elements (separated by space)
Output Format :
Sum of every ith column elements (separated by space)
Constraints :
1 <= M, N <= 10^3
Sample Input :
4 2
1 2
3 4
5 6
7 8
Sample Output :
16 20


/********************************************************* SOLUTION *******************************************************************/
#include<iostream>
using namespace std;


int main(){

      int m,n;
      cin>>m>>n;
      int A[m][n];
      for(int i=0;i<m;i++){
          for(int j=0;j<n;j++){
              cin>>A[i][j];
          }
      }
    int j=0;
    while(j<n){
        int s=0;
    for(int i=0;i<m;i++){
        s+=A[i][j];
    }
    j++;
        cout<<s<<" ";
    
}
}



