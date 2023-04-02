#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,b,w,d;
        cin>>n>>b>>w>>d;
        int count = n+1;
        int sum=0;
        for(int j=0;j<n;j++){
            int h;
            cin>>h;
            sum+=h;
        }
        int height=sum+count*b;
        int width=w+2*b;
        cout<<d*(height*width-sum*w)<<endl;
    }
}