#pragma once
ref class runit
{
public:
	runit(void);
	int pak(void);
	int runit::minDistance(int dist[],bool sptSet[]);
	void runit::printPath(int parent[], int j);
	void runit::printSolution(int dist[], int n,  
                      int parent[]) ;
	void runit::dijkstra(int graph[8][8], int src) ;


};

