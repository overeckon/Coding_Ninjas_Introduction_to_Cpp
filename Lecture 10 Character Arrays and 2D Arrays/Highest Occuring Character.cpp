Highest Occuring Character
Given a string, find and return the highest occurring character present in the given string.
If there are 2 characters in the input string with same frequency, return the character which comes first.
Note : Assume all the characters in the given string are lowercase.
Sample Input 1:
abdefgbabfba
Sample Output 1:
b
Sample Input 2:
xy
Sample Output 2:
x



/********************************************************* SOLUTION *******************************************************************/

char highestOccurringChar(char input[]) {
    int freq[256] = {0}; 
    int indices[256];
    for(int i = 0; i < 256; i++) { 
        indices[i] = -1; 
    } 
    for(int i = 0; input[i] != '\0'; i++) { 
        int index = input[i];
        freq[index]++;
        if(indices[index] == -1) {
            indices[index] = i;
        }
    } 
    int maxIndex = 0;
    for(int i = 0; i < 256; i++) { 
        if(freq[i] > freq[maxIndex]) {
            maxIndex = i; 
        } 
        else if(freq[i] == freq[maxIndex]) {
            if(indices[i] < indices[maxIndex]) {
                maxIndex = i;
            }
        }
    }
    return (char)maxIndex;
}
