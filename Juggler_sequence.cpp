geeksforgeeks problem - recursion problem ,
https://practice.geeksforgeeks.org/problems/juggler-sequence3930/1/?category[]=Recursion&category[]=Recursion&difficulty[]=-1&page=1&query=category[]Recursiondifficulty[]-1page1category[]Recursion#

________________________________________________________________________

class Solution{
public:
         void solve(vector<int>&v,int N)
         {
             if(N==1)
             {
                 v.push_back(N);
                 return;
             }
             v.push_back(N);
              if(N%2 == 0)
             {
                 N = pow(N,0.5);
                 solve(v,N);
             }
             else
             {
                 N = pow(N,1.5);
                 solve(v,N);
             }
         }

    vector<int> jugglerSequence(int N){
        // code here
        vector<int>v;
        solve(v,N);
        return v;
    }
};