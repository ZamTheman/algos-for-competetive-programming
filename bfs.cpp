#include<map>
#include<vector>
#include<queue>
#include<iostream>

void bfs(std::map<int, std::vector<int>> adjList, int source) {
    std::queue<int> q;
    q.push(source);
    
    while (!q.empty()) {
        auto current = q.front();
        q.pop();

        // Do work here inside
        std::cout << current << " ";
        // End of work

        for (auto nbr : adjList[current])
            q.push(nbr);
    }
}

int main() {
    std::map<int, std::vector<int>> m {
        { 0, { 1, 2, 3 } },
        { 1, { } },
        { 2, { 5 } },
        { 5, { 4 } },
        { 3, { 6 } },
    };

    bfs(m, 0);
}

/* Directed graph
    - - 0 - -
    |   |   |
    1   2   3
        |   |
    4 - 5   6
    
*/