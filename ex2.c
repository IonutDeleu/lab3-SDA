#include<stdio.h>

int main(){
int i,a[5];
printf("Introduceti numerele");
for (i=0;i<5;i++)
{
    scanf("%d",&a[i]);
}
FILE *s;
s= fopen("NUMBERS.txt","w");

for (i=0;i<5;i++){
    fprintf(s,"%d\n",a[i]);
}
fclose(s);
}
