geeks for geeks - Recursion question
https://practice.geeksforgeeks.org/problems/geek-onacci-number/0/?category[]=Recursion&category[]=Recursion&page=1&query=category[]Recursionpage1category[]Recursion#
_________________________________________________________________________________________________________________________________________________________________________

#include <iostream>
using namespace std;

int geek_onacci(int A, int B, int C, int N)
{
    long long int D;
   for(int i = 4;i<=N;i++)
   {
       D = A+B+C;
       A =  B;
       B = C;
       C = D;
   }
   return  D;
}

int main() {
	//code
	// int A, B,C,N;
	int T;
	cin>>T;
	while(T--)
	{
	  long long  int A, B,C,N;
	    cin >> A >> B >> C >> N;
	    
	    cout<<geek_onacci(A,B,C,N)  <<"\n";
	}

	return 0;
}