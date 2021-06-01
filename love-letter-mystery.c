hacker rank problem - the-love-letter-mystery
https://www.hackerrank.com/challenges/the-love-letter-mystery/problem
________________________________________________________________________



int theLoveLetterMystery(char* s) {
    int l = strlen(s);
      
       int i=0;
       int j=l-1;
       int count =0;
       while(i<j)
       {
           if(s[i] !=s[j])
           {
               if(s[i]<s[j])
               {
                   while(s[j] != s[i])
                   {
                         s[j]--;
                         count++;
                   }
               }
               else{
                   while(s[i]!=s[j])
                   {
                        s[i]--;
                        count++;
                   }
               }
           }
            else
            {
               i++;
               j--;    
            }
           }
       

     return count;    
}
