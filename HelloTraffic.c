#include<stdio.h>
#include<signal.h>
#include<unistd.h>
void sig_handler(int signo)
{
if (signo == SIGINT){
	printf("received SIGINT\n");
	return 0;
}

}
int main(void)
{
if (signal(SIGINT, sig_handler) == SIG_ERR)
printf("\n can't catch SIGINT \n");
while(1){
	
	printf("\nRed1-on\n");
	printf("\nYellow1-off\n");
	printf("\nGreen1-off\n");
	printf("\nRed2-on\n");
	printf("\nYellow2-off\n");
	printf("\nGreen2-off\n");
	sleep(10000);
	printf("\nRed1-off\n");
	printf("\nYellow1-off\n");
	printf("\nGreen1-on\n");
	printf("\nRed2-on\n");
	printf("\nYellow2-off\n");
	printf("\nGreen2-off\n");
	sleep(120000);
	printf("\nRed1-off\n");
	printf("\nYellow1-on\n");
	printf("\nGreen1-off\n");
	printf("\nRed2-on\n");
	printf("\nYellow2-off\n");
	printf("\nGreen2-off\n");
	sleep(5000);
	printf("\nRed1-on\n");
	printf("\nYellow1-off\n");
	printf("\nGreen1-off\n");
	printf("\nRed2-on\n");
	printf("\nYellow2-off\n");
	printf("\nGreen2-off\n");
	sleep(10000);
	printf("\nRed1-on\n");
	printf("\nYellow1-off\n");
	printf("\nGreen1-off\n");
	printf("\nRed2-off\n");
	printf("\nYellow2-off\n");
	printf("\nGreen2-on\n");
	sleep(120000);
	printf("\nRed1-on\n");
	printf("\nYellow1-off\n");
	printf("\nGreen1-off\n");
	printf("\nRed2-off\n");
	printf("\nYellow2-on\n");
	printf("\nGreen2-off\n");
	sleep(5000);
	
}

return 0;
}