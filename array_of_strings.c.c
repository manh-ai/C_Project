//INITIALIZE 2D ARRAY WITH USER INPUT
#include <stdio.h>
#include <string.h>
int main(){  
char fruits [3][30] = {0};
int rows = sizeof(fruits) / sizeof(fruits[0]);

for(int i = 0; i < rows; i++){
    printf("enter fruit: ");
    fgets(fruits[i],sizeof(fruits[i]),stdin);
    fruits[i][strlen(fruits[i])-1] = '\0';
}

for(int i = 0; i < rows; i++){
    printf("fruit you enter: %s\n",fruits[i]);
}

    return 0;
}