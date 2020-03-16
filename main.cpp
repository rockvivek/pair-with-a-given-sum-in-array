#include <stdio.h>
#include<bits/stdc++.h>
//function to find a pair in an array with given sum using the hashing technique....
using namespace std;

void findPair(int arr[], int n, int sum)
{
    unordered_map<int,int> um;

    for(int i=0;i<n;i++){
        if(um.find(sum-arr[i])!=um.end()){
            cout<<"pair found at index "<<um[sum-arr[i]]<<" and " <<i<<endl;
            return ;
        }
        else{
            um[arr[i]] = i;
        }
    }
    cout<<"pair not found"<<endl;
}

// main function
int main()
{
	int arr[] = { 8, 7, 2, 5, 3, 1 };
	int sum = 10;

	int n = sizeof(arr)/sizeof(arr[0]);

	findPair(arr, n, sum);

	return 0;
}
