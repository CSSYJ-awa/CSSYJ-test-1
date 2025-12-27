#include <iostream>
using namespace std;

int main()
{
    int a1, a2;
    string b1, b2, b3;
    // 你可以改为从输入读取：cin >> a1 >> a2 >> b1;
    a1 = 3;
    a2 = 4;
    b1 = "aa*aa*aa*aa*"; // 长度应为 a1 * a2 (3*4=12)
    for (int c2 = 0; c2 < (int)b1.size(); c2++)
    {
        if (b1[c2] == '*')
            b3 += '*';
        else
            b3 += '0';
    }
    for (int c3 = 0; c3 < a1; c3++)
    {
        for (int c4 = 0; c4 < a2; c4++)
        {
            if (b1[c3 * a2 + c4] == '*')
            {
                // 对 8 个邻居计数（包括对角）
                for (int dr = -1; dr <= 1; dr++) {
                    for (int dc = -1; dc <= 1; dc++) {
                        if (dr == 0 && dc == 0) continue;
                        int nr = c3 + dr;
                        int nc = c4 + dc;
                        if (nr >= 0 && nr < a1 && nc >= 0 && nc < a2) {
                            int idx = nr * a2 + nc;
                            if (b3[idx] != '*') b3[idx]++;
                        }
                    }
                }
            }
        }
    }
    // 长度校验
    if (b1.size() != (size_t)(a1 * a2)) {
        cerr << "Error: input length (" << b1.size() << ") != rows*cols (" << (a1*a2) << ")\n";
        return 1;
    }
    for (int c3 = 0; c3 < a1; c3++)
    {
        for (int c4 = 0; c4 < a2; c4++)
        {
            cout << b3[c3 * a2 + c4];
        }
        cout << endl;
    }
}