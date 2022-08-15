# include "includeAll.h"
using namespace std;
void sort (int *listOfElements, int size) {
	int value = 0, hole = 0;
	for (int i = 1; i < size; ++i) {
		value = listOfElements[i];
		hole = i;

		while (hole > 0 && listOfElements[hole-1] > value) {
			listOfElements[hole] = listOfElements[hole-1];
			hole = hole - 1;
		}
		listOfElements[hole] = value;
	cout << "Iteration #" << i+1 << ":" ;
	for (int k = 0; k < size; ++k)
		cout << listOfElements[k];
	cout << endl;
	}
}
int main () {

   
	int sizeOfList, *listOfElements;
	cout << "Enter Size: " << endl;
	cin >> sizeOfList;
	listOfElements = (int *)malloc(sizeOfList * sizeof(int));
	cout << endl << "Enter elements: " << endl;
	for (int i = 0; i < sizeOfList; ++i)
	  cin >> listOfElements[i];

	cout << endl << "Array before sorting: " << endl;
	for (int i = 0; i < sizeOfList; ++i)
		cout << listOfElements[i];
	cout << endl << endl;

	sort (listOfElements, sizeOfList);

	cout << endl << "Array after sorting: " << endl;
	for (int i = 0; i < sizeOfList; ++i)
		cout << listOfElements[i];

	return 0;
}
