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


    int isTherePath(int graph[N][N], int x, int y){
        int path[N][N];
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){

                if(i == j){ // Main diagonal
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

                    if(i==j || path[i][k] == 0 || path[k][j] == 0)
                        continue;
                    

                    if(path[i][j]==0 || path[i][k]+path[k][j]< path[i][j])
                        path[i][j] = path[i][k] + path[k][j];
                }
            }
        }

        if(path[x][y] == 0 || path[x][y] == INF){
            return 0; // No path exists
        } else{
            return 1;}
    }

    int shortestPath(int graph[N][N], int x, int y){
        int path[N][N];
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){


                if(i == j){ // Main diagonal
                path[i][j] = 0;
                }

                else{
                    path[i][j] = graph[i][j];
                }
            }
        }


         for(int k = 0; k < N; k++){
            for(int i = 0; i < N; i++){
                for(int j = 0; j < N; j++){

                    if(i==j || path[i][k] == 0 || path[k][j] == 0)
                        continue;
                    

                    if(path[i][j]==0 || path[i][k]+path[k][j]< path[i][j])
                        path[i][j] = path[i][k] + path[k][j];
                }
            }
        }

        if(path[x][y] == 0 || path[x][y] == INF){
            return -1; 
        } else{
            return path[x][y];}
    }
