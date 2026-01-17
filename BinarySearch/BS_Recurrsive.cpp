#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int low, int high, int target){
    if(low > high){
        return -1;
    }

    int mid = low + (high - low) / 2;

    if(arr[mid] == target){
        return mid;
    }
    else if(arr[mid] < target){ 
        return binarySearch(arr, mid + 1, high, target);
    }
    else{
        return binarySearch(arr, low, mid - 1, target);
    }
}

int main(){
    int n, target;
    cin >> n;
    cin >> target;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int index = binarySearch(arr, 0, n - 1, target);
    cout << index;
}
