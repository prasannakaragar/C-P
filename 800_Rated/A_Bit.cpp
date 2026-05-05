#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int ans=0;
    while(t--){
     string x;
     cin>>x;
     if(x[0]=='+'){
        ans++;
     }else if(x[2]=='+'){
        ans++;
     }else if(x[0]=='-'){
        ans--;
     }else if(x[2]=='-'){
        ans--;
     }
    }
    cout<<ans<<"\n";
    return 0;
}