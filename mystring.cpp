#include "mystring.h"
void str_cat(char* str1, char* str2)
{
	while (*str1 != '\0')
	{
		str1++;
	}
	do 
	{
		*str1 = *str2;
		str1++;
		str2++;
	} while (*str2!='\0');
}

int str_len(char* str1)
{
	int count = 0;
	while (*str1 != '\0')
	{
		count++;
		str1++;
	}
	return count;
 }

void str_cpy(char* str3, char* str1, int len)
{
	while (len)
	{
		*str3 = *str1;
		str3++;
		str1++;
		len--;
	}
	*str3 = '\0';
}

int str_cmp(char* str2, char* str4)
{
	while (*str2 == *str4&&*str2!='\0'&&*str4!='\0')
	{
		str2++;
		str4++;
	}
	if (*str2 > *str4)
		return 1;
	else
		return -1;

}
void str_replace(char* str1, char* str2, char* str4)
{
	char* str11 = str1;
	char* start = str11;
	while (*str11 != '\0')
	{
		char* p1 = str11;
		char* p2 = str2;
		char* p4 = str4;
		while (*p1 != *p2)
		{
			p1++;
		}
		char* pos = p1;
		char* tmp = p1;
		while (*p1 == *p2 && *p1 != '\0' && *p2 != '\0')
		{
			p1++;
			p2++;
		}
		if (*p2 == '\0')
		{
			p2 = str2;
			while (*p2 != '\0')
			{	
				*tmp = *p4;
				p2++;
				p4++;
				tmp++;
			}
			while (*str11 != *pos)
			{
				str11++;
			}
			p4 = str4;
			while (*p4 != '\0')
			{
				*str11 = *p4;
				str11++;
				p4++;

			}
		}
		else
		str11++;
	}
	str1 = start;
}
	
//int str_find(char* str1, char* str4)//error
//{
//	/*char* start = str1;
//	int i = 0;
//	int index = 0;
//	for (index=i;*str1 != '\0';i++) 
//	{
//		char* p1 = str1;
//		char* p4 = str4;
//		while (*p1 != *str4)
//		{
//			p1++;
//			index++;
//		}
//		while (*p1 == *str4 && *p1 != '\0' && *p4 != '\0')
//		{
//			p1++;
//			
//			p4++;
//		}
//		if (*p4 == '\0')
//		{
//			break;
//		}
//		str1++;
//	}
//	return index;*/
//
//}
int str_find(char* str1, char* str4)
{
	int len_1 = str_len(str1);
	int len_4 = str_len(str4);
	int i = 0;
	for (i = 0; i < len_1; i++)
	{
		int j, k;
		for (j = 0,k = i; j < len_4; j++)
		{
			if (str1[k++] == str4[j])
			{
				continue;
			}
			else
			{
				break;
			}
		}
		if (j == len_4)
			return i;
	}
	return -1;
}
	
void str_insert(char* str1, int index, char* str5)
{
	char* start = str1;
	int len_5 = str_len(str5);
	int len_1 = str_len(str1);
	for (int i = len_1; i >= index; i--)
	{
		str1[i + 2] = str1[i];
	}
	while (index)
	{
		str1++;
		index--;
	}
	while (len_5)
	{
		*str1 = *str5;
		str1++;
		str5++;
		len_5--;
	}
	str1 = start;
	
	
}
void to_lower(char* str1)
{
	while ((*str1 >= 'a' && *str1 <= 'z')||*str1==' ')
	{
		str1++;
	}
	while (*str1 != '\0')
	{
		*str1 += 32;
		str1++;
	}
}

