#include<iostream>
using namespace std;
int main() {
    int m;
    int cmd = 0;
    cin >> m;
    for(int i = 0;i <= m ;i ++) {
        if(i >= 0 && i <= 9 && (i * i)% 10== i)
        cmd ++;
        else if(i >= 10 && i <= 99 && (i * i) % 100 == i)
        cmd ++;
        else if(i >= 100 && i <= 999 && (i * i) % 1000 == i)
        cmd++;
        else if(i >= 1000 && i <= 9999 && (i * i) % 10000 == i)
        cmd++;
        else if(i == 10000 &&(i * i) % 10000 == i)
        cmd++;
    }
    cout << cmd;
    return 0;
}
