
#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <cstdlib>

int main(int argc, char **argv)
{

	if(argc < 2)
	{
		std::cout<<"you have to pass an argument\n";
		exit(1);
	}

	//create a vector of int and string that stores value and index
	std::vector<std::pair<int, std::string>> args;
	std::string arg2[argc-1];

	int index = std::strtol(argv[1], nullptr, 10); //contain the index
	std::cout<<"chosen index : "<<index<<std::endl;
	try
	{
		for(int i = 1; i<argc; i++)
		{
			args.push_back({i, argv[i]});
			arg2[i] = argv[i];
		}
		
	}catch(...){
		std::cout<<"error occurred\n";
	}

	//print content of args
	//for(const auto &[num, str] : args)
	//{
	//	std::cout<<"index : "<<num<<":  "<<str<<std::endl;
	//}

	std::cout<<arg2[index];





 return 0;
}
