Fibonacci Number
Given a number N, figure out if it is a member of fibonacci series or not. Return true if the number is member of fibonacci series else false.
Fibonacci Series is defined by the recurrence
    F(n) = F(n-1) + F(n-2)
Input Format :
Integer N
Output Format :
true or false
Sample Input 1 :
5
Sample Output 1 :
true
Sample Input 2 :
14
Sample Output 2 :
false    


/***************************************************** SOLUTION **************************************************************************/



bool checkMember(int n){
  int a=1,b=1,temp;
    if(n==0 ){
        return true;
    }
    else if(n==1){
        return true;
    }
    else if(n>1){
        for(int i=2;i<n+1;i++){
            temp=a+b;
            a=b;
            b=temp;
            if(n==temp){
                return true;
            }
        }
        return false;
    }

}

