#ifndef __BUZZER_H
#define __BUZZER_H	 
#include "sys.h"

#define BUZZER_PORT	GPIOB	//����IO�ӿ�
#define BUZZER_Pin	GPIO_Pin_0	//����IO�ӿ�
#define BUZZER PBout(0)

void BUZZER_Init(void);//��ʼ��
void BUZZER_BEEP1(void);//��һ��
		 				    
#endif
