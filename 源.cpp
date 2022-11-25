#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
void my_reverse(char bns[])
{
	int n = strlen(bns) - 1;
	int i;
	char ans[100] = {0};
	for (i = 0; i < n+1; i++)
	{
		ans[i] = bns[i];
	}
	int lef=0;
	int rit=n;
	char tmp;
	while (lef <= rit)
	{
		tmp = ans[lef];
		ans[lef] = ans[rit];
		ans[rit] = tmp;
		lef++;
		rit--;
	}
	printf("%s\n", ans);
}
int main()						//github用VS2019同步真的麻烦，输入提交信息提交了同步才有可能
{
	char a[100] = {0};
	char b[100] = {0};
	char ans[100] = { 0 };
	scanf("%s %s", &a, &b);
	int alen = strlen(a);
	int blen = strlen(b);
	int i;
	int A, B;
	int sum = 0;
	char mid;
	for (i = 0; i < 100; i++)
	{
		if (alen == 0)
		{
			A = 0;
			alen--;
		}
		else if(alen >0)
		{			
				A = (int)a[alen - 1] - 48;
				alen--;
		}		
		if (blen == 0)
		{
			B = 0;
			blen--;
		}
		else if(blen >0)
		{
				B =  (int)b[blen - 1] - 48;
				blen--;
		}
		sum += A + B;				
			if (sum > 9)
			{
				mid = (char)((sum % 10) + 48);
				ans[i] = mid;
				sum = 1;
			}
			else
			{
				mid = (char)(sum + 48);
				if (mid == '0' && alen == -1 && blen == -1)
					break;
				else
				{
					ans[i] = mid;
					sum = 0;
				}			
			}	
	}
	my_reverse(ans);
	return 0;
}