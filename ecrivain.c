#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <signal.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char *argv[]){

  mode_t mode = S_IRUSR | S_IWUSR;
  /* Création fichier FIFO */
  mkfifo("fictub",mode);
  int tub = open("fictub",O_WRONLY);
  write(tub,"Bonjour tout le monde ! L'été sera chaud cette année en 2025 ici à Paris",76);
  close(tub);

return 0;

}
