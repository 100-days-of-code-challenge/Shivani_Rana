REPEATED STRING(HACKERRANK)
Q4-  There is a string, S, of lowercase English letters that is repeated infinitely many times. Given an integer,N , find and print the number of letter a's in the first  letters of the infinite string.

__________________________________________________________________________________________________________________________________________________________________________________________________________
long repeatedString(char* s, long n) {
    long count =0;
    for(long i=0;i<strlen(s);i++)
    {
        
        if(s[i] == 'a')
        {
            count+=1;
        }
    }
        long repititions = n/strlen(s);
        count = count*repititions;
        
    for(long i=0;i<n%strlen(s);i++)
        {
            if(s[i]=='a')
            count++;
        }
        
    
  return count;

}