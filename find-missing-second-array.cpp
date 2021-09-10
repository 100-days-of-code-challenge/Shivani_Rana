find missing in second array
https://practice.geeksforgeeks.org/problems/in-first-but-second5423/1#


class Solution{
	
	
	public:
	vector<long long> findMissing(long long A[], long long B[],  
                 int N, int M) 
	{ 
	    // Your code goes here
	    unordered_set<long long>s;
	    for(int i =0;i<M;i++){
	        s.insert(B[i]);
	    }
	    vector<long long>res;
	    for(int i =0;i<N;i++){
	        if(s.find(A[i])==s.end()){
	            res.push_back(A[i]);
	        }
	    }
	    return
	} 
};
	