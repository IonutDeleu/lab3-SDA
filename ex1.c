#include<stdio.h>
int main()
{
    FILE*f,*f1;
    f=fopen("ex1.txt","r");
    f1=fopen("ex1 2,0.txt","w");
        int a = 0;
    int k = 0;
    char c;
    char str1[100];
    char str2[100];
    char str3[100];
    char* p1 = str1;
    char* p2 = str2;
    char* p3 = str3;

    char *p[] = {p1, p2, p3};

    while ((c = fgetc(f)) != EOF) {
        if (a == 3)break;
        *(p[a] + k) = c;
        k++;
        if (c == '\n') {
            a++;
            k = 0;
        }
    }
fprintf(f1,"%s",str3);
fprintf(f1,"%s",str2);
fprintf(f1,"%s",str1);
    fclose(f);
    fclose(f1);

  }
