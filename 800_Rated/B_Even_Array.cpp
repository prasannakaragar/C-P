#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       vector<int>vec(n,0);
       int evecount=0;
       int oddcount=0;
       for(int i=0;i<n;i++){
          cin>>vec[i];
          if(i%2 != vec[i]%2){
              if(i%2==0){
                evecount++;
              }else{
                oddcount++;
              }
          }
       }

        if(evecount==oddcount){
            cout<<evecount<<"\n";
        }else{
            cout<<-1<<"\n";
        }

    }
    
    return 0;
}