#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;

        vector<int> vec(n);
        for(int i = 0; i < n; i++){
            cin >> vec[i];
        }

        sort(vec.begin(), vec.end());

        int cnt = 0, ans = 0;

        for(int i = 0; i < n - 1; i++){
            if(vec[i+1] - vec[i] <= k){
                cnt++;
                ans = max(ans, cnt);
            } else {
                cnt = 0;
            }
        }

        cout << n - (ans + 1) << "\n";
    }

    return 0;
}