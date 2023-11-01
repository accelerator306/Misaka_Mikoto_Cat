#include <iostream>
#include <iostream>
#include <cstring>
using namespace std;
//�������ִ������Ϊ31
const int M = 30;
//�ַ�������Ӻ�������
void add(char a[], char b[], char c[]);
//�ַ����ߵ�
void inverse_string(char a[])
{
	int left = 0;
	int right = strlen(a) - 1;
	while (left < right)
	{
		char tmp = 0;
		tmp = a[left];
		a[left] = a[right];
		a[right] = tmp;
		left++;
		right--;
	}
}
int main()
{
	char a[M], b[M], c[M];
	cin >> a >> b;
	add(a, b, c);
	cout << c << endl;
	return 0;
}

void add(char a[], char b[], char c[])
{
	int len1 = strlen(a);
	int len2 = strlen(b);
	//���룺//	1234567812345678 987654321987654321		//�����	//988888889799999999
	//a��b�ַ�������
	inverse_string(a);
	inverse_string(b);
	//�����ַ� carry��ʾ��Ӻ�Ľ�λ  num��ʾ��λ��ʣ�µ�����
	char num = 0, carry = 0;
	//����������������ַ����ĳ�������M�Ͷ̴�����m
	int len_M = len1 > len2 ? len1 : len2;
	int len_m = len1 < len2 ? len1 : len2;
	//����������ͬ���ȵĲ��֣�ִ�мӷ�
	for (int i = 0; i < len_m; i++)
	{
		//��ȥ�ַ�'0'�õ��ַ���Ӧ�Ŀɼ������
		char num = (a[i] - '0' + b[i] - '0' + carry) % 10;
		//���������ģ10��ʣ��������Ͻ�λ֮�����c����ʼ��λΪ0
		c[i] = num + '0';
		//�����Ӵ���9����λΪ1
		if ((a[i] - '0' + b[i] - '0' + carry) >= 10)
			carry = 1;
		//��Ȼ����λΪ0
		else
			carry = 0;
	}
	//�������ַ�����ͬ���ֵ���һλ������������һ��Ϊ\0  
	//a[len_m]��Ϊ\0
	if (a[len_m] != '\0')
	{
		for (int i = len_m; i < len_M; i++)
		{
			//a[i]ǡ��Ϊ9�ҽ�λΪ1 c[i]��ֵΪ0
			if (carry + a[i] - '0' == 10)
			{
				c[i] = '0';
				carry = 1;
			}
			//������� ����λ��carryһֱΪ0
			else
			{
				c[i] = a[i] + carry;
				carry = 0;
			}

		}
		//���ѭ�������н�λ��������һλ��1������λ��\0
		if (carry == 1)
		{
			c[len_M] = '1';
			c[len_M + 1] = '\0';
		}
		//����ֱ������һλ��\0
		else
			c[len_M] = '\0';
	}
	//b[len_m]��Ϊ\0  
	else if (b[len_m] != '\0')
	{
		for (int i = len_m; i < len_M; i++)
		{
			if (carry + b[i] - '0' == 10)
			{
				c[i] = '0';
				carry = 1;
			}
			else
			{
				c[i] = b[i] + carry;
				carry = 0;
			}

		}
		if (carry == 1)
		{
			c[len_M] = '1';
			c[len_M + 1] = '\0';
		}
		else
			c[len_M] = '\0';
	}
	//������Ϊ\0��ֻ������Ƿ�Ҫ��λ
	else
	{
		if (carry == 1)
		{
			c[len_m] = '1';
			c[len_m + 1] = '\0';
		}
		else
			c[len_m] = '\0';
	}
	//��ת���ִ�
	inverse_string(c);

}