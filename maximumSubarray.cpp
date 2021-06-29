#include <bits/stdc++.h> 
 
using namespace std; 

long long int solve(long long int arr[], long long int n){
    long long max_sum = INT_MIN;  
    long long curr_sum = 0; 
    for(long long int i = 0; i < n; ++i){
        curr_sum = max(curr_sum + arr[i], arr[i]);
        max_sum = max(max_sum, curr_sum); 
    }
    return max_sum; 
}

int main()
{
    long long int n;  
    cin >> n; 
    long long int arr[n]; 
    for(long long i = 0; i < n; ++i){
        cin >> arr[i]; 
    } 
    cout << solve(arr,n) << endl;  
    return 0; 
}