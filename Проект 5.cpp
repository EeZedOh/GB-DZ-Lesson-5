#include <iostream>


using namespace std;

void start()
{
	cout << "//====================================HomeWork====================================//\n\n";
}


//Задание №1
double mass[321];
bool dz1(double mass[], int size)
{
	if (mass == nullptr || size == 0)
		return false;

	for (size_t a = 0; a < size; a++)

		cout << a << " : " << mass[a] << " ";

	cout << endl;
	return true;

}


//Задание №2
void dz2(int* a, const int b)
{
	for (int z = 0; z < b; z++)
		if (a[z]) a[z] = 0;
		else a[z] = 1;
}

//Задание №3
void dz3(int* a, const int b)
{
	for (int z = 0; z < b; z++)
		cout << a[z] << " \n";
}


//Задание №4
void dz4(int array[], int size)
{
	int temp = array[0];
	int temp1 = array[size - 1];

	for (int i = 1; i < size; i++)
	{
		array[0] = array[i];
		array[i] = temp;
		temp = array[0];
	}
	array[0] = temp1;
}


//Задание №5
bool dz5(int* mass, int size)
{

	int t;
	int y;
	for (int i = 0; i < size; i++) {
		t = 0;
		y = 0;

		int m1;
		for (m1 = 0; m1 < i; m1++) {
			t += mass[m1];
		}

		for (int m2 = m1; m2 < size; m2++) {
			y += mass[m2];
		}

		if (t == y) {
			cout << "Soda" << endl;
			return true;
		}

	}

	cout << "Limon" << endl;
	return false;
}





int main()
{
	//#1
	{
		start();
		dz1(mass, 321);
	}


	//#2
	{
		start();



		const int v = 10;
		int x[v] = { 1, 1, 0, 0, 1, 0, 1, 1, 0, 0 };

		dz3(x, v);
		dz2(x, v);
		dz3(x, v);


	}

	//#3
	{
		start();



		int array[8];
		array[0] = 1;
		for (int i = 1; i < 8; i++) {
			array[i] = array[i - 1] + 3;

		}
		dz3(array, 8);
	}



	//#4
	{
		start();



		int array[8];
		array[0] = 1;
		for (int i = 1; i < 8; i++) {
			array[i] = array[i - 1] + 3;

		}
		dz3(array, 8);
		dz4(array, 8);
		dz3(array, 8);

	}



	//#5
	{
		start();



		int array[8];
		array[0] = 1;
		for (int i = 1; i < 8; i++) {
			array[i] = array[i - 1] + 3;

		}
		dz3(array, 8);
		dz5(array, 8);


	}
	return 0;
}