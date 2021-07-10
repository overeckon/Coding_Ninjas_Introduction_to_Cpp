

Sum of Even Numbers till N
Given a number N, print sum of all even numbers from 1 to N.
Input Format :
Integer N
Output Format :
Required Sum 
Sample Input 1 :
 6
Sample Output 1 :
12

/************************************************** SOLUTION *****************************************************************************/


#include<iostream>
using namespace std;


int main(){
    int N;
    cin>>N;
    int p=0,i=0;
    while(i<=N){
        if(i%2==0){
             p=p+i;
        }
        i+=1;
    }
    cout<<p;
}
