Map
https://www.interviewbit.com/old/problems/distinct-numbers-in-window/

vector<int> Solution::dNums(vector<int> &A, int B) {
    
    unordered_map<int,int> mp;
    for(int i=0; i<B; i++) {
        mp[A[i]]++;
    }
    vector<int> ans;
    ans.push_back(mp.size());
    for(int i=1; i<=A.size()-B;i++) {
        mp[A[i-1]]--;
        if(mp[A[i-1]]==0) {
            mp.erase(A[i-1]);
        }
        mp[A[i+B-1]]++;
        ans.push_back(mp.size());
    }
    return ans;
}
