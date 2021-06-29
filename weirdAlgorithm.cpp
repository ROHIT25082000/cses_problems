#include <iostream> 
#include <string> 

using namespace std;  

int main() 
{
    long long  n; 
    cin >> n;  
    if(n == 1)
    {
        cout << n ; 
        return 0;
    }

    while(n != 1){
        cout << n << " "; 
        if(n % 2 == 1){
            n = n * 3 + 1; 
        }else { 
            n = n/2; 
        }
    }
    cout << 1 << endl;
   return 0;
}