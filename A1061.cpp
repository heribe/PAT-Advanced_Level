#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
using namespace std;



int main() {
    string a1,a2,b1,b2;
    string day[10]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
    char t1,t2;
    int s1,s2,s4,s3,t=0,t3=-1;
    cin>>a1>>a2>>b1>>b2;
    s1=a1.size();
    s2=a2.size();
    s3=b1.size();
    s4=b2.size();
    if(s1>s2) s1=s2;
    if(s3>s4) s3=s4;
    for (int i=0; i<s1; i++) {
        if (a1[i]>='A'&&a1[i]<='G'&&a1[i]==a2[i]) {
            if (t==0) {
                t1=a1[i];
                t=1;
                continue;
            }
            else {
                t2=a1[i];
         //       t=0;
                break;
            }
        }
        if ((a1[i]>='A'&&a1[i]<='N')||(a1[i]>='0'&&a1[i]<='9')) {
            if (a1[i]==a2[i]&&t==1) {
                t2=a1[i];
          //      t=0;
                break;
            }
        }
    }
    for (int i=0; i<s3; i++) {
        if (b1[i]>='A'&&b1[i]<='z') {
            if (b1[i]==b2[i]) {
                t3=i;
                break;
            }
        }
    }
    
    cout<<day[t1-'A']<<" ";
    if (t2>='0'&&t2<='9') printf("0%d",t2-'0');
    else printf("%d",t2-'A'+10);
    if(t3<10)
        printf(":0%d",t3);
    else printf(":%d",t3);
    return 0;
}