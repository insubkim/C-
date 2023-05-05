#include <iostream>

using namespace std;

void	change(int &i)
{
	i++;
}

int	main()
{
	int	i = 1;
	change(i);
	cout << i <<endl;
}