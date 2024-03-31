//GreenJudge b005
#include <iostream>

using namespace std;


int number[100000002]={0};
int numl[21]={0};

int main(){
    int N=0;
    while(cin>>N){
        number[100000002]={0};
        numl[21]={0};
        for(int i=0;i<N;i++) {
        int n;
        cin>>n;
        numl[N]=n;
        number[n]+=1;
    }
    int top=numl[0];
    for (int i=0;i<N;i++) {
        int n=numl[N];
        if(number[top]<number[n]){
            top=n;
        }
    }

    cout<<top<<" "<<number[top]<<endl;;
    }
    
    return 0;
}