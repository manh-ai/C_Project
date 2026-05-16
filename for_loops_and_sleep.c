#include <stdio.h>
#include <windows.h>
int main(){
for(int i = 10; i > 0; i--){
Sleep(1000);
printf("%d \n",i);
}
Sleep(2000);
printf("SURPRISE!");
    return 0;
}