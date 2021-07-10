GFG Problem --> sort 0,1,2
https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1#

class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // coode here 
        int i =0;
        int low  = 0;
        int j = n-1;
        while(low<j)
        {
            switch(a[i])
            {
                case 0:
                swap(a[low],a[i]);
                low++;
                i++;
                break;
            
            case 1:
            i++;
            break;
            
            case 2:
            swap(a[i],a[j]);
            j--;
            break;
            }
            
        }
    }
    
};