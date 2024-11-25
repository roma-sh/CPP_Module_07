
#include "header.hpp"



// int	main(void)
// {
// 	std::cout <<std::endl<< "\033[32m########### int test: ##############\033[0m" << std::endl;
// 	int a = 5;
// 	int b = 9;
// 	std::cout <<"The min is: " << min<int>(a, b) << std::endl;
// 	std::cout <<"The max is: " << max<int>(a, b) << std::endl;
// 	std::cout<< "Before swap: a: "<< a << ", b: "<< b <<std::endl;
// 	swap<int>(a, b);
// 	std::cout<< "After swap:  a: "<< a << ", b: "<< b <<std::endl<<std::endl;
// 	// --------------------------------------------------------------
// 	std::cout << "\033[32m########### float test: ##############\033[0m" << std::endl;
// 	float c = 15.15;
// 	float d = 7.111;
// 	std::cout <<"The min is: " << min<float>(c, d) << std::endl;
// 	std::cout <<"The max is: " << max<float>(c, d) << std::endl;
// 	std::cout<< "Before swap: a: "<< c << ", b: "<< d <<std::endl;
// 	swap<float>(c, d);
// 	std::cout<< "After swap:  a: "<< c << ", b: "<< d <<std::endl;
// 	// --------------------------------------------------------------

// 	return (0);
// }


int main( void ) {
int a = 2;
int b = 3;
::swap( a, b );
std::cout << "a = " << a << ", b = " << b << std::endl;
std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
std::string c = "chaine1";
std::string d = "chaine2";
::swap(c, d);
std::cout << "c = " << c << ", d = " << d << std::endl;
std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
return 0;
}
