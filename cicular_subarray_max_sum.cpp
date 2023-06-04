//circular subarray sum where wrapping is allowed...


#include<bits/stdc++.h>
using namespace std;
int kadane(int arr[],int n){
    int curr_sum=0;
    int max_sum=INT_MIN;
    for(int k=0;k<n;k++){
    curr_sum+=arr[k];
    if(curr_sum<0){
        curr_sum=0;
    }
    
    max_sum=max(max_sum,curr_sum);
    }
    return max_sum;
    
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //try to find the non contributing element in the array so that ;we caluate the sum of the array and then 
    //substract the non-contriubuting element from it to get the maximum subarray sum....
    int no_wrap=0,wrap=0;
    no_wrap=kadane(arr,n);
    
    int total_sum=0;
    for(int i=0;i<n;i++){
        total_sum+=arr[i];
        
        arr[i]=-arr[i];
    }
    wrap=total_sum+kadane(arr,n);
    cout<<wrap<<endl;
    return 0;
    
}
