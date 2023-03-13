/*
#include<stdio.h>

int main()
{
	int k;
	while(scanf("%d", &k)!=EOF)
	{
		if(k==0)
			break;
		int i, j, len;
		for(j=k+1;;j++)	// 从k+1开始测试
		{
			int cur = 0;
			len = 2*k;
			for(i=1; i<=k; i++)		//测试前K个出列的，len为当前剩余的数目
			{
				cur = (cur+j-1)%(len);	//有取余运算时，从0开始算
				if(cur<k)
					break;
				len--;
			}
			if(i>k)		//如果前K个出列的均大于K，输出j，j为最小的m。
			{
				printf("%d\n", j);
				break;
			}
			else		//否则j++，继续测试
				continue;

		}
	}
	return 0;
}
*/

/*
#include <iostream>
using namespace std;
 
int Check(int k, int m)
{
    int i, start, len;
    len = 2*k;
    start = 0;
    for(i=1; i<=k; i++)
    {
        start = (start -1 + m) % len;
        len--;
        if(start < k)
            return 0;
    }
    return 1;
}
 
int main(){
     int k, m, a[14]={0}, i;
 
    for(i=1; i<=13; i++)
    {
        for(m=i+1; ; m++)
        {
            if(Check(i, m))
            {
                a[i] = m;
                break;
            }
        }
    }
 
    while(scanf("%d", &k) && k != 0)
    {
            printf("%d\n", a[k]);
    }
    return 0;   
}
*/