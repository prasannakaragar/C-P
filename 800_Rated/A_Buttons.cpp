#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t-->0){
        int a,b,c;
        cin>>a>>b>>c;
        if(a>b){
            cout<<"First\n";
            continue;
        }else if(b>a){
            cout<<"Second\n";
            continue;
        }
        if(a==b){
            if(c%2 == 1){
                cout<<"First\n";
                continue;
            }else{
                cout<<"Second\n";
                continue;
            }
        }
    }
    return 0;
}