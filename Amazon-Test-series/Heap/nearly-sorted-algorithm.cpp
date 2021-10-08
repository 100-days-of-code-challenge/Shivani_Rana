nearly sorted algorithm
https://practice.geeksforgeeks.org/problems/nearly-sorted-algorithm/0#
-------------------------------------------------------------------------



#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; 
    cin>>t;
    while(t--){
        int n;
        int k; 
        cin>>n>>k;
        vector<int>ans;
        priority_queue<int,vector<int>,greater<int>>pq;
        int a;
        for(int i=0;i<n;i++){
            cin>>a;
            pq.push(a);
            if(pq.size()>k){
                ans.push_back(pq.top());
                pq.pop();
            }
        }
        while(!pq.empty()){
            ans.push_back(pq.top());
            pq.pop();
        }
        for(auto it: ans){
            cout<<it<<" ";
        }
        cout<<endl;
    }
	return 0;
}