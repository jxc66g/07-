#include<iostream>
using namespace std;


int main6() {

	//二维数组的定义方式
	//1.数据类型 数组名[行数][列数];
	//2.数据类型 数组名[行数][列数]={{数据1，数据2},{数据3，数据4}}
	//3.数据类型 数组名[行数][列数]={数据1，数据2，数据3，数据4};
	//4.数据类型 数组名[][列数]={数据1，数据2，数据3，数据4};


	int arr[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}


	system("pause");
	return 0;
}