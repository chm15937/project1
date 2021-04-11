#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
	int n = atoi(argv[1]);
	for(int decimal = 0; decimal < pow(2, n); decimal++)
	{
		int binary[n] = {0};
		int position = 0;
		int decimal_ = decimal;
		while (1)
		{
			binary[position] = decimal_ % 2;
			decimal_ /= 2;

			position++;
			
			if (decimal_ == 0)
			break;
		}
		
		for (int i = n - 1; i >= 0; i--)
		 	cout << binary[i];
		
		cout << " ";

		int count = 0;
		for (int i = n - 1; i >= 0; i--)
		{
			if (binary[i] == 1)
				count++;
		}
		if (count % 2 == 0)
			cout << 1;
		else
			cout << 0;

		cout << endl;
	}
	return 0;
}


