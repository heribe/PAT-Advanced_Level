#include <iostream>
#include <stdio.h>
#include <vector>
#include <cmath>
using namespace std;
bool judge(int n)
{
    int i;
    if(n<=1)
        return false;
    else
    {
        for(i=2;i<n;i++)
        {
            if(n%i==0)
                return false;
        }
        return true;
    }
}
int tran(int a,int b)
{
    vector<int> vec;
    int t,i,r=a,s,ou=0;
    int z,v;
    while(r)
    {
        t=r%b;
        r=r/b;
        vec.push_back(t);
    }
    s=vec.size();
    s--;
    for(i=0;s>=0;s--,i++)
    {
        z=pow(b,i);
        v=vec[s];
        ou=ou+v*z;
    }

    return ou;

}
int main()
{
    int a=0,b,t,n,i;
    vector<int> s,z;
    while(1)
    {
        cin>>a;
        if(a<0) break;
        cin>>b;
        if(b<0) break;
        s.push_back(a);
        z.push_back(b);
    }
    n=s.size();
    bool* j=new bool[n];
    for(i=0;i<n;i++)
        j[i]=judge(s[i])&&judge(tran(s[i],z[i]));
    for(i=0;i<n;i++)
    {
        if(j[i])
            cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    delete []j;
    return 0;
}