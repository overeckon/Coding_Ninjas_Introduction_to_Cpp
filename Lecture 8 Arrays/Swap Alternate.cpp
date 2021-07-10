Swap Alternate
Given an array of length N, swap every pair of alternate elements in the array.
You don't need to print or return anything, just change in the input array itself.
Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces
Output Format :
Elements after swapping in a single line, separated by space.
Constraints :
0 <= N <= 10^7
Sample Input 1:
6
9 3 6 12 4 32
Sample Output 2 :
3 9 12 6 32 4
Sample Input 1:
9
9 3 6 12 4 32 5 11 19
Sample Output 2 :
3 9 12 6 32 4 11 5 19
/***************************************************** SOLUTION **************************************************************************/
void swapAlternate(int *arr, int size)
{
    for(int i=1;i<size;i++){
        int temp=arr[i-1];
        arr[i-1]=arr[i];
        arr[i]=temp;
        i++;
        
    }
}
