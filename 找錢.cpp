#include <iostream>


int main(int argc, char** argv) 
{
	int total[9999],ctotal[9999],PA,PB,max,PAR[9999],PBR[9999];
	printf("總商品數:");
	scanf("%d",&max);
	for(int i=1;i<=max;i++)
	{
		printf("No.%d :",i);
		scanf("%d",&total[i]);
		ctotal[i]=total[i];
		total[i]=total[i]%100;
		if(total[i]>50)
		{
			PA=PA+total[i];
			PAR[i]=i;
		}
		else
		{
			PB=PB+total[i];
			PBR[i]=i;
		}
	}
	printf("PersonA:%d\n",PA%100);
	for(int i=1;i<=max;i++)
	{
		if(PAR[i]>0)
		{
			printf(" %d ",ctotal[i]);
		}
	}
	printf("\n");
	printf("PersonB:%d\n",PB%100);
	for(int i=1;i<=max;i++)
	{
		if(PBR[i]>0)
		{
			printf(" %d ",ctotal[i]);
		}
	}
	printf("\n餘額:%d",PA%100+PB%100);
	return 0;
}