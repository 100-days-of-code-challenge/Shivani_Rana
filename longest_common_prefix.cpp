interviewbit question
asked in google
https://www.interviewbit.com/problems/longest-common-prefix/


string Solution::longestCommonPrefix(string A) {
 
  if(A.size()==0)
   return " ";
   
   
   if(A.size()==1)
   return A[0];
   
   int n = A.size();
   
       sort(A, A + n);
     
   
   
   //min length
   int min = min(A[0].size(), A[n-1].size());
   
   // the common prefix between 1 and last element will be the longest common prefix;
   
     string x = A[0];
     string y = A[n-1];
     
     
     int p =0;
     while(p < min && x[p]==y[p])
     {
         p++;
     }
     
     string prefix = x.substr(0,p);
     return prefix; 
    
   
   
    
    
}
