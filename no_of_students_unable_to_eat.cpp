LeetCOde
https://leetcode.com/problems/number-of-students-unable-to-eat-lunch/submissions/



class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        
        stack<int>s;
        queue<int>q;
        int n = students.size();
        for(int i = n-1;i>=0;i--){
            s.push(sandwiches[i]);
            
        }
         for(int i =0;i<n;i++){
            q.push(students[i]);
            
        }
        int  count = 0;
        while(!q.empty() && (count<q.size())){
            if(s.top()==q.front())
            {
                s.pop();
                q.pop();
                count = 0;
            }
            else{
                int temp = q.front();
                q.pop();
                q.push(temp);
                count++;
            }
            
        }
        return q.size();
    }
};