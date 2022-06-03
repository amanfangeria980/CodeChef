#include<iostream>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int X,Y;
        cin>>X>>Y;
        if(X>Y){
            cout<<"SECOND"<<endl;
        }
        else if(Y>X){
            cout<<"FIRST"<<endl;
        }
        else{
            cout<<"ANY"<<endl;
        }
    }
    return 0;
}