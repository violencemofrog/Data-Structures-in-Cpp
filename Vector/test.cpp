// test.cpp
// test vector

#include <iostream>
#include "vector.h"
#include "vector.cpp"

using namespace std;

// 打印元素值
void printElem(int& e) {
	cout << e << ' ';
}

// 打印所有元素
void printVector(Vector<int>& vec) {
	cout << "All members:";
	vec.traverse(printElem);
	cout << "\n\n";
}

int main(void) {
	Vector<int> myVector(3);//初始化
	
	/* test code */
	myVector.insert(0,9);
	cout << "insert(0,9)" << endl;
	printVector(myVector);

	
	myVector.insert(0,4);
	cout << "insert(0,4)" << endl;
	printVector(myVector);

	myVector.insert(1,5);
	cout << "insert(1,5)" << endl;
	printVector(myVector);

	myVector.put(1,2);
	cout << "put(1,2)" << endl;
	printVector(myVector);

	cout << myVector.get(2) << "=get(2)" << endl;
	printVector(myVector);

	myVector.insert(3,6);
	cout << "insert(3,6)" << endl;
	printVector(myVector);

	myVector.insert(1,7);
	cout << "insert(1,7)" << endl;
	printVector(myVector);

	myVector.remove(2);
	cout << "remove(2)" << endl;
	printVector(myVector);

	myVector.insert(1,3);
	cout << "insert(1,3)" << endl;
	printVector(myVector);

	myVector.insert(3,4);
	cout << "insert(3,4)" << endl;
	printVector(myVector);

	cout << myVector.size() << "=size()" << endl;
	printVector(myVector);
	
	cout << myVector.disordered() << "=disordered()" << endl;
	printVector(myVector);

	cout << myVector.find(9) << "=find(9)" << endl;
	printVector(myVector);

	cout << myVector.find(5) << "=find(5)" << endl;
	printVector(myVector);

	myVector.sort();
	cout << "sort()" << endl;
	printVector(myVector);

	cout << myVector.disordered() << "=disordered()" << endl;
	printVector(myVector);

	cout << myVector.binSearch(1) << "=binSearch(1)" << endl;
	printVector(myVector);

	cout << myVector.binSearch(4) << "=binSearch(4)" << endl;
	printVector(myVector);

	cout << myVector.binSearch(8) << "=binSearch(8)" << endl;
	printVector(myVector);

	cout << myVector.binSearch(9) << "=binSearch(9)" << endl;
	printVector(myVector);

	cout << myVector.binSearch(10) << "=binSearch(10)" << endl;
	printVector(myVector);

	myVector.uniquify();
	cout << "uniquify()" << endl;
	printVector(myVector);

	cout << myVector.binSearch(9) << "=binSearch(9)" << endl;
	printVector(myVector);
	/* test code */

	return 0;
}