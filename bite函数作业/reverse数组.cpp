//#define _CRT_SECURE_NO_WARNINGS 1
////����һ���������飬��ɶ�����Ĳ���
////
////ʵ�ֺ���init() ��ʼ������Ϊȫ0
////ʵ��print()  ��ӡ�����ÿ��Ԫ��
////ʵ��reverse()  �����������Ԫ�ص����á�
////Ҫ���Լ�������Ϻ����Ĳ���������ֵ��
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