#include<bits/stdc++.h>
using namespace std;
#define endl '\n'   

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string curr;
        cin >> curr;

        int cnt_dot = 0;
        bool found = false;

        for(int i = 0; i < n; i++){
            if(curr[i] == '.') cnt_dot++;

            if((i + 1 < n && curr[i] == '.' && curr[i+1] == '.') && (i-1>=0 && curr[i-1] == '.')){
                found = true;
            }
        }

        if(found) cout << 2 << endl;
        else cout << cnt_dot << endl;
    }

    
    

    return 0;
}