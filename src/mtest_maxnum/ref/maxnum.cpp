#include <stdio.h>
#include <vector>
using namespace std;

int maxnum(vector<int> x){
	if(x.empty()){
	 	return 0;
	}
	int max = x[0];
	for(unsigned int i= 0; i< x.size(); i++){
		if(x[i] > max){
			max = x[i];
		}
	}
	return max;
}
