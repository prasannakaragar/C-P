#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<int> p(n);
        for(int i = 0; i < n; i++) cin >> p[i];

        int count = 0;

        for(int i = 0; i < n - 1; i++){
            int diff = abs(p[i] - p[i+1]);
            int g = __gcd(p[i], p[i+1]);

            if(diff == g) count++;
        }

        cout << count << "\n";
    }

    return 0;
}