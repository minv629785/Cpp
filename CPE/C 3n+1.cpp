#include <bits/stdc++.h>
using namespace std;

// 計算 cycle length
int cycle_length(int n) {
    int count = 1; // 記得包含 n 本身
    while (n != 1) {
        if (n % 2 == 0)
            n /= 2;
        else
            n = 3 * n + 1;
        count++;
    }
    return count;
}

int main() {
    int i, j;
    while (cin >> i >> j) { // 讀取多筆輸入
        int a = i, b = j;
        if (a > b) swap(a, b); // 確保 a <= b
        
        int max_cycle = 0;
        for (int k = a; k <= b; k++) {
            int length = cycle_length(k);
            if (length > max_cycle)
                max_cycle = length;
        }

        cout << i << " " << j << " " << max_cycle << endl; // 輸出原始輸入的 i, j 以及最大 cycle length
    }
    return 0;
}
