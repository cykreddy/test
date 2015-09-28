#include<stdio.h>
void main(int argc, char* argv[])
{

int a=argc;
int i;
for(i=1;i<a;i++)
{

printf("%d\n",atoi(argv[i]));
}
}
