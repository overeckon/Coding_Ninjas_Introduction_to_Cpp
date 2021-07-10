Nth Fibonacci Number
Nth term of fibonacci series F(n) is calculated using following formula -
    F(n) = F(n-1) + F(n-2), 
    Where, F(1) = F(2) = 1
Provided N you have to find out the Nth Fibonacci Number.
Input Format :
Integer n
Output Format :
Nth Fibonacci term i.e. F(n)
Constraints:
1 <= n <= 25
Sample Input 1:
4
Sample Output 2:
3 
Sample Input 1:
6
Sample Output 2:
8

/*************************************************** SOLUTION *************************************************************************/


#include<iostream>
using namespace std;


int main(){
    long long int N;
    cin>>N;
    long long int b=1,c=1,temp=b+c;
    	if(N==0 || N==1){
        cout<<1;
    }
    else{
    for(int i=2;i<N;i++){
    
        
        temp=b+c;
        b=c;
        c=temp;
  
    }
        cout<<temp;
    return 0;
}
}

