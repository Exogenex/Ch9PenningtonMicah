// Micah Pennington
// March 15 2022 ©
// Chapter 9 Program

#include <iostream>
using namespace std;

// Prototypes
int* expandArray(int arr[], int arrSize);

int main() {
	const int SIZE = 5;
	int arr[SIZE] = { 9, 8, 7, 6, 5 };
	int* point;

	point = expandArray(arr, SIZE);

	// Display arr
	for (int i = 0; i < SIZE; i++) { cout << *(arr + i) << ' '; } cout << '\n';

	// Display arr
	for (int i = 0; i < SIZE * 2; i++) { cout << *(point + i) << ' '; } cout << '\n';
	
	return EXIT_SUCCESS;
}

/// <summary>
/// Doubles an array's size
/// </summary>
/// <param name="arr">The array to be expanded</param>
/// <param name="arrSize">The size of the new array</param>
/// <returns>Array of double size with 0's filling the empty space</returns>
int* expandArray(int arr[], int arrSize) {
	int newArrSize = arrSize * 2;
	int* newArr = new int[newArrSize];

	for (int i = 0; i < newArrSize; i++) {
		// If there is an equivelent index in the passed array, set the new array's element to it; else set array element to 0
		if (i < arrSize) { *(newArr + i) = *(arr + i); }
		else { *( newArr + i ) = 0; }
	}

	return newArr;
}