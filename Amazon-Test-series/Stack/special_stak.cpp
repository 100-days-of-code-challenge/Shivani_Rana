Amazon Series
Special stack
https://practice.geeksforgeeks.org/problems/special-stack/1/?track=amazon-stacks&batchId=192#
________________________________________________________________


stack<int>s;
stack<int>ss;
void push(stack<int>& s, int a){
	// Your code goes he
	s.push(a);
	if(ss.size()==0 || ss.top()>=a)
	ss.push(a);
	
	return ;
	
}

bool isFull(stack<int>& s,int n){
	// Your code goes here
	return s.size() == n;
}

bool isEmpty(stack<int>& s){
	// Your code goes here
	return s.size() == 0;
}

int pop(stack<int>& s){
	// Your code goes here
if(s.size()==0)
return -1;

int ans = s.top();
s.pop();
if(ans==ss.top())
ss.pop();
return ans;
}

int getMin(stack<int>& s){
	// Your code goes here
	if(ss.size()==0)
	return -1;
	
	return ss.top();
	
}