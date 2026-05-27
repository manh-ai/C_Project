//pointer//
#include<stdio.h>
void birthday(int *age);
int main(){
int age = 18;
birthday(&age);
printf("%d",age);
    return 0;
}void birthday(int *age){
    (*age)++;
}