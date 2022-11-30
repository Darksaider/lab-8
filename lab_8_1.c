#include <stdio.h>
#include <stdlib.h>
int * createArray(){
    static int array[10];
    for (int i = 0; i < 10; i++)
    { 
    printf("Enter element for the array :");
    scanf("%d",&array[i]);
    }
     for (int i = 0; i < 10; i++)
        printf("%d\t",array[i]);

    return array;
}
int min(){
    int *array = createArray(),
    min = 0 ;
    
    for (int i = 0; i < 10; i++)
    
        if (!(array[i] %2) == 1)
        {
            min = array[i];
            break;
        }

    for (int i = 0; i < 10; i++)
         if(array[i] < min && !(array[i] %2) == 1 )
            min = array[i];

    if (min != 0)
    printf("\nThe minimum even element in the array %d\n" ,min); 
    else
        printf("\nNo given number found \n"); 
    
}
int main(){
    min();
}