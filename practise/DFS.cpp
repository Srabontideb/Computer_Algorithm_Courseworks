#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int adjMat[10][10] = {0}; //Initializing adjacent matrix
int visited[10] = {0}; //Initializing visited array
vector<int> v; //Output vector

void DFS(int start) {

    //Initial step
    visited[start] = 1; //Marking node as visited
    v.push_back(start); //Adding visited node to output vector

    //Repetitive backtracking step
    for(int i = 0; i < 10; i++) {
        if(adjMat[start][i] == 1 && visited[i] == 0) //Get adjacent node from adjacent matrix and if it is not visited apply DFS recursively
            DFS(i);
    }

}

int main()
{
    int i, j, start;

    cout << "Enter start vertex and edges (edge1 edge2), Enter -1 -1 to terminate:" << endl;
    cin >> start;

    do {
        cin >> i;
        cin >> j;
        if(i >= 0) {
            adjMat[i][j] = 1;
        }
    } while(i >= 0);

    DFS(start);

    cout << "\nDFS : \n";
    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    return 0;
}
