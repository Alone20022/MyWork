#include <iostream>
#include <vector>
#include <string>
#include <istream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	int griv = 0;
	int rub = 0;
	int yuan = 0;
	int a = 0;

	cout << "Какая у вас валюта?" << endl;
	cout << "1 - гривня, 2 - рубли, 3 - юань" << endl;

	while (cin >> a) {

		if (a == 1) {

			cout << "вы выбрали гривни, во что хотите перевести? 1 - рубли, 2 - гривни" << endl;

			int b = 0;

			cin >> b;

			if (b == 1) {

				cout << "ваша сумма" << endl;

				int per_1 = 0;

				cin >> per_1;

				cout << endl;

				per_1 = per_1 * 3;

				cout << per_1;

				return 0;
			}
			else if (b == 2); {

				cout << "ваша сумма" << endl;

				int per_2 = 0;

				cin >> per_2;
				cout << endl;

				per_2 = per_2 * 2;

				cout << per_2;

				return 0;
			}

			return 0;

		}

		if (a == 2) {

			cout << "вы выбрали рубли, во что хотите перевести? 1 - гривни, 2 - юань" << endl;

			int z = 0;

			cin >> z;

			if (z == 1) {

				cout << "ваша сумма" << endl;

				int per_3 = 0;

				cin >> per_3;
				cout << endl;

				per_3 = per_3 / 3;

				cout << per_3;


				return 0;
			}
			else if (z == 2); {

				cout << "ваша сумма" << endl;

				int per_4 = 0;

				cin >> per_4;
				cout << endl;

				per_4 = per_4 / 2;

				cout << per_4;

				return 0;
			}






			return 0;
		}

		if (a == 3) {

			cout << "вы выбрали юань, во что хотите перевести? 1 - рубли, 2 - гривни" << endl;

			int o = 0;

			cin >> o;

			if (o == 1) {

				cout << "ваша сумма" << endl;

				int per_5 = 0;

				cin >> per_5;
				cout << endl;

				per_5 = per_5 * 3;

				cout << per_5;

				return 0;
			}
			else if (o == 2); {

				cout << "ваша сумма" << endl;

				int per_6 = 0;

				cin >> per_6;
				cout << endl;

				per_6 = per_6 * 2;

				cout << per_6;

				return 0;
			}
		}
		return 0;
	}
	return 0;
}