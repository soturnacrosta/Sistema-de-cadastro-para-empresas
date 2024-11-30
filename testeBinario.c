#include <stdio.h>

int main ()

{
 FILE *arquivo = fopen ("vetor.dat", "rb");

 int n, vetor [10];
 char executavel [10];

 fread (&n, sizeof(int), 1, arquivo);
 fread (&vetor, sizeof(int), n, arquivo);
 fread (&executavel, sizeof(char), 10, arquivo);

 fclose (arquivo);

 return 0;
}