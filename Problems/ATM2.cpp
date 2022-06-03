#include<iostream>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int N,K;
        cin>>N>>K;
        int arr[N];
        for(int i=0;i<N;i++){
            int num;
            cin>>num;
            arr[i]=num;
        }
        for(int i=0;i<N;i++){
            if(arr[i]<=K){
                K-=arr[i];
                cout<<"1";
            }
            else{
                cout<<"0";
            }
        }
        cout<<endl;
    }
    return 0;
}