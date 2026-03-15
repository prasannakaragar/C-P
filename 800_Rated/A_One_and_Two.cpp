#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t-->0){
        int n;
        cin>>n;
        vector<int>vec(n,0);
        int total=0;
        for(int i=0;i<n;i++){
            cin>>vec[i];
            if(vec[i]==2){
                total++;
            }
        }
        if(total%2){
            cout<<-1<<endl;
            continue;
        }
        int need = total/2;
        int count=0;
        for(int i=0;i<n-1;i++){
            if(vec[i]==2){
            count++;
            }
            if(count==need){
                cout<<i+1<<"\n";
                break;
            }
        }
    }

    return 0;
    
}