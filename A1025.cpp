#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
//#include <cmath>
using namespace std;

struct one{
    int grade,rank,rank0,loc;
    string num;
};

bool cmp(one a,one b){
    if (a.grade!=b.grade) return a.grade>b.grade;
    else return a.num<b.num;
}

int main() {
    int n,sum=0;
    cin>>n;
    int *k=new int[n];
    vector<one> *a=new vector<one>[n];
    vector<one> b;
    one p;
    for (int i=0; i<n; i++) {
        cin>>k[i];
        sum+=k[i];
        for (int j=0; j<k[i]; j++) {
            cin>>p.num>>p.grade;
            p.loc=i+1;
            a[i].push_back(p);
        }
        sort(a[i].begin(),a[i].end(),cmp);
        for (int j=0; j<k[i]; j++) {
            if (j==0) a[i][0].rank=1;
            else{
                if (a[i][j].grade==a[i][j-1].grade) a[i][j].rank=a[i][j-1].rank;
                else a[i][j].rank=j+1;
            }
        }
        b.insert(b.end(),a[i].begin(),a[i].end());
    }
    sort(b.begin(),b.end(),cmp);
    cout<<sum<<endl;
    for (int i=0; i<sum; i++) {
        if (i==0) b[0].rank0=1;
        else{
            if (b[i].grade==b[i-1].grade) b[i].rank0=b[i-1].rank0;
            else b[i].rank0=i+1;
        }
        cout<<b[i].num<<" "<<b[i].rank0<<" "<<b[i].loc<<" "<<b[i].rank<<endl;
    }
    
    
    delete []k;
    delete []a;
    return 0;
}