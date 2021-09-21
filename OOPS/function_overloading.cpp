#include<iostream>

using namespace std;

class  A{
	public:
		
		
		void sum(int a, int b){
			int c = a+b;
			cout<<c;
		}
		void sum(int a,int b , int c)
		{
			int d = a+b+c;
			
			cout<<d;
		}
		void sum(float a , float b)
		{
			int c = a+b;
			cout<<c;
		}
};

int main(){
	int x,y,z;
	cin>>x;
	cin>>y;
	A obj1;
	
	obj1.sum(x,y);
	
	obj1.sum(2,3,6);
	
	obj1.sum(2.3f,3.7f);
	return 0;
}