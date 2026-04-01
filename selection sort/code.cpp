#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr={3,5,2,-1,0,-2,7,8,4};
    for(int i=0;i<arr.size();i++){
        int minIndex = i;
        for(int j=i+1;j<arr.size();j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}