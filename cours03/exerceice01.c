#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>


int main (int argc, char* Argv[]){

pid_t  mypid;

mypid =fork();
if (!mypid)
	printf("\t--->je suis le fils\n");

else{
	printf("--|je suis le père\n");
	wait(0); //attente de la terminaison su fils
    }
}
