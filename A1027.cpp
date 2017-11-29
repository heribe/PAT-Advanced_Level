#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
using namespace std;



int main() {
    int a,b,c,h,l;
    cin>>a>>b>>c;
    cout<<"#";
        h=a/13;
        l=a%13;
        if (h>9)
            cout<<char('A'+h-10);
        else cout<<h;
        if (l>9)
            cout<<char('A'+l-10);
        else cout<<l;

        h=b/13;
        l=b%13;
        if (h>9)
            cout<<char('A'+h-10);
        else cout<<h;
        if (l>9)
            cout<<char('A'+l-10);
        else cout<<l;

        h=c/13;
        l=c%13;
        if (h>9)
            cout<<char('A'+h-10);
        else cout<<h;
        if (l>9)
            cout<<char('A'+l-10);
        else cout<<l;

    
    return 0;
}