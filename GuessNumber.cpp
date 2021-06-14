#include "../../std_lib_facilities.h"
int main()
{
	int min, max, mid, num = 0;
	char a;
	cout << "Input min and then max of your range \n";
	cin >> min >> max;
	
	while (max - min + 1 > 1) {
		mid = (max + min) / 2;
		cout << "Is it less than or equal to " << mid << " y/n \n";
		cin >> a;
		if (a != 'y' && a != 'n')
			cin >> a;
		if (a == 'y') {
			max = mid;
		}
		else {
			min = mid + 1;
		}
	}
	min == max;
	cout << "Your number is " << min;
}