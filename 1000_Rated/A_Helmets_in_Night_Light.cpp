#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, p;
        cin >> n >> p;

        vector<int> a(n), b(n);

        for (auto &x : a) cin >> x;
        for (auto &x : b) cin >> x;
        
        vector<pair<int,int>> vec;

        for (int i = 0; i < n; i++) {
            vec.push_back({a[i], b[i]});
        }

        sort(vec.begin(), vec.end(), [](auto &x, auto &y) {
            return x.second < y.second;
        });

        long long ans = p;  
        int informed = 1;    

        for (int i = 0; i < n && informed < n; i++) {

            if (vec[i].second >= p)
                break;

            while (vec[i].first > 0 && informed < n) {
                ans += vec[i].second;
                vec[i].first--;
                informed++;
            }
        }

        ans += 1LL * (n - informed) * p;

        cout << ans << endl;
    }

    return 0;
}