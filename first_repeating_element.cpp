//Arrays Challenge-First Repeating Element

//(Amazon, Oracle)

//Problem
//Given an array arr[] of size N. The task is to find the first repeating element in an
//array of integers, i.e., an element that occurs more than once and whose index of
//first occurrence is smallest.
//Constraints
//1 <= N <= 106
//0 <= Ai <= 106


#include<bits/stdc++.h>
using namespace std;
const int x=1e6+7;
int hsh[x];
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<x;i++){
        hsh[i]=n; // Initialize with a value outside the array index range
    }
    int min_index=INT_MAX;
    for(int i=0;i<n;i++){
        if(hsh[arr[i]]!=n){
            min_index=min(min_index,hsh[arr[i]]); // Store the index of the repeating element here the index starts from 0 according to that we are storing the index..
        }
        else{
            hsh[arr[i]]=i;
        }
    }
    if(min_index==INT_MAX){
        cout<<"No element is repeating"<<endl;
    }
    else{
        cout<<min_index<<endl;
    }
    return 0;
}
