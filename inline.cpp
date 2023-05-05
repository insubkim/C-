#include <iostream>

using namespace std;

inline void hello_world(void);

void	hello_world(void)
{
	cout << "hello world\n";
}

int	main()
{
	hello_world();
	hello_world();
	hello_world();
}