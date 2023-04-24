#include<stdio.h>
#define INFINITY 1000
void dijkstra(int graph[20][20],int n,int start)
{
    int cost[20][20],distance[20],pred[20],visited[20],count,mindistance,nextNode;
    
    for(int i=0;i<n;i++)
    {
        for(int j =0 ;j<n;j++)
        {
            if(graph[i][j]==0)
            {
                cost[i][j]=INFINITY;
            }
            else
            {
                cost[i][j]=graph[i][j];
            }
        }
    }
    
    for(int i=0;i<n;i++)
    {
        distance[i]=cost[start][i];
        pred[i]=0;
        visited[i]=0;
    }
    distance[start]=0;
    visited[start]=1;
    count=1;
    while(count<n-1)
    {
        mindistance = INFINITY;
        for(int i=0;i<n;i++)
        {
            if(mindistance>distance[i] && !visited[i])
            {
                mindistance=distance[i];
                nextNode = i;
            }
        }
        visited[nextNode]=1;
        for(int i=0;i<n;i++)
        {
            if(!visited[i])
            {
                if(mindistance + cost[nextNode][i] < distance[i])
                {
                    distance[i]=(mindistance + cost[nextNode][i]); 
                    pred[i]=nextNode;
                }
            }
        }
        count++;
    }

    for(int i=1;i<n;i++)
    {
        printf("\t%d-%d",i,distance[i]);
    }
    
}

int main()
{
    int n,u,graph[20][20];
    printf("Enter the number of vertices: ");
    scanf("%d",&n);
    printf("Enter the values of adjacency matrix: \n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&graph[i][j]);
        }
    }
    dijkstra(graph,n,0); 
}