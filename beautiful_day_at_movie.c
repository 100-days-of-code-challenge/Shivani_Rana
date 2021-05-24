ques- Beautiful day at the movies
https://www.hackerrank.com/challenges/beautiful-days-at-the-movies/problem
________________________________________________________________________________

int rev_num(int n)
 {
     int rev =0;
       int rem;
     while(n != 0)
        {
      
      rem = n%10;
       rev = rev*10 +rem;
       n /= 10;
        }
        return rev;
 }

int beautifulDays(int i, int j, int k) {
    int count =0;
    for(int a=i;a<=j;a++)
    {
        int rev = rev_num(a);
        int sub = abs(a- rev);
        if(sub % k == 0 )
        count += 1;
        
         
        
        
    }
return count;
}