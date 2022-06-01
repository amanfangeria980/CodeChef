#include<iostream>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int Pa,Pb,Qa,Qb,P,Q;
        cin>>Pa>>Pb>>Qa>>Qb;
        if(Pa>Pb){
            P=Pa;    
        }
        else{
            P=Pb;
        }
        if(Qa>Qb){
            Q=Qa;    
        }
        else{
            Q=Qb;
        }
        if(P>Q){
            cout<<"Q"<<endl;
        }
        else if(Q>P){
            cout<<"P"<<endl;
        }
        else{
            cout<<"TIE"<<endl;
        }
    }
    return 0;
}
