#include <iostream>
int main()
{
	unsigned int a, b, c;
	std::cin >> a >> b >> c;
	if(c==sqrt(a*a+b*b))
	{
		std::cout << "YES";
	}
	else { std::cout << "NO"; }
	return 0;

}