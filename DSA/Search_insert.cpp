#include<bits/stdc++.h>
using namespace std;
    int searchInsert(int nums[], int target) {
        int i=0;
        int k=0;
        while(i<nums.size()){
            if(nums[i]<target && target<nums[i+1]){
                k+=nums[i];
            }
            else{
                i++;
            }
        }
        return k+1;
    }
    int main(){
        int arr[]={1,3,5,6};
        int target = 5;
        cout<<searchInsert(arr,target);
    }