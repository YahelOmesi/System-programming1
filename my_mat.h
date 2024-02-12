#ifndef MY_MAT_H
#define MY_MAT_H

#define N 10

void initialGraph(int graph[N][N]);
int isTherePath(int graph[N][N],int i,int j);
//void printGraph(int graph[][N]);
void floydWarshell(int matrix[N][N]);
int shortestPath(int graph[N][N],int i,int j);

#endif
