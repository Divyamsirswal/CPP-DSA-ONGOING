#include<bits/stdc++.h>
using namespace std;

int main(){
      int n;
      cin>>n;
      int a[n];
      for(int i=0;i<n;i++) cin>>a[i];
      int k=0;
      for(int j=1;j<n;j++){
            if(a[k]!=a[j]){
                  a[k+1]=a[j];
                  k++;
            }
      }
      cout<<k+1;
      return 0;
}