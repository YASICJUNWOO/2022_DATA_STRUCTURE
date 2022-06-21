#include <iostream>
#include <string>
using namespace std;

class Array {
public:
	int  n = 0;
	int* arr;

	Array(int size) {
		this->n = 0;
		this->arr = new int[size];
		for (int i = 0;i<size;i++) {
			arr[i] = 0;
		}
	}

	void at(int idx) {
		
		if (arr[idx] == 0){
			cout << '0' << '\n';
		}
		else cout<< arr[idx]<<'\n';
	}

	void set(int idx, int x) {
		if (arr[idx] == 0) {
			cout << '0' << '\n';
		}
		else arr[idx] = x;
	}

	void add(int idx, int num) {
		
		if (arr[idx] == 0) {
			if (arr[0] == 0) {
				arr[0] = num;
			}
			else {
				for (int i = idx;i >= 0;i--) {
					if (arr[i] != 0) {
						arr[i + 1] = num;
						break;
					}
				}
			}
		}
		else {
			for (int s = n + 1 ;s > idx;s--) {
				arr[s] = arr[s - 1];
			}
			arr[idx] = num;
		}

		this->n += 1;
	}

	void remove(int idx) {
		if (arr[idx] == 0) cout << '0'<<'\n';
		else {
			cout << arr[idx]<<'\n';
			for (int s = idx ;s < n;s++) {
				arr[s] = arr[s + 1];
			}
			this->n -= 1;
			
		}
		
		
	}

	void printArray() {
		if (arr[0] == 0) {
			cout << '0';
		}
		else {
			int t = 0;
			while (arr[t] != 0) {
				cout << arr[t] << ' ';
				t += 1;
			}
		}
		cout << '\n';
	}
};

int main() {

	int test;
	cin >> test;

	string str;

	Array arr(10000);

	for (int t = 0;t < test;t++) {
		int i, x;
		cin >> str;

		if (str == "at") {
			cin >> i;
			arr.at(i);
		}
		else if (str == "set") {
			cin >> i >> x;
			arr.set(i, x);
		}
		else if (str == "add") {
			cin >> i >> x;
			arr.add(i, x);
		}
		else if (str == "remove") {
			cin >> i;
			arr.remove(i);
		}
		else if (str == "printArray") {
			arr.printArray();
		}
	}
}