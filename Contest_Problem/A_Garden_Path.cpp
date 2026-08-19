#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

void solve() {
    string curr;
    cin>>curr;
    int n;
    cin>>n;
    int cpy =n;
    vector<pair<int,int>>v;
    while(cpy--){
        int a,b;
        cin>>a>>b;
        a-=1,b-=1;
        v.push_back(make_pair(a,b));
    }
    vector<int>vec(curr.size(),0);
    int cnt = 0;
    for(int i=1;i<curr.size();i++){
        if(curr[i] == curr[i-1]){
            cnt++;
        }
        vec[i] =cnt;
    }   
    for(int i=0;i<v.size();i++){
        int  a = v[i].first;
        int  b = v[i].second;
        int now = 0;
        if(a==0){
            now = vec[b];
        }else{
            now = vec[b]-vec[a];
        }
        cout<<now<<endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);




    solve();


    return 0;
}