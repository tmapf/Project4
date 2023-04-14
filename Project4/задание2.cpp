#include <iostream>
#include <vector>

using namespace::std;

int main() {
	int n, m, ans;
	n = 14;
	ans = 0;
	m = 0;
	vector <string> a(n);
	a = { "Caattttttttttttttttar", "aaaaaaaaaaaaa", "dissapointed", "about", "those","satanists", "in", "faaront", "of", "his", "house", "asap", "cardigan","scalar", "accomodation" };
	for (int i = 0; i <= n; i++)
		if ((a[i].rfind("a") - a[i].find("a") > m)) {
			m = a[i].rfind("a") - a[i].find("a");
			ans = i;
		}
	cout << a[ans] << " is the answer" << endl;
	return 0;
}

