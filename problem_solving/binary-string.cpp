#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of binary strings: ";
    cin >> n;

    vector<string> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    string ans = "";

    for (int i = 0; i < n; i++) {
        if (nums[i][i] == '0')
            ans += '1';
        else
            ans += '0';
    }
    
    cout << "the binary string that does not belong to the set is: " << ans << endl;

    return 0;
}