#include<bits/stdc++.h>
using namespace std;
#define endl '\n'  

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
     
     int n;
     cin>>n;
     vector<int>v(n,0);
     for(auto &x:v){
        cin>>x;
     }
     set<int>s(v.begin(),v.end());
     bool is=true;
     bool prt=false;
     int mx=*max_element(v.begin(),v.end());
     for(int i=1;i<1024;i++){
        is=true;
        for(int j=0;j<v.size();j++){
            if(s.count(v[j]^i) == 0){
                is=false;
                break;
            }
        }
        if(is){
            cout<<i<<endl;
            prt=true;
            break;
        }
     }
     if(!prt){
        cout<<-1<<endl;
     }
        
    }
    return 0;
}
