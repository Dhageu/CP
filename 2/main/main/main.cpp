#include <iostream>
#include <time.h>
#include <string>
using namespace std;

template <class T> void t_sort(T*& m, T left, T right) {

}

template <class T> void t_sort(T)

void m_sort(int*& m, int left, int right) {
	if (left > right) return;
	int p = m[(left + right) / 2];
	int i = left;
	int j = right;
	while (i <= j) {
		while (m[i] < p) i++;
		while (m[j] > p) j--;
		if (i <= j) {
			int c = m[i];
			m[i] = m[j];
			m[j] = c;
			i++;
			j--;
		}
	}
	m_sort(m, left, j);
	m_sort(m, i, right);
}

void m_sort(string*& s, int n) {
	string c;
	int i = 0;
	while (i <= (n - 2)) {
		if (s[i][0] > s[i + 1][0]) {
			c = s[i];
			s[i] = s[i + 1];
			s[i + 1] = c;
			i = 0;
			continue;
		}
		if (s[i][0] == s[i + 1][0] && s[i]!=s[0]) {
			int k = 0;
			while (s[i][k] == s[i + 1][k]) {
				k++;
			}
			if (s[i][k] > s[i + 1][k]) {
				c = s[i];
				s[i] = s[i + 1];
				s[i + 1] = c;
				i = 0;
				continue;
			}
		}
		i++;
	}

}

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Russian");
	int n;
	cin >> n;
	int* m = new int[n];
	for (int i = 0; i < n; i++) {
		m[i] = rand() % 100;
	}
	for (int i = 0; i < n; i++) {
		cout << m[i] << " ";
	}
	cout << endl;
	m_sort(m, 0, n - 1);
	for (int i = 0; i < n; i++) {
		cout << m[i] << " ";
	}

	delete[] m;
	cout << endl;
	cin >> n;
	string* s = new string[n];
	cout << "Введите " << n << " строк" << endl;
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}
	m_sort(s, n);
	for (int i = 0; i < n; i++) {
		cout << s[i] << " ";
	}
	delete[] s;
}