#include <iostream>

using namespace std;

void	new_alloc(void)
{
	int	*pn = new int[10];
	pn[0] = 99;
	pn[1] = 101;
	
	cout << pn[0] << " " << pn[1] << endl;
	delete [] pn;
	pn = 0;
}

int	main()
{
	new_alloc();
	system("leaks test");
	return (0);
}