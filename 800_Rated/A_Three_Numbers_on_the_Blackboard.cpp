#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

void solve() {
    vi v(3,0);
    for(int &x:v) cin>>x;
    sort(v.begin(),v.end());
    if(v[0]+v[1]>v[2]){
        cout<<v[2]-v[0]<<endl;
    }else{
        cout<<v[1]<<endl;
    }
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