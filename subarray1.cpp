#include <bits/stdc++.h>

using namespace std;  


long long int solve(long long int arr[], long long int n, long long int x) {
    long long int curr_sum = 0; 
    long long int count = 0; 
    map<long long int,long long int> hash;
    for(long long int i = 0; i < n; ++i){
        curr_sum += arr[i];  

        if(curr_sum == x){
            count++; 
        }

        if(hash.find(curr_sum-x) != hash.end()){
            count += hash[curr_sum-x]; 
        }

        hash[curr_sum]++; 
    }
    return count; 
}

int main()
{
    long long int n; 
    long long int x; 
    cin >> n >> x;  
    long long int arr[n]; 
    for(long long int i = 0; i < n; ++i){
        cin >> arr[i]; 
    }    
    cout << solve(arr,n,x) << endl;  
}