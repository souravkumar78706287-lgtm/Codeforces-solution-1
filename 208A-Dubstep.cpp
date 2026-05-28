#include <iostream>
using namespace std;

int main() {
	string s;
	int flag=1;
	for(int i=0;i<s.size();i++){
		if(s[i]=='D' && s[i+1]=='U' && s[i+2]=='B'){
			if(flag==1){
				cout<<" ";
			}
			i+=2;
		}
		else{
			cout<<s[i];
			flag=1;
		}
	}
	return 0;
}
