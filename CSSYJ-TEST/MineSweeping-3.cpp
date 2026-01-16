#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    vector<vector<char>> grid(n, vector<char>(m));
    int idx = 0;
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j)
            grid[i][j] = s[idx++];

    int dx[] = {-1,-1,-1,0,0,1,1,1};
    int dy[] = {-1,0,1,-1,1,-1,0,1};

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            if(grid[i][j] == '*') {
                cout << '*';
            } else {
                int cnt = 0;
                for(int d = 0; d < 8; ++d) {
                    int ni = i + dx[d], nj = j + dy[d];
                    if(ni >= 0 && ni < n && nj >= 0 && nj < m && grid[ni][nj] == '*')
                        cnt++;
                }
                cout << cnt;
            }
        }
        cout << endl;
    }
    return 0;
}