#include <iostream> 
#include <map>

using namespace std; 

void solve(int arr[], int n, int x) 
{
    map<int,int> hash; 
    for(int i = 0; i < n; ++i){
        if(hash.find(x-arr[i]) != hash.end()) {
            cout << (hash[x-arr[i]]+1) << " " << (i+1) << endl;
            return;
        }
        hash[arr[i]] = i; 
    }
    cout << "IMPOSSIBLE" << endl;
}

int main() 
{
    int n; 
    int x; 
    cin >> n >> x; 
    int arr[n]; 
    for(int i = 0; i < n; ++i){
        cin >> arr[i]; 
    }
    solve(arr,n,x); 
    return 0; 
}