#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
struct pol{
    int ex;
    float co;
};
int main() {
    int n1,n2,t=0,k=0;
    float c[2001]={0};
    cin>>n1;
    pol *a=new pol[n1];
    for (int i=0; i<n1; i++) {
        cin>>a[i].ex>>a[i].co;
    }
    cin>>n2;
    pol *b=new pol[n2];
    for (int i=0; i<n2; i++) {
        cin>>b[i].ex>>b[i].co;
    }

    for (int j=0; j<n2; j++) {
        for (int i=0; i<n1; i++) {
            t=a[i].ex+b[j].ex;
            if (c[t]==0) {
                k++;
            }
            c[t]+=a[i].co*b[j].co;
            if(c[t]==0)
                k--;
        }
    }
    cout<<k;
    for (int i=2000; i>=0; i--) {
        if (c[i]!=0)
            printf(" %d %.1f",i,c[i]);
    }
    
    return 0;
}