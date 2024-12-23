
#include <iostream>
#include <string>
#include <sstream>

int main(int argc, char **argv)
{

	if(argc < 2)
	{
		std::cout<<"you have to pass an argument\n";
		exit(1);
	}

	//create container to hold args(files/directories)
	std::string arg2[argc+1];
	int index = -6; 


	//convert the first arg in index to int
	try
	{
		std::stringstream ss(argv[1]);
		ss >> index;
	}catch(...)
	{
		std::cout<<"error: conversion\n";
		exit(1);
	}


	try
	{
		int j = 0;
		for(int i = 2; i<argc; i++)
		{
			arg2[j].assign( argv[i]);
			j++;
		}
		
	}catch(...){
		std::cout<<"error occurred\n";
	}

	std::cout<<arg2[index];

 return 0;
}
