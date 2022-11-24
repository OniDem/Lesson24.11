#include <iostream>
#include <locale>

using namespace std;

void W1() {
	int n;
	cout << "Введите размер массива" << endl;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Введите " << i + 1 << " значение" << endl;
		cin >> arr[i];
	}
	int res1 = 0;
	for (int i = 0; i < n; i++)
	{
		res1 += arr[i] * arr[i];
	}
	cout << res1;
}
void W2() {
	int a;
	int b;
	int res;
	cout << "Введите первый аргумент" << endl;
	cin >> a;
	cout << "Введите второй аргумент" << endl;
	cin >> b;
	int* arr = new int[b];
	for (int i = 1; i < b+1; i++)
	{
		res = a * i;
		cout << res << " ";
	}
}
void W3() {
	int n;
	cout << "Введите число" << endl;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = n - i;
		cout << arr[i] << " ";
	}
}
void W4() {
	int a;
	int b;
	cout << "Введите первое число" << endl;
	cin >> a;
	cout << "Введите второе число" << endl;
	cin >> b;
	int res= 0;
	if (a = b)
		cout << "Числа равны";
	if (a < b) {
		for (int i = a; i < b + 1; i++)
		{
			res += i;
		}
	}
	if (a > b) {
		for (int i = b; i < a + 1; i++)
		{
			res += i;
		}
	}
	cout << res;
}
void W5() {
	int a;
	cout << "Введите число"<<endl;
	cin >> a;
	int t = 3;
	int f = 5;
	int res = 0;
	for (int i = 0; i < 100; i++)
	{
		if (t * i < a)
			res += t * i;
		if (f * i < a)
			res += f * i;
	}
	cout << res;
}
void W6() {
	int date;
	cout << "Введите дату" << endl;
	cin >> date;
	cout << (date - 1) / 100 + 1;
}
int main()
{
	setlocale(LC_ALL, "ru");
	W6();
}