#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int w,o,b,cow,cbo,cbw;
        cin>>w>>o>>b>>cow>>cbo>>cbw;
        int minow=min(cow,cbo+cbw);
        int minbo=min(cbo,cow+cbw);
        int minbw=min(cbw,cbo+cow);
        cout<<min(b*minbw+o*minow,min(w*minow+b*minbo,w*minbw+o*minbo))<<endl;
    }
    
}