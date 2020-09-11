#include <iostream> 
#include <ctime>;
using namespace std;
////void _fabs(int *a) {
////	*a = fabs(*a);
////	cout << *a << endl;
////}
//void fillArray(int *arr) {
//	srand(time(NULL));
//	for (int i = 0; i < 10; i++)
//	{
//		*(arr + i) = rand()%51;
//		cout << *(arr + i)<< endl;
//	}
//}
//void printArr(int *arr) {
//	for (int i = 2; i < 10; i+=2)
//	{
//		
//		
//			cout << *(arr + i-2)<<endl;
//		
//	}
//}
//void FindSummAB(int *pA,int *pB,int *pC,const int size) {
//	int summ = 0;
//	for (int i = 0; i < size; i++)
//	{
//		*(pC + i) = *(pA + i) + *(pB + i);
//		cout << *(pC + i)<<endl;
//	}
//}
//void findMinNum(int *a,int *b) {
//	if (*a<*b)
//	{
//		cout << *a << endl;
//	}
//	else if (*a>*b)
//	{
//		cout << *b << endl;
//	}
//	else {
//		cout << *b << "=" << *a << endl;
//	}
//}
void swapNumbs(int &refa,int &refb) {
	int c = refa;
	refa = refb;
	refb = c;
}
int main(){
	srand(time(NULL));
	/*int num = -5;
	int *pa = &num;
	_fabs(pa);*/
	/*int arr[10];
	fillArray(arr);
	cout << "====================================" << endl;
	int* p = &arr[2];
	printArr(p);
	int A[5] = { 5,4,3,2,1 };
	int B[5] = { 1,2,3,4,5 };
	int C[5];
	const int size = 5;
	int *pA = A;
	int *pB = B;
	int *pC = C;
	cout << "====================================" << endl;
	FindSummAB(pA,pB,pC,size);
	cout << "====================================" << endl;
	int a = 5;
	int b = 6;
	int* pa = &a;
	int* pb = &b;
	findMinNum(pa, pb);*/
	/*int a = 1;
	int b = 2;
	int c = 3;
	int& refa=a;
	int& refb = b;
	int& refc = c;
	cout << "DOBUTOK=" << (float)(refa * refb * refc)<<endl;
	cout << "SEREDNYE=" << (float)(refa + refb + refc)/3<<endl;
	if (refa<refb&&refa<refc)
	{
		cout << "MENSHE =" << refa << endl;
	}
	else if (refb< refa && refb < refc)
	{
		cout << "MENSHE =" << refb << endl;
	}
	else if (refc < refa && refc < refb)
	{
		cout << "MENSHE =" << refc << endl;
	}*/
	int a = 1;
	int b = 2;
	int c = a;
	int& refa = a;
	int& refb = b;
	swapNumbs(refa, refb);
	cout << a << " " << b << endl;
	cout << "==================================" << endl;
	int arr[5][5];
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			arr[i][j] = rand()%11;
			cout << arr[i][j]<<" ";
		}
		cout << endl;
	}
	cout << "==================================" << endl;
	for (int i = 0; i < 5; i++)
	{
		swapNumbs(arr[i][0], arr[i][1]);
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << "==================================" << endl;
	return 0;
}