#include "my_mat.h"
#include "stdio.h"

int main(){

    int graph[N][N] = {0};
    char choise;
    int i, j;

        scanf(" %c", &choise);
        
        while (choise != EOF && choise != 'D'){

        switch (choise)
        {
        case 'A':
            initialGraph(graph);
            break;

        case 'B':
            scanf("%d %d", &i, &j);
            int result = isTherePath(graph,i,j);
            if(result == 1){
                printf("True\n");
            }else{
            printf("False\n");
            }
            break;

        case 'C':
            scanf("%d %d", &i, &j);
            int ans = shortestPath(graph,i,j);
            printf("%d\n",ans);
            break;

        }
        scanf(" %c", &choise);
    } 
    return 0;
}
