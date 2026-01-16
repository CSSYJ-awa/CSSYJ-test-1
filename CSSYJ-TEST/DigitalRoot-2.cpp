#include <iostream>
#include <string>
using namespace std;

int main() {
    string n;
    cin >> n; // 输入正整数（以字符串接收，避免数值溢出）
    
    while (n.size() > 1) { // 不是一位数时循环
        int sum = 0;
        for (char c : n) { // 遍历每个字符，累加数字
            sum += c - '0';
        }
        n = to_string(sum); // 转换为字符串，继续处理
    }
    
    cout << n << endl; // 输出数根 awa
    return 0;
}