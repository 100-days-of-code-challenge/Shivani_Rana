Permutation
Backtracking
Interviewbit
https://www.interviewbit.com/old/problems/permutations/


vector<vector<int> > Solution::permute(vector<int> &A) {
    sort(A.begin(),A.end());
    
    vector<vector<int>>res;
    do{
        res.push_back(A);
        
    }
    while(next_permutation(A.begin(),A.end()));
    
    return res;

}
