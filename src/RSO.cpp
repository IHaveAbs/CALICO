#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int y;
        cin>>y;
        string n;
        string s;
        getline(cin,s);
        getline(cin,n);
        for(int j=0;j<(int)n.size();j++){
            n[j]=tolower(n[j]);
        }
        
        if(y<2010){
            if(n.size()<=50){
                cout<<"VALID"<<endl;
            }
            else{
                cout<<"INVALID"<<endl;
            }
        }
        else{
            if(n.size()>50||(n.substr(0,3)=="cal"&&!isalnum(n[3]))||(n.substr(0,10)=="california"&&!isalnum(n[10]))||(n.substr(0,8)=="berkeley"&&!isalnum(n[8]))){
                cout<<"INVALID"<<endl;
            }
            else{
                cout<<"VALID"<<endl;
            }
        }
    }
}