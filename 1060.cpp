// 1060.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
/*#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int>list(n);
	for (int i = 0; i < n; i++)cin >> list[i];
	sort(list.begin(), list.end());
	if (n == 1) {
		if (list[0] > 1)cout << 1;
		return 0;
	}
	for (int i = n - 1; i >= 0; i--) {
		int count = 0;
		for (int e : list) {
			if (e > list[i]) {
				count++;
			}
		}
		if (count >= list[i])cout << (count < list[i] ? count : list[i]);

	}
    return 0;
}

*/
#include<iostream>
#include <algorithm>
using namespace std;
int a[1000000];
bool cmp1(int a, int b) {
	return a > b;
}
int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> a[i];
	sort(a + 1, a + n + 1, cmp1);
	int ans = 0, p = 1;
	while (ans <= n && a[p] > p) {
		ans++;
		p++;
	}
	cout << ans;
	return 0;
}