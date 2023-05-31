

//Arrays Challenge-Subarray with given sum
//(Google, Amazon, Facebook, Visa)

//Problem
//Given an unsorted array A of size N of non-negative integers, find a continuous
//subarray which adds to a given number S.
//Constraints
//1 <= N <= 105
//0 <= Ai <= 1010
//Example
/*Input:
N = 5, S = 12
A[] = {1,2,3,7,5}*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cout << "Enter the sum you want to check in the array: ";
    cin >> k;

    vector<int> g1;
    int curr;

    for (int i = 0; i < n; i++) {
        curr = 0;
        for (int j = i; j < n; j++) {
            curr += arr[j];                 //finding the sum of all possible subaarays and then checking it to given sum.
            g1.push_back(arr[j]);
            //pushing each element being added to sum in the vector so that it can be printed

            if (curr == k) {
                cout << "Subarray with the given sum found: ";
                for (int i = 0; i < g1.size(); i++) {
                    cout << g1[i] << " ";
                }
                cout << endl;
            }
        }
        g1.clear();
        //if sum not found clearing it after every one complete iteration of j ...
    }

    return 0;
}
