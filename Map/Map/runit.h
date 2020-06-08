#pragma once
#define V 9

ref class runit
{
public:
	
	runit(void);
	int pak(void);
	int runit::minDistance(int dist[],bool sptSet[]);
	void runit::printPath(int parent[], int j,int i);
	int* runit::dijkstra_for_distance(int graph[V][V], int src) ;
	int* runit::dijkstra_for_path(int graph[V][V], int src) ;
	int* runit::matrixsall(int source);

};

