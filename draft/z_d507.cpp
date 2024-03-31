//ZeroJudge d507
#include <bits/stdc++.h>

using namespace std;

int main(){
    int input[4]={0};
    for(int i=0; i<3;i++){
        cin>>input[i];
    }
    sort(input,input+3);
    int a=input[0],
        b=input[1],
        c=input[2];
    int cosA=(b*b+c*c-a*a)/2*b*c;
    int cosB=(a*a+c*c-b*b)/2*a*c;
    int cosC=(a*a+b*b-c*c)/2*a*b;
    
    if (cosC==0) cout<<"right triangle";        //直角
    else if (cosC>0 && cosA>0 && cosB>0) cout<<"acute triangle";     //銳角
    else if (cosC<0 || cosA<0 || cosB<0) cout<<"obtuse triangle";    //鈍角
    
    
    return 0;
}