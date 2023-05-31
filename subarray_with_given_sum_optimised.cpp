/*Arrays Challenge-Subarray with given sum
(Google, Amazon, Facebook, Visa)

Problem
Given an unsorted array A of size N of non-negative integers, find a continuous
subarray which adds to a given number S.
Constraints
1 <= N <= 105
0 <= Ai <= 1010
Example
Input:
N = 5, S = 12
A[] = {1,2,3,7,5}
Output: 2 4
Explanation: The sum of elements from 2nd position to 4th position is 12. */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        
        
    }
    int k;
    cin>>k;
    int i=0,j=0,st=-1,en=-1,sum=0;
    while(j<n && sum+arr[j]<=k){
        sum+=arr[j];
        
    }
    if(sum==k){
        cout<<i<<" "<<j<<endl;
        return 0;
    }
    while(j<n)
    {
        sum+=arr[j];
        if(sum>k){
            sum-=arr[i];
            i++;
            
        }
        if(sum==k){
            st=i;
            en=j;
            break;
        }
        j++;
    }
    cout<<st<<" "<<en<<endl;
    
}
