Check Palindrome
Given a String s, check it its palindrome. Return true if string is palindrome, else return false.
Palindrome strings are those, where string s and its reverse is exactly same.
Input Format :
 String S
Output Format :
"true" if S is palindrome, else "false"
Sample Input 1 :
abcdcba
Sample Output 1 :
true 
	
	
/********************************************************* SOLUTION *******************************************************************/
	
bool checkPalindrome(char str[]) {
    bool divided=false;
    int a=strlen(str);
    for(int i=0;i<a;i++){
        if(str[i]==str[a-1]){
            divided=true;
            a--;
        }
        else{
            return false;
        }
        
    }
    if(divided==true){
        return true;
    }
}
