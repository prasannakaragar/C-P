#include<bits/stdc++.h>
using namespace std;
#define endl '\n'   

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        unordered_map<int,int>m;
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int k;
            cin>>k;
            m[k]++;
        }
    int max_freq = 0;
    int min_freq=INT_MAX;
        for(auto &a : m){
            max_freq = max(max_freq, a.second);
            min_freq=min(min_freq,a.second);
        }
        if(m.size() ==1){
            cout<<"Yes"<<endl;
            continue;
        }
        if(m.size()>2){
            cout<<"No"<<endl;
            continue;
        }
        bool is=true;
        if(n%2 == 0){
            if(max_freq == min_freq){
                cout<<"Yes"<<endl;
                is=false;
                continue;
            }
        }else{
            if(max_freq == (n+1)/2   && min_freq == n/2){
                cout<<"Yes"<<endl;
                is=false;
                continue;
            }
        }
        if(is){
            cout<<"No"<<endl;
        }
    }
    
    return 0;
}