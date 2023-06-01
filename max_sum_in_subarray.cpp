/* FIND THE MAXIMUM SUM OF AN SUBARAY THAT IS PRESENT IN AN ARRAY.... 

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int curr_sum[n];
    curr_sum[0]=arr[0];
    for(int i=1;i<n;i++){
        curr_sum[i]=curr_sum[i-1]+arr[i]; 
        // calculating the cumulative sum of the whole array and assigned the first element of the cumulative array with the first elemnet
        //of the same array
        
    }
    int max_sum=INT_MIN;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<i;j++){
         sum=curr_sum[i]-curr_sum[j];
         //here we are subscrating the elements from the beginning and checking for the maximum sum using the cimulative array that has 
         //the sum 
         max_sum=max(sum,max_sum);
        }
        
    }
    cout<<"The maximum sum present is: "<<max_sum<<endl;
    
}
