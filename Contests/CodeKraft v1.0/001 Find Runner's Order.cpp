#include <iostream>
#include <unordered_map>
#include <vector>
#include <queue>
#include <string>
using namespace std;

void addEdge(unordered_map<string, vector<string>>& graph, const string& src, const string& dest) {
    graph[src].push_back(dest);
}

vector<string> topologicalSort(unordered_map<string, vector<string>>& graph, unordered_map<string, int>& indegree) {
    vector<string> result;
    queue<string> q;

    for (const auto& entry : graph) {
        if (indegree[entry.first] == 0)
            q.push(entry.first);
    }

    while (!q.empty()) {
        string current = q.front();
        q.pop();
        result.push_back(current);

        for (const auto& neighbor : graph[current]) {
            indegree[neighbor]--;
            if (indegree[neighbor] == 0)
                q.push(neighbor);
        }
    }

    return result;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, p;
    cin >> n >> p;

    unordered_map<string, vector<string>> graph;
    unordered_map<string, int> indegree;

    for (int i = 0; i < p; ++i) {
        string src, dest;
        cin >> src >> dest;
        addEdge(graph, src, dest);
        indegree[dest]++;
    }

    vector<string> result = topologicalSort(graph, indegree);

    for (const auto& runner : result) {
        cout << runner << " ";
    }
    cout << endl;
    return 0;
}
