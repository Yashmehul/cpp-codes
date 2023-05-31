// Arrays Challenge - Smallest Positive Missing Number

// (Amazon, Samsung, Snapdeal, Accolite)

// Problem
// Find the smallest positive missing number in the given array.
// Example: [0, -10, 1, 3, -20], Ans = 2

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++){
        //taking array as user input..
        cin>>arr[i];
    }
    int max=INT_MIN; 
    //finding the max element present in the array to make hash array of that size .....
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=i;
        }
        else{
            continue;
        }
    }
    
    bool hsh[arr[max]];
    for(int i=0;i<n;i++){
        hsh[i]=false;
        //set all the indices value to false
    }
    for(int j=0;j<n;j++){ 
        // Iterating the array to find all nummber present in array and seting their indices true in the hash array....
        if(arr[j]>0){
        hsh[arr[j]]=true;
        }
        
    }
    for(int i=1;i<arr[max];i++){ //first iteration of hash array and as soon as we encounter a False we exit by printing the indice value...
        if(hsh[i]!=true){
        cout<<"The smallest missing number is"<<i<<endl;
            exit;
        }
        else{
            continue;
        }
        
    }
    
}
