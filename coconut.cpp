codechef june challenge- 1
https://www.codechef.com/JUNE21C/submit/COCONUT


#include <iostream>
#include<cmath>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	for(int i=0;i<T;i++)
	{
	    int xa, xb, Xa,Xb;
	    cin>>xa >>xb>>Xa>>Xb;
	    double a,b;
	    a = Xa/(double) xa;
	    b =Xb/(double)xb;
	    int sum = ceil(a) + ceil(b);
	    cout<<sum<<endl;
	}
	return 0;
}

