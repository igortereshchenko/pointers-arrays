#include <iostream>
using namespace std;


int main()
{
	//defaults
	int count_of_elements=0;

	//inputs
	cout<<"Enter count of elements:";
	cin>>count_of_elements;
	cout<<"\n";

	//validation
	if (count_of_elements<=0){
		cout<<"Error in count of elements, bye";
	}

	//calculation

	void *pointer_array=NULL;
	pointer_array=new int[count_of_elements];

	cout<<"Enter each element"<<"\n";
	for (int i=0;i<count_of_elements;i++){
		cout<<"element["<<i<<"]=";
		cin>>*((double*)pointer_array+i);
	}

	//output
	cout<<"Elements: ";
	for (int i=0;i<count_of_elements;i++)
		cout<<*((double*)pointer_array+i)<<" ";


	//memory free
	delete [] (int*)pointer_array;

	getchar();
	return 0;

}