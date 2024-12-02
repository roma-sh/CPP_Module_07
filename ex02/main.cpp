#include "Array.hpp"


// Subject Test:

// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }




// My test:


int main(void)
{
	std::cout<<std::endl<< "### integers test ####" <<std::endl;
	try
	{
		Array<int> number(3);
		number[0] = 999;
		number.setElements('A', 1);
		number.setElements(42, 2);
		for(int i =0;i < 3; i++)
			std::cout << "number["<<i<<"]: " << number[i] << std::endl;
		std::cout<<"Size of this array is: " << number.size() << std::endl;
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
		chara[0] = 'A';
		chara.setElements('B', 1);
		chara.setElements('C', 2);
		chara.setElements('D', 3);
		for(int i =0; i < 4; i++)
		{
			std::cout << "chara["<<i<<"]: " << chara[i] << std::endl;
		}
		std::cout<<"Size of this array is: " << chara.size() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
