#include "my_mat.h"
#include "stdio.h"

int main(){

    int graph[N][N];
    char choise;
    int i, j;

    do{
        printf("choose one option:\n");
        printf("A - Enter matrix values:\n");
        printf("B - Check if there is a path:\n");
        printf("C - Find the shortest path:\n");
        printf("D - Exit:\n");

        scanf("%c", &choise);

        switch (choise)
        {
        case 'A':
            initialGraph(graph);
            printGraph(graph);
            break;

        case 'B':
         //   printf(("Enter i and j"));
            scanf("%d %d", &i, &j);
            isTherePath(graph,i,j);
            break;

        case 'C':
        //    printf(("Enter i and j"));
            scanf("%d %d", &i, &j);
            floydWarshell(graph);
            printf("%d ",shortestPath(graph,i,j));
            break;

         case 'D':
         case EOF:
        //    printf(("Exit the program"));
            break;

        default:
            printf("This choice is not available\n");
        }
    } 
    
    while(choise != 'D' && choise != EOF);
    return 0;
}
