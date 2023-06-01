//Finding the maximum subarray sum in the time complexity of O(n)...using the KADANE'S ALgorithmm.... 

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        
    }
    int zerocnt=0;
    int curr_sum=0;
    int max_sum=INT_MIN;
       for(int j=0;j<n;j++){
           if(arr[j]<0){
               zerocnt++;//keeping the count of all negative numbers in the array and seeing if all numbers are negative or not..
           }
       }
       //is all the numbers are negative then we are displaying the least negative number as output...

       if(zerocnt==n){
           int max_neg=INT_MIN;
           for(int k=0;k<n;k++){
               max_neg=max(max_neg,arr[k]);
           }
           cout<<max_neg<<endl;
       }
       else
       {
       for(int i=0;i<n;i++){
           curr_sum+=arr[i]; 
       
       if(curr_sum<0){
           curr_sum=0; // if current sum is less than zero then current sum is set to zero 
       }
       max_sum=max(max_sum,curr_sum); // maximum of max  and current sum is calculated to check wheteher the sum of previous calculated 
       //subarray was larger of is the current one is greater....
       }
     cout<<max_sum<<endl;
    }
}
