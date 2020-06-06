#include <iostream>
#include "map"
using namespace std;

class customMatrix
{
private:
	int *matrix;

public:
	int size;
	int TYPE;
	map<int, string> matrixTypes = {
			{1, "diagonal"},
			{2, "lower-triangular"},
			{3, "upper-triangular"},
			{4, "symmetric"},
			{5, "toeplitz"}};
	customMatrix(int sz, int TYPE)
	{
		size = sz;
		this->TYPE = TYPE;
		switch (TYPE)
		{
		case 1:
			matrix = new int[sz];
			break;
		case 2:
		case 3:
		case 4:
			matrix = new int[(sz * (sz + 1) / 2)];
			break;
		case 5:
			matrix = new int[(2 * sz - 1)];
			break;
		default:
			cout << "Invalid CHOICE Try Again Later !!!" << endl;
			exit(0);
		}
		cout << "TYPE IS " << matrixTypes[TYPE] << endl;
	}
	void getElements()
	{
		switch (TYPE)
		{
		case 1:
			for (int i = 0; i < size; i++)
			{
				cout << "Enter Element matrix[" << i + 1 << "]"
						 << "[" << i + 1 << "]: ";
				cin >> matrix[i];
			}
			break;
		case 2:

			for (int i = 0, k = 0; i < size; i++)
			{
				for (int j = 0; j < size; j++)
					if (j <= i)
					{
						cout << "Enter Element matrix[" << i + 1 << "]"
								 << "[" << j + 1 << "]: ";
						cin >> matrix[k];
						k++;
					}
			}
			break;
		case 3:
			for (int i = 0, k = 0; i < size; i++)
			{
				for (int j = 0; j < size; j++)
					if (i <= j)
					{
						cout << "Enter Element matrix[" << i + 1 << "]"
								 << "[" << j + 1 << "]: ";
						cin >> matrix[k];
						k++;
					}
			}
			break;
		case 4:
			for (int i = 0, k = 0; i < size; i++)
			{
				for (int j = 0; j < size; j++)
					if (j <= i)
					{
						cout << "Enter Element matrix[" << i + 1 << "]"
								 << "[" << j + 1 << "]: ";
						cin >> matrix[k];
						k++;
					}
					else
						break;
			}
			break;
		case 5:
			int k = 0;
			for (int i = 0; i < size; i++, k++)
			{
				cout << "Enter Element matrix[" << 1 << "]"
						 << "[" << i + 1 << "]: ";
				cin >> matrix[k];
			}
			for (int i = 1; i < size; i++, k++)
			{
				cout << "Enter Element matrix[" << i + 1 << "]"
						 << "[" << 1 << "]: ";
				cin >> matrix[k];
			}
			break;
		}

		cout << "Matrix Successfully Saved ." << endl;
	}
	void DisplayMatrix()
	{
		switch (TYPE)
		{
		case 1:
			for (int i = 0; i < size; i++)
			{
				for (int j = 0; j < size; j++)
				{
					if (i == j)
						cout << matrix[i] << "      ";
					else
						cout << 0 << "      ";
				}
				cout << endl;
			}
			break;
		case 2:
			for (int i = 0, k = 0; i < size; i++)
			{
				for (int j = 0; j < size; j++)
				{
					if (j <= i)
					{
						cout << matrix[k] << "      ";
						k++;
					}
					else
					{
						cout << 0 << "      ";
					}
				}
				cout << endl;
			}
			break;
		case 3:
			for (int i = 0, k = 0; i < size; i++)
			{
				for (int j = 0; j < size; j++)
				{
					if (i <= j)
					{
						cout << matrix[k] << "      ";
						k++;
					}
					else
					{
						cout << 0 << "      ";
					}
				}
				cout << endl;
			}
			break;
		case 4:
			for (int i = 1; i <= size; i++)
			{
				for (int j = 1; j <= size; j++)
				{
					cout << matrix[(i * (i - 1)) / 2 + j - 1] << "        ";
				}
				cout << endl;
			}
			break;
		case 5:
			for (int i = 0; i < size; i++)
			{
				for (int j = 0; j < size; j++)
				{
					if (i <= j)
						cout << matrix[j - i] << "     ";
					else if (j < i)
						cout << matrix[((size) + i - j) - 1] << "     ";
				}
				cout << endl;
			}
			break;
		default:
			cout << "Invalid CHOICE Try Again Later !!!" << endl;
			exit(0);
		}

		cout << endl;
	}

	~customMatrix()
	{
		free(matrix);
	}
};
int main()
{
	int n;
	cout << "Enter Size of Matrix: " << endl;
	cin >> n;

	customMatrix mtrx = customMatrix(n, 5);
	mtrx.getElements();
	mtrx.DisplayMatrix();
	cout << "Dimension: " << mtrx.size << "*" << mtrx.size;
	return 0;
}
