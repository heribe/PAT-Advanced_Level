#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
using namespace std;


int main() {
    int n1,n2,t;
    string s;
    cin>>s;
    t=s.size();
    for (n1=1,n2=t-2*n1; n1+1<=n2&&n2>=3&&n2<=t; ) {
        n1++;
        n2=t-2*n1;
    }
    n1--;
    n2=t-2*n1;
    for (int i=0; i<n1; i++) {
        cout<<s[i];
        for (int j=0;j<n2-2; j++) {
            cout<<" ";
        }
        cout<<s[t-1-i]<<endl;
    }
    for (int i=n1; i<n1+n2; i++) {
        cout<<s[i];
    }
    return 0;
}