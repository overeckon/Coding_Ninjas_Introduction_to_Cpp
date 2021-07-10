Find power of a number
Write a program to find x to the power n (i.e. x^n). Take x and n from the user. You need to print the answer.
Note : For this question, you can assume that 0 raised to the power of 0 is 1


Input format :
Two integers x and n (separated by space)
Output Format :
x^n (i.e. x raise to the power n)
Constraints:
0 <= x <= 8 
0 <= n <= 9
Sample Input 1 :
 3 4
Sample Output 1 :
81
Sample Input 2 :
 2 5
Sample Output 2 :
32

/************************************************** SOLUTION *****************************************************************************/



#include<iostream>
using namespace std;

int main() {
	int x,n,i=1;
    cin>>x>>n;
    int result=x;
    if(n==0){
        result=1;
        cout<<result;
    }
    else{
        while(i<n){
            result=result*x;
            i+=1;
        }
        cout<<result;
    }
	return 0;
}

