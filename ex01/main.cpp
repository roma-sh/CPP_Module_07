#include "header.hpp"

int main(void)
{
	std::cout << std::endl;
	std::cout <<std::endl<< "\033[32m########### int test: ##############\033[0m" << std::endl;
	int intArray[] = {1, 2, 3, 4, 5};
	std::cout << "Original int array: "<<std::endl;
	iter(intArray, 5, printElement<int>);
	std::cout<<std::endl;
	std::cout << "Doubled int array: "<<std::endl;
	iter(intArray, 5, doubleValue<int>);
	iter(intArray, 5, printElement<int>);
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "\033[32m########### string test: ##############\033[0m" << std::endl;
	std::string stringArray[] = {"Hello", "this", "is", "my", "message"};
	std::cout << "Printing string array: "<<std::endl;
	iter(stringArray, 5, printElement<std::string>);
	std::cout << std::endl;

	return (0);
}
