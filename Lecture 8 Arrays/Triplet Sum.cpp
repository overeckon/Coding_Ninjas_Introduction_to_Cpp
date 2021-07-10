Triplet Sum
Given a random integer array and a number x. Find and print the triplets of elements in the array which sum to x.
While printing a triplet, print the smallest element first.
That is, if a valid triplet is (6, 5, 10) print "5 6 10". There is no constraint that out of 5 triplets which have to be printed on 1st line. You can print triplets in any order, just be careful about the order of elements in a triplet.
Input format :
Line 1 : Integer N (Array Size)
Line 2 : Array elements (separated by space)
Line 3 : Integer x
Output format :
Line 1 : Triplet 1 elements (separated by space)
Line 2 : Triplet 2 elements (separated by space)
Line 3 : and so on
Constraints :
0 <= N <= 10^3
0 <= x <= 100
Sample Input 1:
7
1 2 3 4 5 6 7 
12
Sample Output 1:
1 4 7
1 5 6
2 3 7
2 4 6
3 4 5


/***************************************************** SOLUTION **************************************************************************/
int tripletSum(int *input, int size, int x)
{
	int temp,count=0;
	for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
             for(int k=j+1;k<size;k++){
            temp=input[i]+input[j]+input[k];
            if(temp==x){
                count++;
            }
        }
    }
    }
    return count;
}
