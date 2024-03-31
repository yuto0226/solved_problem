//Zero Judge a054
#include <iostream>
using namespace std;

int main (int argc, char const *argv[]) {
  int city_code[28] = {10, 11, 12, 13, 14, 15, 16, 17, 34, 18, 19, 20, 21, 22, 35, 23, 24, 25, 26, 27, 28, 29, 32, 30, 31, 33};
  int city_code_sum[28] = {1, 10, 19, 28, 37, 46, 55, 64, 39, 73, 82, 2, 11, 20, 48, 29, 38, 47, 56, 65, 74, 83, 21, 3, 12, 30};
  int end_8 = 0;
  int end_8_digits = end_8 % 10;
  int sum = 0;
  cin>>end_8;

  //後八碼加總
  for (int i = 1; i <= 8; i++) {
    //cout<<"end_8= "<<end_8;
    sum = sum + (end_8_digits) * i;
    cout<<sum<<endl;
    cout<<" sum+= "<<(end_8 % 10)<<"*"<<i<<"="<<(end_8 % 10) * i<<endl;
    end_8 /= 10;
  }
  cout<<sum<<endl;

  int check_code = 0;
  for (int i = 0; i < 26; i++) {
    sum += city_code_sum[i];  //補齊程式代碼的數
    check_code = 10 - (sum % 10);  //計算檢查碼
    cout<<"city_code_sum= "<<city_code_sum[i]<<" sum= "<<sum<<" check_code= "<<check_code<<endl;
    if ( check_code % 10 == 0) {
      cout<<(char)(i+64);
    } //未完成
  }

  return 0;
}
