#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;

        int c0 = count(s.begin(), s.end(), '0');
        int c1 = s.size() - c0;

        int used0 = 0, used1 = 0;
        int len = 0;

        for(int i = 0; i < s.size(); i++){
            if(s[i] == '0'){
                if(used1 < c1){
                    used1++;
                    len++;
                } else break;
            } else {
                if(used0 < c0){
                    used0++;
                    len++;
                } else break;
            }
        }

        cout << s.size() - len << "\n";
    }
}