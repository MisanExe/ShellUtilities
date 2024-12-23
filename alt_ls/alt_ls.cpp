
#include <iostream>

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
	for(int i = 2; i < argc; i++)
	{
		std::cout<<argv[i]<<"["<<j<<"]"<<std::endl;
		j++;
	}

	std::cout<<"Done!"<<std::endl;
	return  0;
}
