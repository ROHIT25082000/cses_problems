#include <bits/stdc++.h> 

using namespace std;  

// it is a recursive code uses backtracking  


vector<string> getAllGreyCodes(int n) 
{
    if(n == 1) {
        vector<string> base; 
        base.push_back("0"); 
        base.push_back("1"); 
        return base;
    }
    vector<string> result; 
    vector<string> curr = getAllGreyCodes(n-1); 
    for(int i = 0; i < curr.size(); ++i) {
        result.push_back("0"+curr[i]); 
    }
    for(int j = curr.size()-1; j >= 0; j--) {
        result.push_back("1"+curr[j]); 
    }
    return result; 
}

int main()
{
    int n;
    cin >> n; 
    vector<string> s = getAllGreyCodes(n);
    for(auto str : s) {
        cout << str << endl; 
    }
}