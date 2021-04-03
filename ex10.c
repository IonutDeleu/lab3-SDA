#include<stdio.h>
#include<stdlib.h>

int main()
{
    char p="";
    char u[1000];
    int i,sum=0,a;
    FILE *f;
f= fopen("pr9.txt","r+");
{

rewind(f);
int i=0;
while (i<7){
   if( fgets (u, 1000, f)!=NULL ) {
      /* writing content to stdout */
      printf("%s",u);
      ++i;}}
for(i=0;i<7;i++)
{
    fscanf(f,"%s",u[i]);
    if (isdigit(u[i])){
        p+=u[i];
    }else {
    sum+=atoi(p);

    }

}

      printf("%d",sum);

}
fclose(f);
}
