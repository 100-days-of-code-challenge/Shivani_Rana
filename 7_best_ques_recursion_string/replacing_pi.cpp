#include <iostream>
using namespace std;

void replace_pi(string S)
{
    if(S.length()==0)
    return;
    
    if(S[0]== 'p' && S[1]=='i')
    {
    cout<<3.14;
    replace_pi(S.substr(2));
    }
    else{
        cout<<S[0];
        replace_pi(S.substr(1));
    }
}

int main() {
    
    string s = "pippxxxpixipi";
    replace_pi(s);
    
    cout<<s;
	
	
	return 0;
}