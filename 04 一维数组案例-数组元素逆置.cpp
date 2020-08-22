#include<iostream>
using namespace std;

int main4() {

	//实现数组元素逆置
	//1.创建数组
	int arr[5] = { 1,3,2,5,4 };
	cout << "数组逆置前：" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}
	//2.实现逆置
	int start = 0;
	int end = sizeof(arr) / sizeof(arr[0]) - 1;
	while (start<end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}

	//3.打印逆置后的数组

	cout << "数组元素逆置后：" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}

	system("pause");
	return 0;
}