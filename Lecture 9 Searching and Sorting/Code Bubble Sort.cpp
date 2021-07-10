Code:Bubble Sort
Given a random integer array. Sort this array using bubble sort.
Change in the input array itself. You don't need to return or print elements.
Input format :
Line 1 : Integer N, Array Size
Line 2 : Array elements (separated by space)
Output format :
Elements of array in sorted order. Print them in a single line and space-separated
Constraints :
0 <= N <= 10^4
Sample Input 1:
7
2 13 4 1 3 6 28
Sample Output 1:
1 2 3 4 6 13 28
Sample Input 2:
5
9 3 6 2 0
Sample Output 2:
0 2 3 6 9
/***************************************************** SOLUTION **************************************************************************/

void bubbleSort(int *input, int size)
{
    int temp;
    for(int j=0;j<size-1;j++){
    for(int i=0;i<size-1-j;i++){
            if(input[i]>input[i+1]){
               temp=input[i];
                input[i]=input[i+1];
                input[i+1]=temp;
                
            }
    }
}
}
