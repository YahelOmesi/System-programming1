#include "stdio.h"

#define MAX_WEIGHT 20
#define ITEMS 5

int max(int a, int b){
   return (a > b) ? a : b;
}

int KnapSack(int weight[], int value[], int selectedItems[]){
    int count[ITEMS+1][MAX_WEIGHT+1];

    for(int i = 0; i <= ITEMS; i++){
        for(int w = 0; w <= MAX_WEIGHT; w++){
            if(i == 0 || w == 0){ //Base case
                count[i][w] = 0;
            }

            else if(weight[i-1] <= w){
                // Exclude/Include the current item
                count[i][w] = max(count[i-1][w], value[i-1] + count[i-1][w-weight[i-1]]);
            }else{
                count[i][w] = count[i-1][w];
            }
        }
    }

    int result = count[ITEMS][MAX_WEIGHT];
    int currentWeight = MAX_WEIGHT;

    for(int i = ITEMS; i > 0 && result > 0; i--){
        if(count[i-1][currentWeight] != result){ //current item contributes the maximum value
            result = result - value[i-1];
            currentWeight = currentWeight - weight[i-1];
            selectedItems[i-1] = 1; 
        }
    }
    return count[ITEMS][MAX_WEIGHT];
}

int main(){

int weight[ITEMS], value[ITEMS], selectedItems[ITEMS] = {0};
char label[ITEMS];

for(int i = 0; i < ITEMS; i++){
    scanf(" %c %d %d", &label[i] ,&value[i] ,&weight[i]);
}

int answer = KnapSack(weight, value, selectedItems);

printf("Maximum profit: %d\n", answer);

printf("Selected items:");
for(int i = 0; i < ITEMS; i++){ //only those selected and marked with 1
    if(selectedItems[i]){ 
        switch(i){

            case 0:
                printf(" %c", label[0]);
                break;

            case 1:
                printf(" %c", label[1]);
                break;

            case 2:
                printf(" %c", label[2]);
                break;

            case 3:
                printf(" %c", label[3]);
                break;

            case 4:
                printf(" %c", label[4]);
                break;
        }
    }
 }
 printf("\n");
 return 0;
}
