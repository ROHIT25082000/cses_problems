#include <bits/stdc++.h> 

using namespace std;  


void dfs(vector<vector<char>> & graph, int row , int col) { 

    if(row < 0 || col < 0 || row >= graph.size() || col >= graph[0].size() || graph[row][col] != '.')
        return; 
    
    graph[row][col] = '*'; 

    dfs(graph, row-1, col);
    dfs(graph, row+1, col); 
    dfs(graph, row, col+1); 
    dfs(graph, row, col-1); 
}

long long int solve(vector<vector<char>> & graph)
{
    long long count = 0; 
    for(long long int i = 0; i < graph.size() ;++i){
        for(long long int j = 0; j < graph[0].size(); ++j){
            if(graph[i][j] == '.'){
                count++; 
                dfs(graph, i, j); 
            }
        }
    }
    return count;
}

int main()
{
    int n; 
    int m; 
    cin >> n >> m; 
    
    vector<vector<char>> graph; 
    for(long long int i = 0; i < n; ++i){
        vector<char> a; 
        for(int j = 0; j < m; ++j){
            char temp; 
            cin >> temp; 
            a.push_back(temp); 
        }
        graph.push_back(a); 
    }
    cout << solve(graph); 
    return 0; 
}




