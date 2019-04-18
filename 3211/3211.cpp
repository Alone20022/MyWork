#include <iostream>
#include <istream>
#include <string>

using namespace std;

int main()
{

	setlocale(00, "");

	cout << "Выберите вашу валюту: 1 - рубли, 2 - гривни, 3 - юань" << endl;

	int val = 0;
	int z = 0;
	int i = 0;
	int c = 0;

	cin >> val;

	switch (val) {

	case 1:

		cout << "Вы выбрали валюту - рубли" << endl;
		cout << "В какую валюту хотите перевести: 1 - гривни, 2 - юань" << endl;

		cin >> i;

		cout << endl;

		if (i == 1) {

			cout << "Ваша сумма - ";

			cin >> i;

			cout << endl;

			i = i / 3;

			cout << i << endl;
			break;
		}
		else if (i == 2) {

			cout << "Ваша сумма - ";

			cin >> i;

			cout << endl;

			i = i / 5;

			cout << i << endl;
			break;
		}
		else
			cout << "Укажите только те значения, которые вам указаны" << endl;

		break;

	case 2:

		cout << "Вы выбрали валюту - гривни" << endl;
		cout << "В какую валюту хотите перевести: 1 - рубли, 2 - юань" << endl;

		cin >> z;

		cout << endl;

		if (z == 1) {

			cout << "Ваша сумма - ";

			cin >> z;

			cout << endl;

			z = z * 3;

			cout << z << endl;

			break;

		}
		else if (z == 2) {

			cout << "Ваша сумма - ";

			cin >> z;

			cout << endl;

			z = z / 3;

			cout << z << endl;
			break;

		}
		else
			cout << "Укажите только те значения, которые вам указаны" << endl;

		break;

	case 3:

		cout << "Вы выбрали валюту - юань" << endl;
		cout << "В какую валюту хотите перевести: 1 - рубли, 2 - гривни" << endl;

		cin >> c;

		cout << endl;

		if (c == 1) {

			cout << "Ваша сумма - ";

			cin >> c;

			cout << endl;

			c = c * 5;

			cout << c << endl;
			break;
		}
		else if (c == 2) {

			cout << "Ваша сумма - ";

			cin >> c;

			cout << endl;

			c = c * 5;

			cout << c << endl;
			break;
		}

		else
			cout << "Укажите только те значения, которые вам указаны" << endl;
		break;
	}
} 
   



