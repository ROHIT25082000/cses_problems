#include <iostream> 
#include <string> 
#include <unordered_map> 
#include <climits>

using namespace std; 

long long func(string st){

    if(st.length() == 1){
        return 1; 
    }
   long long count = 1; 
   char repa = st[0];
   long long max_value = 1;  
   for(size_t i = 1; i < st.length(); ++i){
       if(repa == st[i]){
           count++; 
           max_value = max(max_value, count); 
       }else{ 
           repa = st[i]; 
           count = 1; 
       }
   }
   return max_value; 
} 

int main()
{
    string str; 
    cin >> str; 
    cout << func(str) << endl; 
    return 0; 
}