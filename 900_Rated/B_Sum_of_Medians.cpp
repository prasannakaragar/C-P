#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        long long n, k;
        cin >> n >> k;

        vector<long long> v(n * k);
        for(auto &x : v) cin >> x;

        long long step = (n / 2) + 1;
        long long idx = n * k - step;

        long long sum = 0;

        for(int i = 0; i < k; i++){
            sum += v[idx];
            idx -= step;
        }

        cout << sum << endl;
    }

    return 0;
}