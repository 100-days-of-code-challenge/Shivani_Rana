ques- reversing a string
https://practice.geeksforgeeks.org/problems/reverse-a-string/1#
_______________________________________________________________

string reverseWord(string str){
    int l= str.length() - 1;
    int i=0;
    int j = l;
    while(i < j)
    {
        swap(str[i],str[j]);
        i++;
        j--;
    }
    return str;
  //Your code here
}