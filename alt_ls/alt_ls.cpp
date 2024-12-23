
#include <iostream>

#define MAXWORDS 8
#define BOLD "\u001b[1m"
#define COLOR_CYAN "\u001b[36m"
#define COLOR_GREEN "\u001b[32m"
#define COLOR_RED "\u001b[31m"
#define COLOR_RESET "\u001b[0m"


void nextLine(int indx)
{
	if((indx % MAXWORDS) == 0 || (indx % MAXWORDS) == MAXWORDS)
	{
		std::cout<<"\n";
	}
}

int main(int argc, char **argv)
{

	if(argc < 2)
	{
		std::cout<<"enter arguments\n";
		exit(1);
	}


	//index the arguments
	std::string args[argc+1];
	int j = 1;
	for(int i = 1; i < argc; i++)
	{
		nextLine(j);
		std::cout<<BOLD<<COLOR_CYAN<<argv[i]<<"["<<j<<"]\t";
		j++;
	}
	std::cout<<COLOR_RESET<<"\n";

	//std::cout<<"Done!"<<std::endl;
	return  0;
}
