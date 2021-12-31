#include<bits/stdc++.h>
using namespace std;

int largestRectangleArea(vector<int>& heights) {
    int n = heights.size();
    int area = 0;
    for(int i =0 ; i<n ; i++){
        int limiting_height = heights[i];
        for(int j = i ; j<n ; j++){
            limiting_height = min(limiting_height , heights[j]);
            int curr_area = (j - i +1)*limiting_height;
            area = max(area , curr_area);
        }
    }
    return area;
}

int main(){
    vector<int> heights = {2,1,5,6,2,3};
    cout<<largestRectangleArea(heights);
    return 0;
}