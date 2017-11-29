#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

int main()
{
    int N,M,sum=0;
    scanf("%d",&N);
    //cin>>N;
    int* D=new int[N];
    int* dis=new int[N+1]();
    for(int i=0;i<N;i++)
        {
            scanf("%d",&D[i]);
//            cin>>D[i];
            sum+=D[i];
            dis[i+1]=D[i]+dis[i];
        }
    scanf("%d",&M);
//    cin>>M;
    int(* D2)[2]=new int[M][2];
    int* D1=new int[M]();
    for(int i=0;i<M;i++)
    {
        scanf("%d",&D2[i][0]);
        scanf("%d",&D2[i][1]);
//        cin>>D2[i][0]>>D2[i][1];
    }


    for(int i=0;i<M;i++)
    {
        if(D2[i][0]>D2[i][1])
            swap(D2[i][0],D2[i][1]);
        D1[i]=dis[D2[i][1]-1]-dis[D2[i][0]-1];
        if(D1[i]>sum/2)
            D1[i]=sum-D1[i];
 //       cout<<D1[i]<<endl;
        printf("%d\n",D1[i]);
    }

    delete []D;
    delete []D2;
    return 0;
}