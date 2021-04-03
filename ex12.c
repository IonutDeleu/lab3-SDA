#include <stdio.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

typedef struct
{
char nume[20];
char prenume[20];
}
studentul;

int main()
{
    int n,m;
    time_t begin = time(NULL);
    FILE *fp=fp;

    char fisier[10];
    studentul a;
    printf ("\n Introduceti numele fisierului : ");
    scanf ("%s", fisier);

    fp=fopen(fisier,"wt");
    printf ("\n Introduceti numarul de studenti:");
    scanf ("%d",&n);
    for (m=1;m<=n;m++)
{
printf ("\n Introduceti datele persoanei  %d", m);
printf ("\n   Nume : ");
scanf ("%s", &a.nume);
printf ("\n   Prenume :");
scanf ("%s", &a.prenume);

fprintf (fp, " %s  %s\n", a.nume, a.prenume);
}
fclose(fp);
time_t end = time(NULL);
printf("Timpul este de %d secunde", (end - begin));
return 0;
}
