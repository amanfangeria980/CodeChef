#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int N,X;
        cin>>N>>X;
        int res;
        res=N/(3*X);
        cout<<res<<endl;
    }
    return 0;
}