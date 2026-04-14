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

        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        bool same = true;
        for(int i = 1; i < n; i++){
            if(a[i] != a[0]){
                same = false;
                break;
            }
        }
        if(same){
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";
        
        
        cout << a[0] << " ";
        for(int i = n-1; i >= 1; i--){
            cout << a[i] << " ";
        }
        cout << "\n";
    }
}