#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main(int argc, char *argv[])
{
        printf("Welcome...\n");
        execl("/bin/date","date",(char*)NULL);
        execlp("ls","ls","-l",(char*)NULL);
        printf("\nJob over.\n");
        return(0);
}
