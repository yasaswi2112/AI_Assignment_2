#include <stdio.h>

#define MAX 10

int graph[MAX][MAX];
int visited[MAX];
int n;

void dls(int node, int depth)
{
    if(depth < 0)
        return;

    visited[node] = 1;
    printf("%d ", node);

    for(int i = 0; i < n; i++)
    {
        if(graph[node][i] == 1 && visited[i] == 0)
        {
            dls(i, depth - 1);
        }
    }
}

int main()
{
    int start, limit;

    printf("Enter number of vertices: ");
    scanf("%d",&n);

    printf("Enter adjacency matrix:\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&graph[i][j]);

    printf("Enter starting vertex: ");
    scanf("%d",&start);

    printf("Enter depth limit: ");
    scanf("%d",&limit);

    printf("Depth Limited Search Traversal: ");
    dls(start, limit);

    return 0;
}
