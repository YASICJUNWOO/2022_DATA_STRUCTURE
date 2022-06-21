#include <iostream>
#include<cmath>
using namespace std;

int main() {

	int test;
	cin >> test;
	

	for (int i = 0;i<test;i++) {

		int n;
		int Ksum = 0;
		int K = 0, C = 0, J = 0;
		int Csum = 0;
		int Jsum = 0;
		cin >> n;

		int* bank = new int[n]();

		for (int i = 0;i < n;i++) {
			cin >> bank[i];
			if (bank[i] == 0) continue;
			else {
				if (i % 3 == 0) {
					Ksum += bank[i];
					K++;
				}
				else if (i % 3 == 1) {
					Jsum += bank[i];
					J++;
				}
				else if (i % 3 == 2) {
					Csum += bank[i];
					C++;
				}
			}
		}

		cout << Ksum<<' ' << Jsum <<' ' << Csum<<'\n';
		if (K != 0)cout << floor(Ksum / K) << ' ';
		else cout << '0' << ' ';
		if (J != 0) cout<<floor(Jsum / J) << ' ';
		else cout << '0' << ' ';
		if(C!=0) cout<<floor(Csum / C) << '\n';
		else cout << '0' << ' ';
	 }

}