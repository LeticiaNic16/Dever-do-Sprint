#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<double>n;
    vector<char>c;
    bool b=false;
    char x;
    double y, atual;
    cout<<"insira a expressão: ";
    while(!b){
        cin>>y>>x;
        n.push_back(y);
        if(x=='=') b=true;
        else c.push_back(x);
    }
    atual=n[0];
    for(long long i=0; i<c.size(); i++){
        if(c[i]=='+'){
            atual+=n[i+1];
        }
        else if (c[i]=='/'){
            atual=atual/n[i+1];
        }
        else if (c[i]=='-'){
            atual=atual-n[i+1];
        }
        else if (c[i]=='*'){
            atual=atual*n[i+1];
        }
    }
    cout<<"sua resposta é "<<atual;
}