#include <stdio.h>
int main (){
int numbers[] = {1,2,3,4,5};
char grades[] = {'a'};
char name[] = " manh";
int size = sizeof(numbers) / sizeof(numbers[0]);
printf("size of name: %d\n",sizeof(name));
printf("size of element 0: %d\n",sizeof(name[0]));


for(int i = 0; i < size; i++){
    printf("%d ", numbers[i]);
}

    return 0;
}