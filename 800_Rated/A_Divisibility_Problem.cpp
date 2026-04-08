#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t-->0){
        int n,m;
        int count=0;
        cin>>n>>m;
        if(n%m == 0){
            cout<<0<<"\n";
        }else{
           cout<<(m - (n%m))%m<<"\n";
        }

    }
    return 0;
}