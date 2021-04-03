#include<stdio.h>
int main() {
   FILE *inputFile, *outputFile;
   char ch;

   inputFile = fopen("data.txt", "r");
   if (inputFile == NULL) {
      puts("File data.txt Open Error.");
      exit(1);
   }

   outputFile = fopen("output.txt", "w");
   if (outputFile == NULL) {
      puts("File output.txt A aparut o eroare. Schimba!!!.");
      exit(1);
   }

   do {
      ch = fgetc(inputFile);
      fputc(ch+3, outputFile);
   } while (ch != EOF);

  printf("Data.txt failu a fost citit cu succes prin metodaCaesar Cipher.\n");
  printf("Output.txt failu este generalizat acceseaza failuoutput!!!.");

  fclose(inputFile);
  fclose(outputFile);

  return 0;
}
