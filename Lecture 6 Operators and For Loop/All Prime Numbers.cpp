All Prime Numbers
Given an integer N, print all the prime numbers that lie in the range 2 to N (both inclusive).
Print the prime numbers in different lines.
Input Format :
Integer N
Output Format :
Prime numbers in different lines
Constraints :
1 <= N <= 100
Sample Input 1:
9
Sample Output 1:
2
3
5
7
Sample Input 2:
20
Sample Output 2:
2
3
5
7
11
13
17
19
	
/*************************************************** SOLUTION *************************************************************************/


#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    for(int i=2;i<=n;i++){
    	int c=0;
         for(int j=2;j<=n;j++){
        if(i%j==0){
            c=c+1;
        }
    }
       if(c==1){
       	cout<<i<<endl;
		}

}
return 0;
}



