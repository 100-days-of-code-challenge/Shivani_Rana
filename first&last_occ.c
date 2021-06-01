gfg problem- First and Last occurance of x
https://practice.geeksforgeeks.org/problems/first-and-last-occurrences-of-x3116/1#
____________________________________________________________________________

vector<int> find(int arr[], int n , int x )
{
   
	int j=0;
	vector<int>answer(2,-1);
	for(int i=0 ; i<n ; i++)
	{
		if(n==0)   
		return answer;
    
		  if(arr[i]==x)
		  {
			  answer[0]=i;
			  j=i;
			  break;
		  }
	}

	for(int i=j ; i<n ; i++) 
	{
		  if(arr[i]==x)
		  {
		  answer[1]=i;
		  }
	}
return answer;
}