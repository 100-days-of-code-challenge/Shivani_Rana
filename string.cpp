hackerrank ques
https://www.hackerrank.com/challenges/c-tutorial-strings/problem

#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the progra
    string a,b;
    cin>>a >>b;
    int l1= a.size();
    int l2= b.size();
    cout<<l1<<" "<<l2<<endl;
    
    string c = a+b;
    cout<<c<<endl;
    
    char temp = a[0];
    a[0]= b[0];
    b[0]=temp;
    
    cout<<a<<" "<<b<<endl;
  
    return 0;
}