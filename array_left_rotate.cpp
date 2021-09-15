hacker rank
array
array left rotation
https://www.hackerrank.com/challenges/array-left-rotation/problem


vector<int> rotateLeft(int d, vector<int> arr) {
    vector<int>v;
    int n = arr.size();
    for(int i =d;i<n;i++){
        v.push_back(arr[i]);
    }
    int i =0;
    while(d--){
        v.push_back(arr[i]);
        i++;
    }
return v;
}