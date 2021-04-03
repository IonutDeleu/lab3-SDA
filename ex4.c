#include<stdio.h>

int main(){
int an=5508;
float veac=5508/100;
int zi=5508*365,luna=5508*12;
unsigned long long int ora=5508*8760,minute=5508*525600;
FILE*s;
s=fopen("ex4.txt","w");
fprintf(s,"minute=%llu\nore=%llu\nzile=%d\nluni=%d\nan=%d\nveac=%2.f",minute,ora,zi,luna,an,veac);
fclose(s);
}
