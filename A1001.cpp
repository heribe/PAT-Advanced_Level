#include <iostream>
#include <cstdio>
using namespace std;

char y[3]={'J','Q','K'};

int main() {
    int a,b;
    string s;
    cin>>a>>b;
    s=to_string(a+b);
    for (int i=0; i<s.length(); i++) {
        cout<<s[i];
        if (s[i]=='-') continue;
        if ((i+1)%3==s.size()%3&&i!=s.size()-1)
            cout<<',';
    }
    
    return 0;
}