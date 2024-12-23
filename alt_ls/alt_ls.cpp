
#include <iostream>

#define MAXWORDS 8

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
		std::cout<<argv[i]<<"["<<j<<"]\t";
		j++;
	}
	std::cout<<"\n";

	//std::cout<<"Done!"<<std::endl;
	return  0;
}
