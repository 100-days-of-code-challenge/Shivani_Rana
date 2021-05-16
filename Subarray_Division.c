Subarray division
https://www.hackerrank.com/challenges/the-birthday-bar/problem
_______________________________________________________________________
int birthday(int s_count, int* s, int d, int m) {
    int count =0;
    for(int i=0;i<s_count;i++)
    {
        int sum =0;
        if(i+m <= s_count)
        {
        for(int j=0;j<m;j++)
        {
           sum += s[i+j];
        }
        if(sum == d)
        {
            count +=1;
        }
        }
    }

return count;
}
