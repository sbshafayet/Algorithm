
#include<bits/stdc++.h>
using namespace std;

#define WHITE 0
#define GRAY 1
#define BLACK 2
#define SIZE 50

bool visited[SIZE][SIZE];
int colour[SIZE];
int parent[SIZE];
int finishTime[SIZE];
int disTime[SIZE];
int timeCount=0;
void dfs();
void dfsVisit(int u);
int vertex;
int edge;

int main() {

    cout<<"Enter the vertex and edge : ";
    cin >> vertex >> edge;
    cout << "Vertex is : " << vertex <<endl;
    cout << "Edge is : " << edge <<endl;

    int node1,node2;
    for(int i = 0 ; i< edge ; i++) {
        cout << "Enter 2 Nodes : ";
        cin >> node1 >> node2;
        visited[node1][node2] = true;
    }
    dfs();
}


void dfs() {

    for(int i = 0 ; i < vertex ; i++) {
        colour[i] = WHITE;              //color all vertices white
        parent[i] = -1;                 // parents null
    }
    timeCount = 0;                      //initially time=0
    cout << "DFS is ";
    for(int i = 0 ; i<vertex ; i++) {
        if(colour[i] == WHITE) {
            dfsVisit(i);
        }
    }
}

void dfsVisit(int u ) {
    colour[u] = GRAY;
    disTime[u] = timeCount+1;           //update discovery time
    for(int i = 0 ; i<vertex ; i++) {
        if(visited[u][i] == true) {
            int v = i;
            if(colour[v] == WHITE) {
                parent[v] = u;          //set parent value
                dfsVisit(v);            //recursive call
            }
        }
    }
    colour[u] = BLACK;              //Black u ; Finished
    finishTime[u] = timeCount+1;
    cout << u << " ";

}



