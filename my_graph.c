#include "my_mat.h"
#include "stdio.h"

int main(){

    int graph[N][N] = {(0)};
    char choise;
    int i, j;

        scanf(" %c", &choise);
        
        while (choise != 'D' && choise != EOF){

        switch (choise)
        {
        case 'A':
            initialGraph(graph);
            break;

        case 'B':
            scanf("%d %d", &i, &j);
            int result = isTherePath(graph,i,j);
            if(result == 1){
                printf("true\n");
            }else{
            printf("false\n");
            }
            break;

        case 'C':
            scanf("%d %d", &i, &j);
            printf("%d \n",shortestPath(graph,i,j));
            break;

        }
        scanf(" %c", &choise);
    } 
    return 0;
}
