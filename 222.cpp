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
		for(j=k+1;;j++)	// ��k+1��ʼ����
		{
			int cur = 0;
			len = 2*k;
			for(i=1; i<=k; i++)		//����ǰK�����еģ�lenΪ��ǰʣ�����Ŀ
			{
				cur = (cur+j-1)%(len);	//��ȡ������ʱ����0��ʼ��
				if(cur<k)
					break;
				len--;
			}
			if(i>k)		//���ǰK�����еľ�����K�����j��jΪ��С��m��
			{
				printf("%d\n", j);
				break;
			}
			else		//����j++����������
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