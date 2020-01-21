// Minimum Spanning Tree with Kruskal's algorithm.

#include<stdio.h>
#include <time.h>

int UniqueData(int p,int q,int parent[])
{
    if(p!=q)
    {
        parent[q]=p;
        return 1;
    }
    return 0;
}

int SearchParent(int i,int parent[])
{
    while(parent[i]!=-1)
        {
            i=parent[i];

        }
    return i;
}


int main()
{
    int size,i,j,mini,minj,k=1,mincost=0,total=0,p,q;

    size = 5; //no of elements in graph

    int parent[size];

    //input zone;

    //nodes name
    char name[5] = {'a', 'b', 'c', 'd', 'e'};

  //whole graph
    int graph[5][5]= {
        0,7,3,4,0,
        7,0,6,8,1,
        3,6,0,0,5,
        4,8,0,0,2,
        0,1,5,2,0
    };


    clock_t start, end;
    double total_time = 0.00;

    start = clock();
    for(i=0;i<size;i++)
        {
            for(j=0;j<size;j++)
                {
                    if(graph[i][j]==0)
                        graph[i][j]=999;
                }
                parent[i]=-1;
        }

    //Processing unit;
    while(k<size)
    {
        mini=0;
        minj=0;
        for(i=0;i<size;i++)
            {
                for(j=0;j<size;j++)
                    {
                        if(graph[i][j]<graph[mini][minj])
                        {
                            mini=i;
                            minj=j;
                            mincost=graph[i][j];
                        }
                    }
            }

            p=SearchParent(mini,parent);
            q=SearchParent(minj,parent);

            if(UniqueData(p,q,parent))
            {
                printf("\n%d-edge (%c,%c) =%d\n",k++,name[mini],name[minj],mincost);
                total+=mincost;
            }
             graph[mini][minj]=999;
             graph[minj][mini]=999;

    }
    end = clock();
    
    printf("\nTotal minimum cost=%d.\n",total);

    total_time += (double)(end - start) / CLOCKS_PER_SEC;
    printf("Execution time : %f seconds", total_time);


}


