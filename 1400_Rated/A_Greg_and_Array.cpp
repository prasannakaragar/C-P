#include<bits/stdc++.h>
using namespace std;
#define endl '\n'   

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m,k;
    cin>>n>>m>>k;

    vector<long long> v(n);
    for(auto &x:v) cin>>x;

    vector<vector<int>> vec(m, vector<int>(3));
    for(int i=0;i<m;i++){
        cin>>vec[i][0]>>vec[i][1]>>vec[i][2];
        vec[i][0]--, vec[i][1]--;
    }

    vector<long long> pref(n,0);
    vector<long long> p(m,0);  

    while(k--){
        int x,y;
        cin>>x>>y;
        x--,y--;
        p[x]+=1;
        if(y+1 < m){   
            p[y+1]-=1;
        }
    }

    
    for(int i=1;i<m;i++){
        p[i]+=p[i-1];
    }

    
    for(int i=0;i<m;i++){   
        long long u = p[i];
        pref[vec[i][0]] += u * vec[i][2];
        if(vec[i][1]+1 < n){
            pref[vec[i][1]+1] -= u * vec[i][2];
        }
    }

    
    for(int i=1;i<n;i++){
        pref[i]+=pref[i-1];
    }

    for(int i=0;i<n;i++){
        cout<<v[i]+pref[i]<<" ";
    }

    cout<<endl;
    return 0;
}