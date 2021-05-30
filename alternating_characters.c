hackerrank question - alernating characters
https://www.hackerrank.com/challenges/alternating-characters/problem
_______________________________________________________________________


int alternatingCharacters(char* s) {
    int l = strlen(s);
    int count =0;
    for(int i=0;i<l;i++)
    {
        if(s[i]==s[i+1])
        count++;
    }
return count;
}