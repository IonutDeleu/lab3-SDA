#include<stdio.h>

int main(){
int i,a[10];
printf("Introduceti numerele==");
for (i=0;i<10;i++)
{
    scanf("%d",&a[i]);
}
FILE *s;
s= fopen("pr3.txt","r+");

for (i=0;i<10;i++){
    fprintf(s,"%d\n",a[i]);
}
FILE *u;
u= fopen("pr3b.txt","w");
int sum;
sum=0;
for (i=0;i<10;i++){
    fscanf(s,"%d\n",a[i]);
    sum+=a[i];


}
fprintf(u,"%d\n",sum);
fclose(s);
}
