#include <bits/stdc++.h>
using namespace std;

void print1(int n){
      for(int i=0;i<n;i++){
            for(char ch='A';ch<='A'+(n-i-1);ch++){
                  cout << ch;
            }
            cout << "\n";
      }
}

int main(){
      int t;
      cin >> t;
      for(int i=0;i<t;i++){
            int n;
            cin >> n;
            print1(n);
      }
      return 0;
}