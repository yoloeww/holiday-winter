#include <iostream>
using namespace std;
int main() {
  int m;
  int cmt = 0;
  cin >> m;
  for (int i = 2;i <= m;i ++) {
     int flag = 1;
     for(int j = 2;j < i;j ++) {
         if(i % j == 0){
              flag = 0;
              break;
        }
     }
     if(flag == 1)
     cmt ++;
  }
     cout << cmt ;
     return 0;
}
// 64 位输出请用 printf("%lld")
