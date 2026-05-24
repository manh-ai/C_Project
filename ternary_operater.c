// TRINARY OPERATOR // MERIDIUM
#include <stdio.h>
int main(){
    int hours = 0;
    int minutes = 0; 
    printf("enter hours: ");
    scanf("%d", &hours);
    printf("enter the munutes: ");
    scanf("%d", &minutes);
    printf("it's %d:%d %s",hours,minutes,(hours < 12)? "AM" : "PM");

    return 0;
}