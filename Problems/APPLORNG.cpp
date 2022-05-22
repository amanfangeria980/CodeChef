#include<iostream>
using namespace std;

int main(){
    int x,a,b;
    cin>>x;
    cin>>a>>b;
    if((x-a-b)>=0){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}