#include <iostream>
#include <algorithm>

using namespace std;
struct card{
    int nu;
    char ch;
};

int main()
{
    card ca[54],ca2[54];
    for(int i=0;i<13;i++)
    {
        ca[i].ch='S';
        ca[i].nu=i+1;
    }
    for(int i=0;i<13;i++)
    {
        ca[i+13].ch='H';
        ca[i+13].nu=i+1;
    }
    for(int i=0;i<13;i++)
    {
        ca[i+26].ch='C';
        ca[i+26].nu=i+1;
    }
    for(int i=0;i<13;i++)
    {
        ca[i+39].ch='D';
        ca[i+39].nu=i+1;
    }
    ca[52].ch=ca[53].ch='J';
    ca[52].nu=1;ca[53].nu=2;

    int N,t,order[54];
    cin>>N;
    for(int i=0;i<54;i++)
        cin>>order[i];
    if(N==1)
    {
        for(int i=0;i<54;i++)
            ca2[order[i]-1]=ca[i];
    }
    else
    {
        t=N/2;
        for(int j=0;j<t;j++)
            {
                for(int i=0;i<54;i++)
                    ca2[order[i]-1]=ca[i];
                for(int i=0;i<54;i++)
                    ca[order[i]-1]=ca2[i];
            }
        if(N%2!=0)
            for(int i=0;i<54;i++)
                ca2[order[i]-1]=ca[i];
        else {
            for(int i=0;i<53;i++)
                cout<<ca[i].ch<<ca[i].nu<<" ";
            cout<<ca[53].ch<<ca[53].nu;
            return 0;
        }
    }
    for(int i=0;i<53;i++)
        cout<<ca2[i].ch<<ca2[i].nu<<" ";
    cout<<ca2[53].ch<<ca2[53].nu;
    return 0;
}