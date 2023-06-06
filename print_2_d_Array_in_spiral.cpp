
#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m;
cin>>n>>m;
int arr[n][m];
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>arr[i][j];
    }
}
int row_start=0,column_start=0,row_end=n-1,column_end=m-1;
while(row_end>=row_start && column_end>=column_start){
    for(int column=column_start;column<=column_end;column++){
        cout<<arr[row_start][column]<<" ";
      //for the first row ....
    }
    cout<<endl;
    row_start++;
    for(int row=row_start;row<=row_end;row++){
        cout<<arr[row][column_end]<<" ";
      //last column of all rows
    }
    cout<<endl;
    column_end--;
    for(int column=column_end;column>=column_start;column--){
        cout<<arr[row_end][column]<<" ";
      //from last column to 1st column of last row
    }
    cout<<endl;
    row_end--;
    for(int row=row_end;row>=row_start;row--){
        cout<<arr[row][column_start]<<" ";
      //last row to 2nd row 1st column...then this will repeat....
    }
    cout<<endl;
    column_start++;
}
}
