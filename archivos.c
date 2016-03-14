# include <stdio.h>
#include <stdlib.h>

#define FILENAME "hola.txt"

int main(int argc, char **argv){
  FILE *f;
  f=fopen (FILENAME,"w");

if(f=0){
printf("Archivo %s no se pudo abrir\n",FILENAME);
return 0;
}

fputs("Hola Mundo\n",f);
fclose(f);
return 0;

}