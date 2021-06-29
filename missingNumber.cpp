#include <iostream> 
#include <string> 

using namespace std;  

int main()
{
    long long n; 
    cin >> n; 
    long long arr[n-1]; 
    for(int i = 0; i < n-1; ++i)
    {
        cin >> arr[i]; 
    }
    long long res = 0; 
    for(int i = 0; i < n-1; i++){
        res = res ^ arr[i]; 
    }
    
    for(int i = 1 ; i <= n; ++i) {
        res = res ^ i;
    }
    cout << res << endl; 
    return 0; 


}
