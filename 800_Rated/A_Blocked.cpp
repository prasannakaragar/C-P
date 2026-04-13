#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
     unordered_map<int,int>m;
     bool dub=false;
     vector<int>vec(n,0);
     for(int i=0;i<n;i++){
        cin>>vec[i];
        m[vec[i]]++;
        if(m[vec[i]]>1){
            dub=true;
        }
     }
     if(dub){
        cout<<-1<<"\n";
        continue;
     }
     sort(vec.begin(),vec.end(),greater<int>());
     for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
     }
     cout<<"\n";
    }
    
    return 0;
}