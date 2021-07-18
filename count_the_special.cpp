GFG --> c++ course
Count the specials
https://practice.geeksforgeeks.org/problems/count-the-specials/1/?track=module-2-arrays-and-strings&batchId=113#



int countSpecials(int arr[], int sizeof_array, int K){
    
    int f = floor(sizeof_array/K), count = 0;
    
    
    // Your code here
     unordered_map<int, int> mp;
    
    for(int i = 0; i < sizeof_array; i++)
    {
        mp[arr[i]]++;
    }
    
    for(auto x: mp)
    {
        if(x.second == f)
        {
            count++;
        }
    }

    return count;
    
    
    
    
    
}