//sbit RCK = P3^5;
//sbit SCK = P3^6;
//sbit SER = P3^4;
 
//#define MATRIX_LED_PORT    P0
/**
	* @brief 74HC595??????
	* @param ??????
	* @retval ?
  */
void _74HC595_WriteByte(unsigned char Byte);
/**
	* @brief  LED?????????
	* @param  Column????,??:0~7,0????
	* @param	Data????????,????,1??,0??
	* @retval ?
  */
void MatrixLED_ShowColumn(unsigned char Column,Data);
 
void MatrixLED_Init();