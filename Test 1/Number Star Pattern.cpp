Number Star Pattern
Print the following pattern for given number of rows.
Input format :

Line 1 : N (Total number of rows)

Sample Input :
   5
Sample Output :
1234554321
1234**4321
123****321
12******21
1********1


/*************************************************** SOLUTION *************************************************************************/

#include<iostream>
using namespace std;

int main(){
    int i,j,n,k;
    
    cin >>n;
    i=n;
    while(i>=1){
    	j=1;
    	while(j<=n){
    		if(j<=i){
			
                cout <<j;
            }
            else{
			
                cout <<"*";
            }
                j++;
		}
		j=n;
		while(j>=1){
			if(j<=i)
        {
            cout <<j;
        }
        else{
            cout <<"*";
    }
    j--;
		}
		i--;
		cout<<endl;
	}
	}
