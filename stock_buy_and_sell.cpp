GFG - Problem -> stock buy and sell
https://practice.geeksforgeeks.org/problems/stock-buy-and-sell-1587115621/1#
_____________________________________________________________________________

class Solution{
public:
    //Function to find the days of buying and selling stock for max profit.
    vector<vector<int> > stockBuySell(vector<int> A, int n){
        // code here
        vector<vector<int>>v;
        int c = 0;
        for(int i =1;i<n;i++)
        {
            vector<int>v1;
            if(A[i-1]<A[i])
            {
                v1.push_back(i-1);
                i++;
                while(i<n)
                {
                    if(A[i-1]<=A[i])
                    {
                        i++;
                    }
                    else break;
                }
                v1.push_back(i-1);
                c++;
                v.push_back(v1);
            }
        }
        return v;
    }
};