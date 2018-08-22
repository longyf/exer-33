#include <iostream>
#include <vector>
#include "verifySquenceOfBST.h"

using namespace std;
void test1() {
	vector<int> v1 = {5, 7, 6, 9, 11, 10, 8};
	cout<<"test1()"<<endl;
	if (verifySquenceOfBST(v1)) cout<<"True."<<endl;
	else cout<<"False."<<endl;
}

void test2() {
	vector<int> v2 = {7, 4, 6, 5};
	cout<<"test2()"<<endl;
	if (verifySquenceOfBST(v2)) cout<<"True."<<endl;
	else cout<<"False."<<endl;
}

int main() {
	test1();
	test2();
	return 0;
}
