#include "stdio.h"
#include "my_mat.h"

void initialGraph(int graph[N][N]){
    //printf("Enter the matrix value (10X10):\n");
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
        if(graph[i][j] != 0){
            printf("true\n");
            return 1;
        }
        else{
            printf("false\n");
            return 0;
        }
    }

    void floydWarshell(int matrix[][N]){
        for(int k = 0; k < N; k++){
            for(int i = 0; i < N; i++){
                for(int j = 0; j < N; j++){
                    if(matrix[i][j] > matrix[i][k] + matrix[k][j]){
                        matrix[i][j] = matrix[i][k] + matrix[j][k];
                    }
                }
            }
        }
    }

    int shortestPath(int graph[N][N],int i,int j){
        return ((isTherePath(graph,i,j) == 1) ? graph[i][j] : -1);
    }
    
