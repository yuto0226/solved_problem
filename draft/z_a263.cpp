//ZeroJudge a263
#include <bits/stdc++.h>

using namespace std;

int year1,month1,day1;
int year2,month2,day2;
int ans=0;

int normal_months[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
int lunar_months[13] = {0,31,29,31,30,31,30,31,31,30,31,30,31};

int lunar(int);
int sum(int, int, int);

int lunar(int y){
    return ( (y%4==0)&&(y%100!=0) || (y%400==0) );
}

int sum(int y,int m,int d){
    int result=0;
    //year
    for(int i=1;i<=y;i++){
        if(lunar(i)){
            result+=366;
        }else{
            result+=365;
        }
    }

    //month
    for (int i=1;i<m;i++){
        if(lunar(y)){
            result+=lunar_months[i];
        }else{
            result+=normal_months[i];
        }
    }

    //day
    result+=d;

    return result;
}

int main(){
    while(cin>>year1>>month1>>day1){
        cin>>year2>>month2>>day2;
        ans=sum(year1,month1,day1)-sum(year2,month2,day2);
        ans=abs(ans);
        cout<<ans<<endl;
    }
    return 0;
}