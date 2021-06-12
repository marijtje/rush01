#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
 
 void remove_spaces(char* argv)
 {
	int n_argv = 0;
	int n_clues = 0;
	char clues[50];

	while (argv[n_argv] != '\0')
	{
		if(argv[n_argv] >= '1' && argv[n_argv] <= '4')
		{
			clues[n_clues] = argv[n_argv];
			n_clues++;
		}
		else if((argv[n_argv] < '1' || argv[n_argv] > '4') && argv[n_argv] != ' ')
		{
			write(1, "Error\n", 6);
			exit(0);
		}
		n_argv++;
	}
	if(n_clues != 16 )
		{
			write(1, "Error\n", 6);
			exit(0);
		}
	printf("%s\n", clues);
 }

void asign_arrays(char* clues)
{
	int col1up = clues[0];
	int col2up = clues[1];
	int col3up = clues[2];
	int col4up = clues[3];

}

 int main(int argc, char **argv)
 {
	if (argc == 2)
	{
		remove_spaces(argv[1]);
		return(0);
	}
	else
	{
		write(1, "Error\n", 6);
	}
 }