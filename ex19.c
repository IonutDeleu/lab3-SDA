#include <stdio.h>

#include <stdlib.h>

#include <math.h>

#include <string.h>

#include <ctype.h>

int main()

{

      char first_file[10];

     char second_file[10];

    printf("introduceti denumirea primului file\n");

    scanf("%s",&first_file);

    printf("introduceti denumirea urmatorului file\n");

    scanf("%s",&second_file);

    char** masive1;

    char** masive2;

    char** masive3;

    FILE*fpointer1=fopen(first_file,"r");

    FILE*fpointer2=fopen(second_file,"r");

    FILE*fpointer3=fopen("file3.txt","w");

    int n=10;

    masive1=(char**)calloc(n,sizeof(char*)); // aloc memorie la odnomerni masiv

    masive2=(char**)calloc(n,sizeof(char*));

    masive3=(char**)calloc(n*2,sizeof(char*));

    for(int i=0 ; i<n; i++)

    {

        masive1[i]= (char *)calloc(n,sizeof(char));

        masive2[i]= (char *)calloc(n,sizeof(char));

        fscanf(fpointer1, "%s", masive1[i]);

        fscanf(fpointer2, "%s", masive2[i]);



    }

    printf("\n Textul primului file\n");

    for(int i=0 ; i<n; i++)

    {

        printf("%s ",masive1[i]);

    }

    printf("\n Textul lu al doilea file\n");

    for(int i=0 ; i<n; i++)

    {

        printf("%s ",masive2[i]);

    }

    for(int i=0 ; i<n*2; i++)

    {

        masive3[i]= (char *)calloc(2*n,sizeof(char));

    }

    printf("\n");

    printf("\n");

    printf("Fisierul concatenat\n");

    int a=0;

    for(int i=0; i<n; i++)

    {

        masive3[i]=masive1[i];

        a++;

    }

    printf("\n");

    int b=0;

    for(int i=a; i<n*2; i++)

    {

        masive3[i]=masive2[b];

        b++;

    }

    for(int i=0; i<2*n; i++)

    {

        printf("%s ",masive3[i]);

    }

    for(int i=0; i<2*n; i++)

    {

        fprintf(fpointer3,"%s ",masive3[i]);

    }

    if(masive3!=NULL)

printf("\nconcatenarea a avut loc cu succes\n");

    free(masive3);



    fclose(fpointer1);

    fclose(fpointer2);



    return 0;

}
