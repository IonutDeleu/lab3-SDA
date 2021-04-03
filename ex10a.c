#include<stdio.h>

int main(){
FILE *f;
f=fopen("pr9.txt","r");
char str[200];
int arr[7],suma=0,max=0;
rewind(f);
for(int i=0;i<7;i++){
        fscanf(f,"%s %d",str,&arr[i]);
suma+=arr[i];
if(arr[i]>max){
    max=arr[i];
}
}
printf("s=%d,suma maxima este=%d",suma,max);
fclose(f);
return 0;
}
