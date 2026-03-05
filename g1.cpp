#include <iostream>
#include <vector>
using namespace std;

int bins(vector<int> arr,int tar){
    int n=arr.size();
    int st = 0, end = n-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(tar>arr[mid]){
            st = mid+1;
        }else if(tar<arr[mid]){
            end = mid-1;
        } else {
            return mid;
        }

    }
    return -1;
}

int main(){
    vector<int> arr1 = {1,2,5,8,9};
    int t1 = 8;
    vector<int> arr2 = {2,8,9,10,11};
    int t2 = 8;

    cout<<bins(arr1,t1)<<endl;
    cout<<bins(arr2,t2)<<endl;
    return 0;
}