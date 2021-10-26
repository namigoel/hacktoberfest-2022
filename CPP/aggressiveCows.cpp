#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n, c;
        cin >> n >> c;
        vector<int> position(n);
        for (int i = 0; i < n; i++) {
            cin >> position[i];
        }
        sort(position.begin(), position.end());
        int low = 0, high = position[n - 1] - position[0];
        int mid;
        while (low <= high) {
            mid = (low + high) / 2;
            int countCows = 1, prev = 0;
            for (int i = 0; i < n; i++) {
                if(position[i]-position[prev]>=mid){
                    prev = i;
                    countCows++;
                }
                if(countCows==c)
                    break;
            }
            if(countCows==c)
                low = mid + 1;
            else
                high = mid - 1;
        }
        cout << mid << endl;
    }
    return 0;
}
