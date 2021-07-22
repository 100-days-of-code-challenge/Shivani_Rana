GFG --> c++ course
Swapping
https://practice.geeksforgeeks.org/problems/magic-in-cpp/1/?track=module-3-pointers-and-objects%20&batchId=113#


void swap(int *A, int *B){
    
    // Your code here
    int temp = *B;
    *B = *A;
    *A= temp;
    
}

// Function to swap A and B
// using reference
void swap(int &A, int &B){
  
    // Your code here
    
  int temp = A;
    A = B;
    B= temp;
}