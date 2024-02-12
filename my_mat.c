#include "stdio.h"
#include "my_mat.h"
#include <limits.h>
#define INF INT_MAX

void initialGraph(int graph[N][N]){
    for(int i = 0; i < N ; i++){
        for (int j = 0; j < N; j++)
        {
           scanf("%d", &graph[i][j]);
        }  
    }}

    // void printGraph(int graph[N][N]){
    // printf("Adjacency Matrix:\n");
    // for(int i = 0; i < N ; i++){
    //     for (int j = 0; j < N; j++)
    //     {
    //        printf("%d ", graph[i][j]);
    //     } 
    //     printf("\n"); 
    // }}

    int isTherePath(int graph[N][N],int i,int j){
        return (graph[i][j] != 0);
        
    }


    int shortestPath(int graph[N][N], int x, int y){
        int path[N][N];

        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){

                 if (graph[i][j] == 0){
                path[i][j] = INF;
                }

                if(i == j){
                path[i][j] = 0;
                }

                else{
                    path[i][j] = graph[i][j];
                }
            }
        }

        //floydWarshell
        for(int k = 0; k < N; k++){
            for(int i = 0; i < N; i++){
                for(int j = 0; j < N; j++){
                    if(path[i][k] != INF && path[k][j] != INF && path[i][j] > path[i][k] + path[k][j]){
                        path[i][j] = path[i][k] + path[k][j];
                    }
                }
            }
        }

        if(path[x][y] == 0 || path[x][y] == INF){
            return -1; // No path exists
        } else{
            return path[x][y];}
    }

   
        
            
        
    
