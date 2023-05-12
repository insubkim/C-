#include <iostream>

using namespace std;

class a{
private :
	const static char	*msg;
public :
	static int k;
	void	hello_c_plus_plus();
};

const char	*a::msg = "Hello C++";

void	a::hello_c_plus_plus()
{
	cout << msg << endl;
}

int	a::k = 99;

int main(){
	a firstclass;
	firstclass.hello_c_plus_plus();
	return (0);
}