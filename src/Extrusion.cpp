#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int h,w,d;
        cin>>h>>w>>d;
        cin.ignore();
        char input[h][w];
        for(int j=0;j<h;j++){
            string s;
            getline(cin,s);
            for(int k=0;k<w;k++){
                input[j][k]=s[k];
            }
        }
        int height=h+d+1;
        int width=w+d+1;
        char draw[height][width];
        for(int j=0;j<height;j++){
            for(int k=0;k<width;k++){
                draw[j][k] = ' ';
            }
        }

        for(int j=0;j<h;j++){
            for(int k=0;k<w;k++){
                draw[j+height-h][k+width-w] = input[j][k];
            }
        }

        for(int j=0;j<height;j++){
            for(int k=0;k<width;k++){
                if(draw[j][k]=='+'){
                    for(int m=1;m<=d;m++){
                        if(draw[j-m][k-m]==' '){
                            draw[j-m][k-m]='\\';
                        }
                    }
                }
            }
        }

        for(int j=0;j<h;j++){
            for(int k=0;k<w;k++){
                if(draw[j][k]==' '){
                    draw[j][k] = input[j][k];
                }              
            }
        }
        for(int j=0;j<height;j++){
            for(int k=0;k<width;k++){
                cout<<draw[j][k];
            }
            cout<<"\n";
        }
    }    
}