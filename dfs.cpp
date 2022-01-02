#include<map>
#include<vector>
#include<iostream>

void dfs(std::map<int, std::vector<int>> &adjList, int source) {
    // Do work inside here
    std::cout << source << " ";
    // End of work

    for (auto nbr : adjList[source])
        dfs(adjList, nbr);
}

int main() {
    std::map<int, std::vector<int>> m {
        { 0, { 1, 2, 3 } },
        { 1, { } },
        { 2, { 5 } },
        { 5, { 4 } },
        { 3, { 6 } },
    };

    dfs(m, 0);
}

/* Directed graph
    - - 0 - -
    |   |   |
    1   2   3
        |   |
    4 - 5   6
    
*/