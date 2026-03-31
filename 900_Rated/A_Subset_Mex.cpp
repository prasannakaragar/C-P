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
        vector<int>vec(n,0);
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }
        set<int>vec1;
        set<int>vec2;
        sort(vec.begin(),vec.end());
        vec1.insert(vec[0]);
        for(int i=1;i<n;i++){
            if(vec[i]==vec[i-1] || vec[i]!=vec[i-1]+1){
                vec2.insert(vec[i]);
            }else{
                vec1.insert(vec[i]);
            }
        }
        bool is=true;
        int n1=0;
        for(int i=0;i<vec1.size();i++){
            if(!vec1.count(i)){
                n1=i;
                is=false;
                break;
            }
        }
        if(is){
            n1=vec1.size();
        }
        is=true;
        
        for(int i=0;i<vec2.size();i++){
            if(!vec2.count(i)){
                cout<<n1+i<<"\n";
                is=false;
                break;
            }
        }
        if(is){
            cout<<n1+vec2.size()<<"\n";
        }
        
    }
    
    return 0;
}