#include<iostream>
using namespace std;


void printEnv(char* var) {
	int i = 0;

	while (var[i] != 0) 
	{
		if (var[i] == '=') 
		{
			cout << endl << var[i] << endl;
		}
		else if (var[i] == ';') 
		{
			cout << endl;
		}
		else {
			cout << var[i];
		}
		i++;
	}
	cout << endl;
}

bool isSubstr(char* arg, char* env) {
	string s_arg = string(arg);
	string s_env = string(env);

	return (s_env.find(s_arg) != string::npos);
}

void printTheSame(char* arg, char* env[], bool silend_mode) {
	bool found = false;
	while (*env != NULL) 
	{
		if (isSubstr(arg, *env))
		{
			found = true;
			printEnv(*env);
		}
		env++;
	}
	if(!found && !silend_mode){
		cout << arg << " = None" << endl;
	}
}


int main(int argc, char* argv[], char *env[]){
	string silence_tag = "/S";
	bool silend_mode = false;
	int argOFFset = 0;

	if (argc > 1 && silence_tag.compare(argv[1]) == 0)
	{
		silend_mode = true;
		argOFFset++;
	}
	for (int i = 1 + argOFFset; i < argc;  i++) 
	{
		printTheSame(argv[i], env, silend_mode);
	}
}