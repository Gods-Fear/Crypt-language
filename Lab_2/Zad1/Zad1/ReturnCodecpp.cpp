#include<iostream>


int main(int argc, char * argv[])
{
	int silent_mode = false;
	int return_code = 11;
	bool has_par = false;

	for (int i = 1; i < argc; i++)
	{
		if (argv[i][0] == '/')
		{
			if (argv[i][1] == 's' || argv[i][1] == 'S')
			{
				silent_mode = true;
			}
		}
		else
		{
			if (!isdigit(argv[i][0]))
			{
				return_code = 12;
				has_par = true;
			}
			else if (argv[i][1])
			{
				return_code = 13;
				has_par = true;
			}
			else
			{
				return_code = argv[i][0] - '0';
				has_par = true;
			}
		}
	}
	

	if (!silent_mode)
		std::cout << return_code << std::endl;
	return return_code;
	

}
