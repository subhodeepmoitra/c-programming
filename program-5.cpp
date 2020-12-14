#include<iostream>
using namespace std;
class Allocation{
public: 
	void* operator new(size_t objectSize);//Overloaded new 
	void operator delete(void* ptr); //Overloaded delete
	/*
	size_t is an unsigned integral data type which is defined in various header files such as:
	<stddef.h> <stdio.h> <stdlib.h> <string.h> <time.h> <wchar.h>
	size_t is a type which is used to represent the size of objects in bytes and is therefore used as the return type by sizeof operator. 
	It is guaranteed to be big enough to contain the size of the biggest object the host system can handle. 
	Basically the maximum permissible size is dependent on the compiler, if the compiler is 32 bit then it is simply a typedef for unsigned int, 
	but if the compiler is 64 bit then it would be a typedef for unsigned long long. 
	The size_t data type is never negative.
	*/
};
void* Allocation::operator new(size_t objectSize)
{
	cout<<"Memory Allocating...\n Memory allocated Successfully\n"<<endl;
	return malloc(objectSize);
}
void Allocation::operator delete(void* ptr)
{
	cout<<"Memory Deallocating...\n Memory de-allocated Successfully"<<endl;
	free(ptr);
}
int main(){
	// call overloaded new from the class
	Allocation *obj = new Allocation();
	// call overloaded delete 
	delete obj;
}