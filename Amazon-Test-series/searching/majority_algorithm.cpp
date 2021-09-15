Majority_element
Moore Vooing algorith
https://practice.geeksforgeeks.org/problems/majority-element-1587115620/1/?track=amazon-searching&batchId=192#
--------------------------------------------------------------------------

int majorityElement(int a[], int size)
{
        
    // your code here
    int count = 1, majority_element = 0;
    // Voting algorithm for finding majority element
    for(int i =1;i<size;i++){
        if(a[i]== a[majority_element]){
            count ++;
        }
        else{
            count--;
        }
        if(count == 0){
        majority_element = i;
        count = 1;
        }
    }
    // Checking whether the candidate that we found 
    // is really the majority element
    count = 0;
        for(int i = 0; i < size; i++){
            if(a[i] ==  a[majority_element])
                count++;
        }
        
        return (count > size/2) ? a[majority_element] : -1;
}
    