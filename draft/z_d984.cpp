//ZeroJudge 編號
#include <bits/stdc++.h>

using namespace std;

int main(){
    long int a=0,b=0,c=0;

    while(cin>>a>>b>>c){
        if(a>b && a>c){     //a最大
            if(a>b+c) cout<<"A\n";
            else if(b>c) cout<<"B\n";
            else cout<<"C\n";
        }else if(b>a && b>c){     //b最大
            if(b>a+c) cout<<"B\n";
            else if(a>c) cout<<"A\n";
            else cout<<"C\n";
        }else if(c>a && c>b){     //c最大
            if(c>a+b) cout<<"C\n";
            else if(a>b) cout<<"A\n";
            else cout<<"B\n";
        }
    }
    
    return 0;
}