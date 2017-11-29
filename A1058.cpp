#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
using namespace std;



int main() {
    int g1,g2,s1,s2,k1,k2,g,s,k;
    scanf("%d.%d.%d %d.%d.%d",&g1,&s1,&k1,&g2,&s2,&k2);
    if (k1+k2>=29) {
        k=k1+k2-29;
        s1++;
    }
    else k=k1+k2;
    if (s1+s2>=17) {
        s=s1+s2-17;
        g1++;
    }
    else s=s1+s2;
    g=g1+g2;
    cout<<g<<"."<<s<<"."<<k;
    return 0;
}