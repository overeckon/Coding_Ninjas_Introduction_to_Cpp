Sort 0 1 2
You are given an integer array containing only 0s, 1s and 2s. Write a solution to sort this array using one scan only.
You need to change in the given array itself. So no need to return or print anything.
Input format :
Line 1 : Integer n (Array Size)
Line 2 : Array elements (separated by space)
Output Format :
Updated array elements in a single line (separated by space)
Constraints :
1 <= n <= 10^6
Sample Input 1:
7
0 1 2 0 2 0 1
Sample Output 1:
0 0 0 1 1 2 2 
Sample Input 2:
5
0 1 0 0 1
Sample Output 2:
0 0 0 1 1 

/***************************************************** SOLUTION **************************************************************************/

#include<bits/stdc++.h>
using namespace std;
void sort012(int *Arr, int n) {
    int p = n - 1; 
    int i = 0;
    for (; i < n; ++i) {
        if (Arr[i] != 0) {
            break;
        }
    }
    int j = i;
    for (; i <= p; ++i) {
        if (Arr[i] == 0) {
            swap(Arr[j++], Arr[i]); 
        }
        else if (Arr[i] == 2) {
            swap(Arr[i--], Arr[p--]); 
        }
    }
}
