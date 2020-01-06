#include <stdio.h>
#define INFINITY 9999
#define MAX 100
#include <time.h>
#include <stdlib.h>

// A utility function to print the constructed distance array
void printSolution(int dist[], int n)
{
    printf("Vertex \t\t Distance from Source\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d \t\t\t %d\n", i, dist[i]);
    }
}

void Dijkstra(int **G, int n, int startnode)
{
    int cost[MAX][MAX], distance[MAX], pred[MAX];
    int visited[MAX], count, minDistance, nextnode, i, j;

    //count gives the number of nodes seen so far
    //create the cost matrix
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (G[i][j] == 0)
            {
                cost[i][j] = INFINITY;
            }

            else
            {
                cost[i][j] = G[i][j];
            }
        }
    }

    //initialize pred[],distance[] and visited[]
    for (i = 0; i < n; i++)
    {
        distance[i] = cost[startnode][i];
        pred[i] = startnode;
        visited[i] = 0;
    }

    distance[startnode] = 0;
    visited[startnode] = 1;
    count = 1;

    while (count < n - 1)
    {
        minDistance = INFINITY;

        //nextnode gives the node at minimum distance
        for (i = 0; i < n; i++)
        {
            if (distance[i] < minDistance && !visited[i])
            {
                minDistance = distance[i];
                nextnode = i;
            }
        }

        //check if a better path exists through nextnode
        visited[nextnode] = 1;
        for (i = 0; i < n; i++)
        {
            if (!visited[i])
            {
                if (minDistance + cost[nextnode][i] < distance[i])
                {
                    distance[i] = minDistance + cost[nextnode][i];
                    pred[i] = nextnode;
                }
            }
        }
        count++;
    }

    printSolution(distance, n);
}

int main()
{
    int i, j, startnode;

    clock_t start, end;
    double total_time = 0.00;

    int G[MAX][MAX] = { {0, 1, 0, 3, 10},
                        {1, 0, 5, 0, 0},
                        {0, 5, 0, 2, 1},
                        {3, 0, 2, 0, 6},
                        {10, 0, 1, 6, 0} };
    
     int n = 5;
    start = clock();
    Dijkstra(G, n, 0);
    end = clock();

    total_time += (double)(end - start) / CLOCKS_PER_SEC;
    printf("Execution time : %f seconds", total_time);
    return 0;
}
