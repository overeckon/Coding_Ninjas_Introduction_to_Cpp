Second Largest in array
Given a random integer array of size n, find and return the second largest element present in the array.
If n <= 1 or all elements are same in the array, return -2147483648 i.e. -2^31.
Input format :
Line 1 : Integer n (Array Size)
Line 2 : Array elements (separated by space)
Output Format :
Second largest element
Constraints :
0 <= N <= 10^6
Sample Input 1:
7
2 13 4 1 3 6 28
Sample Output 1:
13
Sample Input 2:
5
9 3 6 2 9
Sample Output 2:
6
Sample Input 3:
2
6 6
Sample Output 3:
-2147483648


/***************************************************** SOLUTION **************************************************************************/
/***************************************************** SOLUTION **************************************************************************/

#include<limits.h>
using namespace std;
int findSecondLargest(int *input,int n){
    if(n<=0)
        return INT_MIN;
    int max=input[0];
    int sec=INT_MIN;
    for(int i=1;i<n;i++) {
        if(input[i]>max){
            sec=max;
            max=input[i];
        }
        else if(input[i]>sec && input[i] != max)
            sec=input[i];
    }
    return sec;
}
