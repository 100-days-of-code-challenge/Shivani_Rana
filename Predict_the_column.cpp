GFG Problem --> c++ course
Predict the column with maximum zeroes
https://practice.geeksforgeeks.org/problems/predict-the-column/1/?track=module-2-arrays-and-strings&batchId=113#

class Solution{
    public:
    /*Function to count zeros in each column
    * N : Number of rows and columns in array
    M is the matrix that is globally declared
    */
    int columnWithMaxZeros(vector<vector<int>>arr,int N){
        
        // Your code here
        int m = 0;
        int cwmz = -1;
        for(int i = 0;i<N;i++)
        {
            int count = 0;
            for(int j = 0;j<N;j++)
            {
                if(arr[j][i]==0)
                count++;
            }
            if(m<count)
            {
            cwmz = i;
            m = count;
        }
        }
        
        return cwmz;
    }
};
