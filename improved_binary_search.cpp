#include <bits/stdc++.h>
using namespace std;

int getIndex(vector<int> nums, int target, bool giveIdx){
    // binary search algo start

    int l = 0, h = nums.size()-1, idx = -1;
    int mid = l + (h-l)/2;

    while(l <= h){
        mid = l + (h-l)/2;
        if(nums[mid] == target){
            idx = mid;
            if(giveIdx) 
            h = mid-1;
            else l = mid+1;
        }
        else if(nums[mid] < target){
            l = mid+1;

        }else {h = mid -1;}
    }

    // binary search algo end

    return idx;
}

main(){
    vector<int> nums;

    int n, target;
    cin >> n >>target;
    while(n--){
        int input ;
        cin >> input;
        nums.push_back(input);
    }

    cout << getIndex(nums, target, true) << " " << getIndex(nums, target, false) << endl;

    system("pause");
}