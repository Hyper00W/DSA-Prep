// Problem: Binary Search (Iterative)
// Platform: Self Practice / LeetCode
// Concept: Binary Search
// Time Complexity: O(log n)
// Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;

int BinarySearch(vector<int>& nums, int target){
    int n = nums.size();
    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(nums[mid] == target)return mid;
        else if(nums[mid] < target){
            low = mid+1;
        }
        else{
            high = mid - 1;
        }
    }
    return -1;
}

int main(){
    int n,target;
    cin>>n;
    cin>>target;
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin>>nums[i];
    }
    int index = BinarySearch(nums, target);
    cout<<index;
}