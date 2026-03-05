#include <stdio.h>

#define MAX 10

int graph[MAX][MAX];
int visited[MAX];
int stack[MAX];
int top = -1;
int n;

void push(int v)
{
    if(top == MAX - 1)
        return;

    stack[++top] = v;
}

int pop()
{
    if(top == -1)
        return -1;

    return stack[top--];
}

void iterativeDFS(int start)
{
    push(start);

    while(top != -1)
    {
        int node = pop();

        if(!visited[node])
        {
            visited[node] = 1;
            printf("%d ", node);

            for(int i = n - 1; i >= 0; i--)
            {
                if(graph[node][i] == 1 && !visited[i])
                {
                    push(i);
                }
            }
        }
    }
}

int main()
{
    int start;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&graph[i][j]);

    printf("Enter starting vertex: ");
    scanf("%d",&start);

    printf("Iterative DFS Traversal: ");

    iterativeDFS(start);

    return 0;
}
