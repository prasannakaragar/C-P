#include<bits/stdc++.h>
using namespace std;
bool isSubstring(const string &x, const string &s){
    return x.find(s) != string::npos;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
       int n,m;
       cin>>n>>m;
       string x,s;
       cin>>x>>s;
       int ans=0;
       while(x.size()<s.size()){
            x+=x;
            ans++;
       }
       if(isSubstring(x,s)){
            cout<<ans<<"\n";
            continue;
       }
            x+=x;
            ans++;
        if(isSubstring(x,s)){
            cout<<ans<<"\n";
        }else{
            cout<<-1<<"\n";
        }

    }
    
    return 0;
}