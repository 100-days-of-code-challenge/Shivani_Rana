HackerRank Problem 
Bit Manipulation
https://www.hackerrank.com/challenges/lonely-integer/problem
_____________________________________________________________


int lonelyinteger(vector<int> a) {
    int num =0;
    for(int i = 0;i<a.size();i++)
    {
        num = num^a[i];
        
    }
    return num;

}