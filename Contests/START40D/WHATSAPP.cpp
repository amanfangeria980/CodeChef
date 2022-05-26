#include<iostream>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int X,Y,Z;
        int unread; //unread messages
        cin>>X>>Y>>Z;
        unread =(Z*X-Z*Y);
        cout<<unread<<endl;
    }
    return 0;
}