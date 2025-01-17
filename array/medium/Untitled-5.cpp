//Trapping Rain Water
#include<bits/stdc++.h>
using namespace std;
  
int fun(vector<int> height){
   int left = 0;
        int right = height.size() - 1;
        int leftMax = height[left];
        int rightMax = height[right];
        int water = 0;

        while (left < right) {
            if (leftMax < rightMax) {
                left++;
                leftMax = max(leftMax, height[left]);
                water += leftMax - height[left];
            } else {
                right--;
                rightMax = max(rightMax, height[right]);
                water += rightMax - height[right];
            }
        }

        return water;
}
int main(){
    vector<int> v{1,8,6,2,5,4,8,3,7};
    cout<<fun(v);
}