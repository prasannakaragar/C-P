#include<bits/stdc++.h>
using namespace std;
#define endl '\n'  

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    double sum = 0;
    for(int i = 0;i<n;i++){
        int k;
        cin>>k;
        sum = sum + (k/(double)100);
    }
    cout<<fixed << setprecision(12)<<(sum/(double)n)*100;
    return 0;
}
