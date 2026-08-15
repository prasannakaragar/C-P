#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

void solve() {

    int n;
    cin>>n;
    vi v(n,0);
    for(int &x:v) cin>>x;
    if(v[0] == -1 && v[n-1] == -1){
        v[0]=0;
        v[n-1]=0;
    }else if(v[0] == -1){
        v[0] = v[n-1];
    }else if(v[n-1] == -1){
        v[n-1] = v[0];
    }
    for(int i=1;i<n-1;i++){
        if(v[i] == -1)
            v[i]=0;
    }
    cout<<abs(v[0]-v[n-1])<<endl;
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}