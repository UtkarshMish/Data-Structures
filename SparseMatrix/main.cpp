#include "iostream"
using namespace std;
template <class T>
class items
{
public:
	T x;
	T y;
	T value;
};
class sparse
{
private:
	int m, n, size;
	items<int> *Elements;

public:
	sparse(int i, int j, int size)
	{
		this->m = i;
		this->n = j;
		this->size = size;
		Elements = new items<int>[size];
	}

	friend istream &operator>>(istream &is, sparse &s);
	friend ostream &operator<<(ostream &os, sparse &s);
	~sparse()
	{
		free(Elements);
	}
	sparse *operator+(sparse &s);
};

sparse *sparse::operator+(sparse &s)
{

	if (m != s.m || n != s.n)
	{
		cout << "cannot be Added !!!" << endl;
	}
	else
	{
		sparse *sum = new sparse(m, n, size + s.size);
		int i = 0, j = 0, k = 0;
		while (i < size && j < s.size)
		{
			if (Elements[i].x < s.Elements[j].x)
				sum->Elements[k++] = Elements[i++];
			else if (Elements[i].x > s.Elements[j].x)
				sum->Elements[k++] = s.Elements[j++];
			else
			{
				if (Elements[i].y < s.Elements[j].y)
					sum->Elements[k++] = Elements[i++];
				else if (Elements[i].y > s.Elements[j].y)
					sum->Elements[k++] = s.Elements[j++];
				else
				{
					sum->Elements[k] = Elements[i];
					sum->Elements[k++].value = Elements[i++].value + s.Elements[j++].value;
				}
			}
		}
		for (; i < size; i++)
			sum->Elements[k++] = Elements[i];
		for (; j < s.size; j++)
			sum->Elements[k++] = s.Elements[j];
		sum->size = k;
		return sum;
	}
	return NULL;
}
istream &operator>>(istream &is, sparse &s)
{
	for (int i = 0; i < s.size; i++)
	{
		cout << i + 1 << ") Enter i, j : ";
		cin >> s.Elements[i].x >> s.Elements[i].y;
		cout << endl;
		if (s.Elements[i].x < s.m && s.Elements[i].y < s.n)
		{
			cout << "Enter Value:";
			cin >> s.Elements[i].value;
			cout << endl;
		}
		else
		{
			cout << "invalid number !!!";
			--i;
		}
	}
	return is;
}

ostream &operator<<(ostream &os, sparse &s)
{
	int k = 0;
	cout << "Total :--> ";
	cout << s.m << "      " << s.n << "      " << s.size << endl;
	cout << "MATRIX :-->" << endl;
	for (int i = 0; i < s.m; i++)
	{
		for (int j = 0; j < s.n; j++)
		{
			if (s.Elements[k].x == i && s.Elements[k].y == j)
				cout << s.Elements[k++].value << "     ";
			else
				cout << 0 << "      ";
		}

		cout << endl;
	}
	return os;
}
int main()
{
	int i, j, size;
	cout << "Enter dimensions i and j: ";
	cin >> i >> j;
	cout << endl;
	cout << "Enter total number of element: ";
	cin >> size;
	cout << endl;
	if (i * j < size)
	{
		cout << "Matrix not valid !!!" << endl;
	}
	else
	{
		sparse *matrix = new sparse(i, j, size);
		cin >> *matrix;
		cout << *matrix;
		cout << "SUM with itself:-->" << endl;
		cout << *(*matrix + *matrix);
		free(matrix);
	}
	return 0;
}