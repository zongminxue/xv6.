#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"
//#include 

int main(void)
{
	printf(1,"Zongmin Xue\n");	
		
	int fd = open("tom.txt", O_CREATE | O_RDWR);
	write(fd,"1 2 3 4\n",8);
	exit();
}
