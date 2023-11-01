#include <iostream>
#include <iostream>
#include <cstring>
using namespace std;
//限制数字串最长长度为31
const int M = 30;
//字符数串相加函数声明
void add(char a[], char b[], char c[]);
//字符串颠倒
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
	//输入：//	1234567812345678 987654321987654321		//输出：	//988888889799999999
	//a，b字符串倒置
	inverse_string(a);
	inverse_string(b);
	//创建字符 carry表示相加后的进位  num表示进位后剩下的数字
	char num = 0, carry = 0;
	//求出两个倒置数字字符串的长串长度M和短串长度m
	int len_M = len1 > len2 ? len1 : len2;
	int len_m = len1 < len2 ? len1 : len2;
	//对于两串相同长度的部分，执行加法
	for (int i = 0; i < len_m; i++)
	{
		//减去字符'0'得到字符对应的可计算的数
		char num = (a[i] - '0' + b[i] - '0' + carry) % 10;
		//把两者相加模10后剩余的数加上进位之后存入c，初始进位为0
		c[i] = num + '0';
		//如果相加大于9，进位为1
		if ((a[i] - '0' + b[i] - '0' + carry) >= 10)
			carry = 1;
		//不然，进位为0
		else
			carry = 0;
	}
	//分析两字符串共同部分的下一位，两者至少有一个为\0  
	//a[len_m]不为\0
	if (a[len_m] != '\0')
	{
		for (int i = len_m; i < len_M; i++)
		{
			//a[i]恰巧为9且进位为1 c[i]赋值为0
			if (carry + a[i] - '0' == 10)
			{
				c[i] = '0';
				carry = 1;
			}
			//其他情况 不进位则carry一直为0
			else
			{
				c[i] = a[i] + carry;
				carry = 0;
			}

		}
		//如果循环完仍有进位，则在下一位补1，下下位补\0
		if (carry == 1)
		{
			c[len_M] = '1';
			c[len_M + 1] = '\0';
		}
		//否则，直接在下一位补\0
		else
			c[len_M] = '\0';
	}
	//b[len_m]不为\0  
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
	//两个都为\0则只需分析是否要进位
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
	//反转数字串
	inverse_string(c);

}