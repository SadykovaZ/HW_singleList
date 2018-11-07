#include"Header.h"
void main() 
{	
	SingleLinkedList<int> v;
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.print();
	cout << endl;
	v.erase(1);
	v.print();
	SingleLinkedList<int> v1(move(v));
	v1.print();
	/*SingleLinkedList<int> v1;
	v1 = v;
	v1.print();*/
	SingleLinkedList<int> v2;
	v2 = v1;
	v2.print();
	system("pause");	
}
