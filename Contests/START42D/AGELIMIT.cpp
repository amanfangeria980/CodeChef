#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int X,Y,A;
	    cin>>X>>Y>>A;
	    if(A>=X && A<Y){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
