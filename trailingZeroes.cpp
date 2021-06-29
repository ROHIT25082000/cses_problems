#include <bits/stdc++.h>  

using namespace std;  

int main() 
{
    long long int n; 
    cin >> n;
    long long  count = 0;  
    for(long long int i = 5; i <= n; i = i * 5){
        count += (n/i);
    } 
    cout << count;   
    return 0;
}