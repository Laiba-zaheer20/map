#include "StdAfx.h"
#include "runit.h"
#include <stdio.h> 
#include <limits.h> 
  
// Number of vertices  
// in the graph 
#define V 9

runit::runit(void)
{
	
}


int runit::pak(void)
{
return 2;	
}

int runit::minDistance(int dist[],  
                bool sptSet[]) 
{ 
      
    // Initialize min value 
    int min = INT_MAX, min_index; 
  
    for (int v = 0; v < V; v++) 
        if (sptSet[v] == false && 
                   dist[v] <= min) 
            min = dist[v], min_index = v; 
  
    return min_index; 
} 

void runit::printPath(int parent[], int j ,int i) 
{ 
    if (parent[j] == - 1) 
        return ; 
  
    printPath(parent, parent[j],i++); 
     return ;
} 
  
 
int* runit::dijkstra_for_distance(int graph[V][V], int src) 
{ 
   static int dist[V];  
   bool sptSet[V]; 
   int parent[V]; 

   for (int i = 0; i < V; i++) 
    { 
		parent[i] = -1; 
        dist[i] = INT_MAX; 
        sptSet[i] = false; 
    } 
    dist[src] = 0; 
    for (int count = 0; count < V - 1; count++) 
    { 
		int u = minDistance(dist, sptSet); 
        sptSet[u] = true; 
        for (int v = 0; v < V; v++) 
            if (!sptSet[v] && graph[u][v] && 
                dist[u] + graph[u][v] < dist[v]) 
            { 
                parent[v] = u; 
                dist[v] = dist[u] + graph[u][v]; 
            }  
    }
	return dist;
    //printSolution(dist, V, parent); 
} 


int* runit::dijkstra_for_path(int graph[V][V], int src) 
{ 
   static int dist[V];  
   bool sptSet[V]; 
   static int parent[V]; 
   for (int i = 0; i < V; i++) 
    { 
		parent[i] = -1; 
        dist[i] = INT_MAX; 
        sptSet[i] = false; 
    } 
    dist[src] = 0; 
    for (int count = 0; count < V - 1; count++) 
    { 
		int u = minDistance(dist, sptSet); 
        sptSet[u] = true; 
        for (int v = 0; v < V; v++) 
            if (!sptSet[v] && graph[u][v] && 
                dist[u] + graph[u][v] < dist[v]) 
            { 
                parent[v] = u; 
                dist[v] = dist[u] + graph[u][v]; 
            }  
    }
	return parent;
} 

int* runit::matrixsall(int source)
{
 int graph[V][V] = {{0, 4, 0, 0, 0, 0, 0, 8, 0}, 
                     {4, 0, 8, 0, 0, 0, 0, 11, 0}, 
                     {0, 8, 0, 7, 0, 4, 0, 0, 2}, 
                     {0, 0, 7, 0, 9, 14, 0, 0, 0}, 
                     {0, 0, 0, 9, 0, 10, 0, 0, 0}, 
                     {0, 0, 4, 0, 10, 0, 2, 0, 0}, 
                     {0, 0, 0, 14, 0, 2, 0, 1, 6}, 
                     {8, 11, 0, 0, 0, 0, 1, 0, 7}, 
                     {0, 0, 2, 0, 0, 0, 6, 7, 0},
                    }; 

    int *p;
    p=this->dijkstra_for_path(graph, source);
	return p;
}