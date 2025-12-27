#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    while (n >= 10) { // 不是一位数时循环
        int sum = 0;
        // 拆分各位并累加
        for (int temp = n; temp > 0; temp /= 10) {
            sum += temp % 10;
        }
        n = sum; // 更新为各位和，继续处理
    }
    
    cout << n << endl; // 输出数根
    return 0;
}