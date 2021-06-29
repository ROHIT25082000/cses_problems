#include <iostream>
#include <set>

using namespace std; 

int main() 
{
    set<long long> st; 

    long long n; 
    cin >> n; 
    for(long long i = 0; i < n; ++i){
        long long temp; 
        cin >> temp; 
        st.insert(temp); 
    }
    cout << st.size(); 
    return 0; 
}