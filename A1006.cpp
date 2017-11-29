#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
struct ID{
    string number;
    int inh,inm,ins ,outh,outm,outs;
};

bool minin(const ID &a,const ID &b)
{
    if (a.inh!=b.inh) return a.inh<b.inh;
    else if(a.inm!=b.inm) return a.inm<b.inm;
    else return a.ins<b.ins;
}

bool minout(const ID &a,const ID &b)
{
    if (a.outh!=b.outh) return a.outh<b.outh;
    else if(a.outm!=b.outm) return a.outm<b.outm;
    else return a.outs<b.outs;
}

int main() {
    ID min,max;
    int n;
    cin>>n;
    ID *id=new ID[n];
    for(int i=0;i<n;i++)
    {
        cin>>id[i].number;
        scanf("%d:%d:%d %d:%d:%d",&id[i].inh,&id[i].inm,&id[i].ins,&id[i].outh,&id[i].outm,&id[i].outs);
    }
    min=max=id[0];
    for(int i=1;i<n;i++)
    {
        if(minin(id[i], min))
            min=id[i];
        if(minout(max, id[i]))
            max=id[i];
    }
//    if(minin(id[0], id[1]))
//        min=id[0];
//    else min=id[1];
//    if(minin(id[2], min))
//        min=id[2];
//    if (minout(id[0], id[1]))
//        max=id[1];
//    else max=id[0];
//    if (minout(max, id[2]))
//        max=id[2];
    cout<<min.number<<" "<<max.number;
    
    delete [] id;
    return 0;
}