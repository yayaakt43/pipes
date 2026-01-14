#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(){

char buf[73];
int tube = open("fictub",O_RDONLY);
read(tube,buf,73);
printf("J'ai reçu %s\n",buf);
close(tube);
return 0;
}
