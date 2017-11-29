#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int n,t=0;
    vector<int> g;
    cin>>n;
    string (*s)[2]=new string[n][2];
    for (int i=0; i<n; i++) {
        cin>>s[i][0]>>s[i][1];
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<s[i][1].size(); j++) {
            switch (s[i][1][j]) {
                case '1':
                    s[i][1][j]='@';
                    t=1;
                    break;
                case '0':
                    s[i][1][j]='%';
                    t=1;
                    break;
                case 'l':
                    s[i][1][j]='L';
                    t=1;
                    break;
                case 'O':
                    s[i][1][j]='o';
                    t=1;
                    break;
                default:
                    break;
            }
        }
        if (t==1) {
            g.push_back(i);
            t=0;
        }
    }
    if (g.size()==0){
        if(n>1)
            cout<<"There are "<<n<<" accounts and no account is modified";
        else
            cout<<"There is "<<n<<" account and no account is modified";
    }
    else{
        cout<<g.size()<<endl;
        for (int i=0; i<g.size(); i++) {
            cout<<s[g[i]][0]<<" "<<s[g[i]][1]<<endl;
        }
    }
    
    return 0;
}