Find Unique
Given an integer array of size 2N + 1. In this given array, N numbers are present twice and one number is present only once in the array.
You need to find and return that number which is unique in the array.
Note : Given array will always contain odd number of elements.


Input format :
Line 1 : Array size i.e. 2N+1
Line 2 : Array elements (separated by space)
Output Format :
Unique element present in the array
Constraints :
1 <= N <= 10^4 + 1
Sample Input 1:
7
2 3 1 6 3 6 2
Sample Output 1:
1
Sample Input 2:
5
2 4 7 2 7
Sample Output 2:
4


/***************************************************** SOLUTION **************************************************************************/
#include<iostream>
using namespace std;

int main(){
   int N,sum=0;
    cin>>N;
    int A[10000000];
    for(int i=0;i<N;i++){
        cin>>A[i];
        sum+=A[i];
    }
    cout<<sum;
    return 0;
}



