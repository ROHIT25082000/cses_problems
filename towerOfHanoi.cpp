#include <iostream> 
#include <cmath>

using namespace std; 

void solve(int n, int start, int middle, int end){
    if(n == 1){
        cout << start << " " << end << endl;
    }
    else {
        solve(n-1, start, end, middle);
        cout << start << " " << end << endl; 
        solve(n-1, middle, start, end); 
    }
}

int main()
{
    int n; 
    cin >> n; 
    cout << (((long long int)pow(2,n))-1) << endl; 
    solve(n,1,2,3);

}