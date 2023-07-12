

#include <stdio.h>
#include <stdlib.h>

char    *ft_strjoin(int size, char **strs, char *sep);

int	main(void)
{
	char *final_str[3] = {"Hello", "World", "42SG"};
	char *test_str[1] = {"Hello"};
	char *sep = ",";
	char *testing;

	testing = ft_strjoin(3, final_str, sep);
	printf("%s\n", testing);
	free(testing);

	testing = ft_strjoin(1, test_str, sep);
	printf("%s\n", testing);
	free(testing);
	return (0);
}
