/* Minimum Window Substring*/
#include <bits/stdc++.h>
using namespace std;

string fun(string s, string p) {
    int n = s.length(), m = p.length(), count = 0, start = 0;
    int minln = INT_MAX, startind = -1;
    vector<int> v1(256, 0), v2(256, 0);

    // Frequency array for the characters in pattern
    for (int i = 0; i < m; ++i) {
        v2[p[i]]++;
    }

    for (int i = 0; i < n; ++i) {
        v1[s[i]]++;

        // Count valid matches
        if (v1[s[i]] <= v2[s[i]]) {
            count++;
        }

        // When we have all characters of the pattern in the current window
        if (count == m) {
            // Shrink the window from the left
            while (v1[s[start]] > v2[s[start]] || v2[s[start]] == 0) {
                if (v1[s[start]] > v2[s[start]]) {
                    v1[s[start]]--;
                }
                start++;
            }

            // Update the minimum window length
            int len = i - start + 1;
            if (len < minln) {
                minln = len;
                startind = start;
            }
        }
    }

    if (startind == -1) {
        return "-1"; // No valid window found
    }
    return s.substr(startind, minln);
}

int main() {
    string s1 = "ADOBECODEBANC", s2 = "ABC";
    cout << fun(s1, s2);
    return 0;
}

