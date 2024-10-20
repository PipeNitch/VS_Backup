#include <iostream>
using namespace std;

int binarySearch(int arr[], int low, int high, int t) {
    while(low<=high){
        int mid=low+(high-low)/2;
        if(t==arr[mid])return mid;
        else if(t<arr[mid])high = mid-1;
        else if(t>arr[mid])low = mid+1;
    }
    return -1;
}

int main() {
    int arr[] = {2, 3, 4, 10, 40, 45, 80, 95, 99};
    int n = sizeof(arr) / sizeof(arr[0]);
    int t;
    cin>>t;
    int result = binarySearch(arr, 0, n - 1, t);

    if (result != -1)
        cout << "found: " << result << endl;
    else
        cout << "not found " << endl;

    return 0;
}
