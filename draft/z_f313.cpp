#include <iostream>
using std::cin;
using std::cout;

#define N 52

int map[N][N]={-1};
int temp_map[N][N]={0};
int R,C,k,m;

void print_map(){
  for(int i=0;i<R;i++){
    for(int j=0;j<C;j++) cout<<map[i+1][j+1]<<" ";
    cout<<"\n";
  }
}

int main(){
  cin>>R>>C>>k>>m;
  for(int i=0;i<R;i++){
    for(int j=0;j<C;j++) cin>>map[i+1][j+1];
  }
  for(int a=0;a<m;a++){
    for(int i=0;i<R;i++){
      for(int j=0;j<C;j++){
        // 下
        if(map[i+2][j+1]!=-1){
          temp_map[i+2][j+1]+=map[i+1][j+1]/k;
          temp_map[i+1][j+1]-=map[i+1][j+1]/k;
        }
        // 上
        if(map[i][j+1]!=-1){
          temp_map[i][j+1]+=map[i+1][j+1]/k;
          temp_map[i+1][j+1]-=map[i+1][j+1]/k;
        }
        // 左
        if(map[i+1][j]!=-1){
          temp_map[i+1][j]+=map[i+1][j+1]/k;
          temp_map[i+1][j+1]-=map[i+1][j+1]/k;
        } 
        // 右 
        if(map[i+1][j+2]!=-1){ 
          temp_map[i+1][j+2]+=map[i+1][j+1]/k;
          temp_map[i+1][j+1]-=map[i+1][j+1]/k; 
        } 
      } 
    }
  }
  for(int i=0;i<R;i++){ 
    for(int j=0;j<C;j++) map[i+1][j+1]+=temp_map[i+1][j+1];
  }
  print_map();

  return 0;
}
