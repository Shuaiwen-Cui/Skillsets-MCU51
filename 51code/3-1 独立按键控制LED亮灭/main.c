#include <REGX52.H>

void main()
{
	//P2 = 0xFE;
	P2_0 = 1;
	while(1)
	{
		if(P3_1==0) //P31���ư���K1
		{
			P2_0 = 0; //P2_0Ϊ��һ��LED
		}
		else
		{
			P2_0=1;
		}
		
		if (P3_0==0)
		{
			P2_1 = 0;
		}else
		{
			P2_1 = 1;
		}	
	}
} 
