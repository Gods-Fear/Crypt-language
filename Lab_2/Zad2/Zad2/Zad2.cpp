#include <iostream>

using namespace std;

int main(int argc, char* argv[], char* env[])
{
	for (int i = 0; i < argc; i++)
	{
		cout << argv[i] << endl;
	}
	while (*env != NULL)
	{
		cout << *env++ << endl;
	}
	return 0; 

}