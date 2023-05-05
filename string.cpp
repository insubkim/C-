#include <iostream>
#include <string>

using namespace std;

void	modyfing_string(void){
	string word = "?ate";
	word[0] = 'm';
	cout << word << endl;// mate\n
}

void	string_arr(void)
{
	string arr[5];
	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];	
	}
	for (int i = 0; i < 5; i++)
	{
		cout << "arr = " << arr[i] <<endl;
	}
}

int	main()
{

	return (0);
}