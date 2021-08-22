gfg contest ques
geekand snow fighting
https://practice.geeksforgeeks.org/contest/sample-geeks-challenge/problems/#
_____________________________________________________________________________

class Solution {
public:
    int snowball(int N, vector<int> weights){
        // code here
        int sum =0;
        for(int i =0;i<N;i++)
        {
            sum += weights[i];
        }
        return sum;
    }
};
