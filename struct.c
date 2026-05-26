#include<stdio.h>
#include<stdbool.h>
 typedef struct {
     char name[50];
     float gpa;
     int age;
     bool isfulltime;
 }student;
  void printstudent (student manh);
 int main(){ 
student manh = {"manh",4.0,22,true};
 printstudent (manh);
    return 0;
 }
 void printstudent (student manh) {
    printf("Name: %s\n",manh.name);
    printf("GPA: %.2f\n",manh.gpa);
    printf("AGE: %d\n",manh.age);
    printf("FULLTIME: %s\n",(manh.isfulltime)? "yes" : "no");
 }