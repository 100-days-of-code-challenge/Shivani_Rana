GFG question- First non-repeating character in a string
https://practice.geeksforgeeks.org/problems/first-non-repeating-character-in-a-stream1216/1/?track=md-queue&batchId=144
____________________________________________________________________________________________________________________________

class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		    queue<char>q;
		    string res;
		    int arr[26] = {0};
		    int l = A.length();
		    for(int i=0;i<l;i++)
		    {
		       int hash_val= A[i]-'a';
                arr[hash_val] = arr[hash_val] + 1;
                if(arr[hash_val] == 1)
                {
                    //push when 1 time visited
                    q.push(A[i]);
                }
                //dequeue untilfront isnot a non-repeating element
                else 
                    {
                        while(!q.empty() && arr[q.front()-'a']>1)
                        q.pop();
            
                            }
                            //add to result if empty then # else the first in the queue
                            
                            
                             if(!q.empty())
                               res+=q.front();
        else
            res+="#";
		       //arr[A[i]-'a']++;
		    }
		    return res;
		    
		}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends