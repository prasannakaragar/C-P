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

        vector<long long> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        long long ops = 0;
        bool possible = true;

        for(int i = n - 2; i >= 0; i--){
            while(a[i] >= a[i + 1]){
                if(a[i] == 0){
                    possible = false;
                    break;
                }
                a[i] /= 2;
                ops++;
            }
            if(!possible) break;
        }

        if(possible) cout << ops << "\n";
        else cout << -1 << "\n";
    }

    return 0;
}