#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;


int main() {
    float al[3][3],m;
    int t[3];
    for (int i=0; i<3; i++) {
        cin>>al[i][0]>>al[i][1]>>al[i][2];
        if(al[i][0]>al[i][1])
            t[i]=0;
        else t[i]=1;
        if(al[i][t[i]]<al[i][2])
           t[i]=2;
    }
    for(int i=0;i<3;i++)
    {
        switch (t[i]) {
            case 0:
                cout<<"W"<<" ";
                break;
            case 1:
                cout<<"T"<<" ";
                break;
            case 2:
                cout<<"L"<<" ";
                break;
            default:
                break;
        }
    }
    m=((al[0][t[0]]*al[1][t[1]]*al[2][t[2]]*0.65-1)*2);
    printf("%.2f",m);
    return 0;
}