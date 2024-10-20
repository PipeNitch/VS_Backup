// Binary Search by Pipe

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> v;
    for(int i=0;i<2000;i+=3) v.push_back(i);
    // sort(v.begin(),v.end(),greater<>);
    int high = v.size(), low = 0;
    int s;
    cin>>s;

    while(low<=high){
        int mid = low+(high-low)/2;
        if(v[mid]==s){
            printf("%d is in index %d",s,mid);
            return 0;
        }
        else if(v[mid]>s){
            high = mid-1;
        }
        else if(v[mid]<s){
            low = mid+1;
        }
    }
    printf("Cannot find element %d",s);

    return 0;
}



// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main() {
//     vector<int> arr = {1, 2, 4, 4, 5, 6, 8, 9};

//     int target;
//     cin>>target;

//     auto it = lower_bound(arr.begin(), arr.end(), target);

//     if (it != arr.end() && *it == target) {
//         cout << "found " << target << " at : " << (it - arr.begin()) << endl;
//     } else {
//         cout << "not found " << target ;
//     }

//     return 0;
// }
