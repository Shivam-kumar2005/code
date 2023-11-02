#include<stdio.h>
struct s{
    char b;
    int a;
    char c;
}s1;
struct r{
    int a;
    char c;
    char b;
}r1;


void main(){
    printf("%d",sizeof(s1));
    printf("\n %d",sizeof(r1));

}