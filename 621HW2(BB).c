
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdint.h>
#include <sys/utsname.h>
#include <errno.h>
#include <stdlib.h>
 

void main (void)
{
      struct utsname sysInfo;
    if(uname(&sysInfo)!=0)
   {
      perror("uname doesn't return 0, so there is an error");
      exit(EXIT_FAILURE);
   }
    (void) printf("System Name = %s\n", sysInfo.sysname);
    (void) printf("Node Name = %s\n", sysInfo.nodename);
    (void) printf("Machine Name= %s\n", sysInfo.machine);
    (void) printf("Student Names = %s\n", "Aastha, Gargi, Preeti, Uday");
    
 int8_t i=0,f=0, ot=3, bl=1, red1=0, yellow1=0, green1=0, red2=0, green2=0, yellow2=0;

 // set direction out
 f=open("/sys/class/gpio/gpio66/direction",O_RDWR);
 (void)write(f,"out",ot);
 (void)close(f);
 f=open("/sys/class/gpio/gpio69/direction",O_RDWR);
 (void)write(f,"out",ot);
 (void)close(f);
 f=open("/sys/class/gpio/gpio45/direction",O_RDWR);
 (void)write(f,"out",ot);
 (void)close(f);
 f=open("/sys/class/gpio/gpio26/direction",O_RDWR);
 (void)write(f,"out",ot);
 (void)close(f);
 f=open("/sys/class/gpio/gpio46/direction",O_RDWR);
 (void)write(f,"out",ot);
 (void)close(f);
 f=open("/sys/class/gpio/gpio65/direction",O_RDWR);
 (void)write(f,"out",ot);
 (void)close(f);
 red1=open("/sys/class/gpio/gpio66/value",O_WRONLY);
 yellow1=open("/sys/class/gpio/gpio69/value",O_WRONLY);
 green1=open("/sys/class/gpio/gpio45/value",O_WRONLY);
 red2=open("/sys/class/gpio/gpio26/value",O_WRONLY);
 yellow2=open("/sys/class/gpio/gpio46/value",O_WRONLY);
 green2=open("/sys/class/gpio/gpio65/value",O_WRONLY);
// Note - correct i = LOOP, make it i less than or equal to LOOP


while(1){
	(void)printf("\nLED Blink Program is running !!!");
	(void)write(red1,"1",bl);
    (void)write(yellow1,"0",bl);
    (void)write(green1,"0",bl);
	(void)write(red2,"1",bl);
    (void)write(yellow2,"0",bl);
    (void)write(green2,"0",bl);
	(void)sleep(10);
	(void)write(red1,"0",bl);
    (void)write(yellow1,"0",bl);
    (void)write(green1,"1",bl);
	(void)write(red2,"1",bl);
    (void)write(yellow2,"0",bl);
    (void)write(green2,"0",bl);
	(void)sleep(20);
	(void)write(red1,"0",bl);
    (void)write(yellow1,"1",bl);
    (void)write(green1,"0",bl);
	(void)write(red2,"1",bl);
    (void)write(yellow2,"0",1);
    (void)write(green2,"0",bl);
	(void)sleep(5);
	(void)write(red1,"1",bl);
    (void)write(yellow1,"0",bl);
    (void)write(green1,"0",bl);
	(void)write(red2,"1",bl);
    (void)write(yellow2,"0",bl);
    (void)write(green2,"0",bl);
	(void)sleep(10);
	(void)write(red1,"1",bl);
    (void)write(yellow1,"0",bl);
    (void)write(green1,"0",bl);
	(void)write(red2,"0",bl);
    (void)write(yellow2,"0",bl);
    (void)write(green2,"1",bl);
	(void)sleep(20);
	(void)write(red1,"1",bl);
    (void)write(yellow1,"0",bl);
    (void)write(green1,"0",bl);
	(void)write(red2,"0",bl);
    (void)write(yellow2,"1",bl);
    (void)write(green2,"0",bl);
	(void)sleep(5);	
}


    (void) close(yellow1);
    (void) close(green1);
   (void)close(red1);

 (void)printf("\nLED Blink Program is terminated !!!");
 //return 0;
} // end of main
