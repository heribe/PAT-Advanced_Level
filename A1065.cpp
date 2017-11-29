#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string *t=new string[n];
    long long a,b,c;
    for(int i=0;i<n;i++){
        cin>>a>>b>>c;
        if(a>0&&9223372036854775807-a<b)
            t[i]="true";
        else if(a<0&&-9223372036854775808-a>b)
            t[i]="false";
        else if(a+b>c)
            t[i]="true";
        else t[i]="false";
    }
    for(int i=0;i<n;i++)
        cout<<"Case #"<<i+1<<": "<<t[i]<<endl;

    delete []t;
    return 0;
}