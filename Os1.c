#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
	

	int n=0;
	int k=0;
	
	pid_t pid;

		do
		{
			printf("Please enter a number greater than 0 "); 
  			scanf("%d", &k);	
		}while (k <= 0);

		pid = fork();

		if (pid == 0)
		{
			
			printf("%d\n",k);
			while (k!=1)
			{
				if (k%2 == 0)
				{
					k = k/2;
				}
				else if (k%2 == 1)
				{
					k = 3 * (k) + 1;
				}	
			
				printf("%d\n",k);
			}
		
			
		}
		else
		{
			printf("Calling the wait method\n");
			wait();
			printf("Parent process is done.\n");
		}
	return 0; 
}