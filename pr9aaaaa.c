#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x;
    char u[1000];
    int a;
    FILE *f;
    f= fopen("pr9.txt","r+");
    {
        fscanf(f,"%s",u);

        rewind(f);
        int i=0;
        while (i<7)
        {
            if( fgets (u, 1000, f)!=NULL )
            {
                /* writing content to stdout */
                printf("%s",u);
                ++i;
            }
        }
        x=atoi(u);
      printf("%d\n",u);
    }
    fclose(f);
}

