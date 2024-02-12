#include "my_mat.h"
#include "stdio.h"

int main(){

    int graph[N][N] = {(0)};
    char choise;
    int i, j;

    do{
        printf("choose one option:\n");
        printf("A - Enter matrix values:\n");
        printf("B - Check if there is a path:\n");
        printf("C - Find the shortest path:\n");
        printf("D - Exit:\n");

        scanf(" %c", &choise);

        switch (choise)
        {
        case 'A':
            initialGraph(graph);
            //printGraph(graph);
            break;

        case 'B':
            //printf(("Enter i and j\n"));
            scanf("%d %d", &i, &j);
            isTherePath(graph,i,j);
            break;

        case 'C':
            //printf(("Enter i and j\n"));
            scanf("%d %d", &i, &j);
            floydWarshell(graph);
            printf("%d ",shortestPath(graph,i,j));
            printf("\n");
            break;

         case 'D':
         case EOF:
           printf(("Exit the program\n"));
            break;

        default:
            printf("This choice is not available\n");
        }
        while (getchar() != '\n');
    } 
    
    while(choise != 'D');
    return 0;
}
