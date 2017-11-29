#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
struct pol{
    int zhi;
    float xi;
};

int main()
{
    int n1,n2,k=0;
    cin>>n1;
    pol *a=new pol[n1];
    for(int i=0;i<n1;i++)
        cin>>a[i].zhi>>a[i].xi;
    cin>>n2;
    pol *b=new pol[n2];
    for(int i=0;i<n2;i++)
        cin>>b[i].zhi>>b[i].xi;
    pol *c=new pol[n1+n2];
    for (int i=0,j=0;i<n1||j<n2;)
    {
        if(i>=n1)
        {
            c[k]=b[j];
            j++;
        }
        else if(j>=n2)
        {
            c[k]=a[i];
            i++;
        }
        else if(a[i].zhi>b[j].zhi)
        {
            c[k]=a[i];
            i++;
        }
        else if(a[i].zhi<b[j].zhi)
        {
            c[k]=b[j];
            j++;
        }
        else if(a[i].zhi==b[j].zhi)
        {
            c[k]=a[i];
            c[k].xi=c[k].xi+b[j].xi;
            i++;j++;
        }
        if(c[k].xi!=0)
            k++;
    }
    cout<<k;
    for(int i=0;i<k;i++)
    {
        if(c[i].xi!=0)
            printf(" %d %.1f",c[i].zhi,c[i].xi);
 //       cout<<c[i].zhi<<" "<<c[i].xi<<" ";
    }
    return 0;
}