#include<iostream>
using namespace std;

int main(){
    int T,X,Y,Z;
    cin>>T;
    int result=0;
    while(T--){
        cin>>X>>Y>>Z;
        result=(X*5+Y*10)/Z;
        cout<<result<<endl;
    }

    return 0;
}