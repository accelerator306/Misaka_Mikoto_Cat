//#define _CRT_SECURE_NO_WARNINGS 1
////创建一个整形数组，完成对数组的操作
////
////实现函数init() 初始化数组为全0
////实现print()  打印数组的每个元素
////实现reverse()  函数完成数组元素的逆置。
////要求：自己设计以上函数的参数，返回值。
//#include<stdio.h>
//void init(int* arr,int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int* arr, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void reverse(int* arr, int n)
//{
//	int left = 0;
//	int right = n - 1;
//	int tmp;
//	while (left < right)
//	{
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int n = 0;
//	int arr[100] = { 1,2,3,4,5,0 };
//	n = sizeof(arr)/4;	
//	print(arr, n);
//	reverse(arr, n);
//	print(arr, n); 
//	init(arr, n);
//	print(arr, n);
//	return 0;
//}