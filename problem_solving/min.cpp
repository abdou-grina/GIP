#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of integers: ";
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> exist(n + 1, 0);

    
    for (int i = 0; i < n; i++) {
        int x = nums[i];

        if (x >= 1 && x <= n) {
            exist[x] = 1;
        }
    }

    for (int i = 1; i <= n; i++) {
        if (exist[i] == 0) {
            cout << i << endl;
            return 0;
        }
    }

    cout << n + 1 << endl;

    return 0;
}