//3Sum       
#include <bits/stdc++.h> 
using namespace std; 
vector<vector<int>> fun(vector<int>& v) {
        vector<vector<int>> z;
        int n = v.size();
        sort(v.begin(), v.end());

        for (int i = 0; i < n - 2; ++i) {
            // Avoid processing duplicates for the first element
            if (i > 0 && v[i] == v[i - 1]) continue;

            int a = 0 - v[i];  // Target sum for the pair
            int s = i + 1, e = n - 1;

            while (s < e) {
                int sum = v[s] + v[e];
                if (sum == a) {
                    z.push_back({v[i], v[s], v[e]});

                    // Skip duplicates for the second element
                    while (s < e && v[s] == v[s + 1]) s++;
                    // Skip duplicates for the third element
                    while (s < e && v[e] == v[e - 1]) e--;

                    s++;
                    e--;
                } else if (sum < a) {
                    s++;
                } else {
                    e--;
                }
            }
        }

        return z;
    }
int main(){ 
	vector<int> v{-1,0,1,2,-1,-4};
	vector<vector<int>> y=fun(v);
    for(int i=0;i<y.size();++i){
        cout<<y[i][0]<<y[i][1]<<y[i][2]<<endl;
    }
} 