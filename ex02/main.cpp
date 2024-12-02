#include "Array.hpp"


int main(void)
{
	std::cout<<std::endl<< "### integers test ####" <<std::endl;
	try
	{
		Array<int> number(3);
		number.setElements(1, 0);
		number.setElements(545, 1);
		number.setElements(42, 2);
		for(int i =0;i < 3; i++)
			std::cout << "number["<<i<<"]: " << number[i] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout<<std::endl<< "### negative number of elements test ####" <<std::endl;
	try
	{
		Array<int> number(-5);
		for(int i =0;i < 3; i++)
			std::cout << "number["<<i<<"]: " << number[i] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout<<std::endl<< "### negative index ####" <<std::endl;
	try
	{
		Array<int> number(5);
		std::cout << "number["<<0<<"]: " << number[0] << std::endl;
		std::cout << "number["<<-19<<"]: " << number[-19] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout<<std::endl<<std::endl<< "### characters test ####" <<std::endl;
	try
	{
		Array<char> chara(4);
		chara.setElements('A', 0);
		chara.setElements('B', 1);
		chara.setElements('C', 2);
		chara.setElements('D', 3);
		for(int i =0; i < 4; i++)
		{
			std::cout << "chara["<<i<<"]: " << chara[i] << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
