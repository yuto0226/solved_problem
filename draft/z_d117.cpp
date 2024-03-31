//ZeroJudge d117
#include <bits/stdc++.h>

using namespace std;

int isPrime(int);
int main(){
    string s;
    while(cin>>s){
        int sum =0;
        for(int i=0;i<s.size();i++){
            if(s[i]>='A'&&s[i]<='Z') sum+=s[i]-'A'+27;
            else if(s[i]>='a'&&s[i]<='z') sum+=s[i]-'a'+1;
        }
        cout<<sum<<endl;
        bool prime=isPrime(sum);
        if(prime){
            cout<<"It is a prime word.";
        }else{
            cout<<"It is not a prime word.";
        }
    }
    return 0;
}
//判斷質數
int isPrime(int num){
    for(int i=2;i<sqrt(num);i++){
        if(num%i==0) return 0;
        break;
    }
    return 1;
}