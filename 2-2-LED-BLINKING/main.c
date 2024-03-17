#include <REGX52.H>
#include <INTRINS.H>

void Delay500ms()		//@11.0592MHz
{
	unsigned char i, j, k;

	_nop_();
	i = 4;
	j = 129;
	k = 119;
	do
	{
		do
		{
			while (--k);
		} while (--j);
	} while (--i);
}

int main()
{
	while(1)
	{
		P2 = 0xFE; // 1111 1110 only the last one is on
		Delay500ms();
	  P2 = 0xFF; // 1111 1111 all off
		Delay500ms();
	}
}