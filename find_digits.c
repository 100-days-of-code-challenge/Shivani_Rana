ques- Find Digit
https://www.hackerrank.com/challenges/find-digits/problem 
_____________________________________________________________


int findDigits(int n) {
    int term;
    int i=0;
    int new_n = n;
    while(new_n > 0)
       {
           term = new_n%10;
           if(term!= 0 && n%term==0) i++;
           new_n /= 10;
       }
return i;
}