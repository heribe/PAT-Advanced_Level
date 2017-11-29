#include <iostream>
#include <string>
#include <algorithm>
//#include <cmath>
using namespace std;

struct one{
    string id;
    int g[4];
    int m[4];
};

bool cmpa(one a,one b){
    return a.g[0]>b.g[0];
}
bool cmpc(one a,one b){
    return a.g[1]>b.g[1];
}
bool cmpm(one a,one b){
    return a.g[2]>b.g[2];
}
bool cmpe(one a,one b){
    return a.g[3]>b.g[3];
}

char c[4]={'A','C','M','E'};

int main() {
    int n,m,t,r;
    cin>>n>>m;
    one *a=new one[n];
    for (int i=0; i<n; i++) {
        cin>>a[i].id>>a[i].g[1]>>a[i].g[2]>>a[i].g[3];
        a[i].g[0]=a[i].g[3]+a[i].g[2]+a[i].g[1];
    }
    string *du=new string[m];
    for (int i=0; i<m; i++) {
        cin>>du[i];
    }
    //
    sort(a, a+n, cmpa);
    a[0].m[0]=1;
    for (int i=1; i<n; i++) {
        if (a[i].g[0]==a[i-1].g[0])
            a[i].m[0]=a[i-1].m[0];
        else a[i].m[0]=i+1;
    }
    sort(a, a+n, cmpc);
    a[0].m[1]=1;
    for (int i=1; i<n; i++) {
        if (a[i].g[1]==a[i-1].g[1])
            a[i].m[1]=a[i-1].m[1];
        else a[i].m[1]=i+1;
    }
    sort(a, a+n, cmpm);
    a[0].m[2]=1;
    for (int i=1; i<n; i++) {
        if (a[i].g[2]==a[i-1].g[2])
            a[i].m[2]=a[i-1].m[2];
        else a[i].m[2]=i+1;
    }
    sort(a, a+n, cmpe);
    a[0].m[3]=1;
    for (int i=1; i<n; i++) {
        if (a[i].g[3]==a[i-1].g[3])
            a[i].m[3]=a[i-1].m[3];
        else a[i].m[3]=i+1;
    }
    //
    for (int i=0; i<m; i++) {
        r=0;
        for (int j=0; j<n; j++) {
            if (du[i]==a[j].id) {
                t=0;
                for (int p=1; p<4; p++) {
                    if (a[j].m[p]<a[j].m[t])
                        t=p;
                }
                r=1;
                cout<<a[j].m[t]<<" "<<c[t]<<endl;
                break;
            }
        }
        if (r==0) cout<<"N/A"<<endl;
    }
    
    delete []du;
    delete []a;
    return 0;
}