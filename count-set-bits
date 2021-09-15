#include <bits/stdc++.h>
using namespace std;
 
int countSetBits(int n)
{
	int count = 0;
	while(n>0){
		if((n & 1)>0) count++;
		n = n >> 1;
	}
	return count;
}
 
int main()
{
	int i, n, m, k, res, setbit, count=0;
	cin >> n >> m >> k;
	int arr[m+1];
	for (i=0; i<m+1; i++) cin >> arr[i];
	for (i=0; i<m; i++){
		res = arr[i]^arr[m];
		setbit = countSetBits(res);
		if(setbit<=k) count++;
	}
	cout << count << endl;
		
	return 0;
}
