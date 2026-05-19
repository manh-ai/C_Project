#include<stdio.h>

     int getmax ( int x , int y){
     if(x >= y){
        return x;
     } 
     else {
        return y;
     }}
int main(){
    int max = getmax(49,6);
printf("the greater number is: %d",max);
    return 0;
}