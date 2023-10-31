//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int bin_search(int arr[], int left, int right, int key)
//{
//	while (left <= right) 
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > key)
//			right = mid - 1;
//		else if (arr[mid] < key)
//			left = mid + 1;
//		else
//			return mid;
//	}
//	return -1;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,7,8,9,10,11 };
//	int left = 0;
//	int right = sizeof(arr)/4 - 1;
//	int key = 0;
//	scanf("%d", &key);
//	int ret = bin_search(arr, left, right, key);
//	if (ret == -1)
//		printf("can not find\n");
//	else
//		printf("%d\n", ret);
//
//	return 0;
//}