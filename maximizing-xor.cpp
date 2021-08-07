Hackerrank
bit manipulation
https://www.hackerrank.com/challenges/maximizing-xor/problem
________________________________________________________________

int maximizingXor(int l, int r) {
    int max = 0;
    for(int i=l;i<=r;i++)
    {
        for(int j=l;j<=r;j++)
        {
            int Er = i^j;
            if(Er>max)
            max = Er;
        }
    }
    return max;

}