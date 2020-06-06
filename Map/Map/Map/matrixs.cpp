#include "StdAfx.h"
#include "matrixs.h"
#include "runit.h"
#include "Form4.h"

matrixs::matrixs(void)
{
}

int matrixs::matrixsall(void)
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

    runit^ f1= gcnew runit();
    int *p;
    p=f1->dijkstra_for_path(graph, 0);

	return 1;
}