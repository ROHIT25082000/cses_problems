#include <iostream> 
#include <vector>

using namespace std;  

int main() 
{
    int n; 
    cin >> n; 
    if(n == 1){
        cout << 0;
        return 0;
    }
    else{ 
        long long arr[n];  
        for(int i = 0; i < n; ++i ){ 
            cin >> arr[i];
        }
        long long ans = 0; 
        for(int i = 1; i < n; ++i){
            if(arr[i-1] > arr[i]){
                ans +=  abs(arr[i-1] - arr[i]); 
            }
        }
        cout << ans << endl; 
    }
    return 0; 
}