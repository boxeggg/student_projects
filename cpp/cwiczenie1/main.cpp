#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void bubbleSort(vector<int> &v) {
	int n = v.size();

	for (int i = 0; i < n - 1; i++){
		for(int j = 0; j < n - 1; j++){
			if(v[j] > v[j+1]){
				int temp = v[j];
				v[j] = v[j+1];
				v[j+1] = temp;
			}
		}
	}
}
