//ZeroJudge d532
#include <bits/stdc++.h>

using namespace std;

int lunar(int y){
    return ( (y%4==0)&&(y%100!=0) || (y%400==0) );
}

int main(){
    int a,b;
    int count=0;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(lunar(i)){
            count+=1;
        }
    }
    cout<<count;
    
    return 0;
}