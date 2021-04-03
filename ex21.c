#include <stdio.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

typedef struct
{
char nume[20];
char prenume[20];
int data[20];
int clasa[20];
int media[20];
}
elevi;

int main()
{
    int n,m;
    time_t begin = time(NULL);
    FILE *fp=fp;

    char fisier[100];
    elevi a;
    printf ("\n Introduceti numele fisierului : ");
    scanf ("%s", fisier);

    fp=fopen(fisier,"wt");
    printf ("\n Introduceti numarul de elevi:");
    scanf ("%d",&n);
    for (m=1;m<=n;m++)
{
printf ("\n Introduceti datele persoanei  %d", m);

printf ("\n   Nume : ");
scanf ("%s", &a.nume);

printf ("\n   Prenume :");
scanf ("%s", &a.prenume);

printf ("\n   Data nasterii: ");
scanf ("%d", &a.data);

printf("\n   Clasa: ");
scanf ("%d", &a.clasa);

printf ("\n   Media: ");
scanf ("%d", &a.media);

fprintf (fp, " %s  %s  %d  %d  %d\n", a.nume, a.prenume, a.data, a.clasa, a.media);
}
fclose(fp);
time_t end = time(NULL);
printf("Timpul este de %d secunde", (end - begin));
return 0;
}



