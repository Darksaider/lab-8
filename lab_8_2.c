#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TABLE_SIZE_X 6
#define TABLE_SIZE_Y 4

void createArray(int array[TABLE_SIZE_Y][TABLE_SIZE_X]){
      int max = 100,
        min = -100;
   for (int i = 0; i < TABLE_SIZE_Y; i++)
        for (int a = 0; a < TABLE_SIZE_X; a++)
            array[i][a] = rand() % (min - max + 1) + min;
 printf("Массив до перетворення \n");
    for (int i = 0; i < TABLE_SIZE_Y; i++){
        for (int a = 0; a <TABLE_SIZE_X; a++)
              printf("%d\t",array[i][a]);
    printf("\n");
        
    }
}
int* sumaCol(int array[TABLE_SIZE_Y][TABLE_SIZE_X]){
    static int arr[TABLE_SIZE_X];
    for (int i = 0; i < TABLE_SIZE_X; i++)
    {
        int suma = 0;
        for (int a = 0; a < TABLE_SIZE_Y; a++)
         suma += array[a][i];
        arr[i] = suma;
    }
    printf("Сума кожної колонки \n");
    for (int i = 0; i <TABLE_SIZE_X; i++)
    printf("%d\t" , arr[i]);
     printf("\n");
    return arr;
}
int createArr2(int array[TABLE_SIZE_Y][TABLE_SIZE_X],int arr[]){
    int max = arr[0],
    index = 0;
    for (int i = 0; i < TABLE_SIZE_X; i++)
    {
        if(arr[i]>max){
        max = arr[i];
        index = i;
        }
    }
    printf("Массив після перетворення \n");
      for (int i = 0; i < TABLE_SIZE_Y; i++){
      
        for (int a = 0; a <TABLE_SIZE_X; a++) {
         if (a == index)
         continue;
              printf("%d\t",array[i][a]);
        }
    printf("\n");
        
    }

}
int main(){
     srand(time(NULL));
     int array[TABLE_SIZE_Y][TABLE_SIZE_X];
     createArray(array);
     int *arr= sumaCol(array);
     createArr2(array,arr);
}
