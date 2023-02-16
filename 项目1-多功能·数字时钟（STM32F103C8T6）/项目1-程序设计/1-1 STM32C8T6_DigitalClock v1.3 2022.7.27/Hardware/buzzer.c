#include "stm32f10x.h"
#include "buzzer.h"
#include "delay.h"

void BUZZER_Init(void){ //�������Ľӿڳ�ʼ��
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB,ENABLE);
	
	GPIO_InitTypeDef  GPIO_InitStructure; 	
    GPIO_InitStructure.GPIO_Pin = BUZZER_Pin; //ѡ��˿ں�                        
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; //ѡ��IO�ӿڹ�����ʽ       
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz; //����IO�ӿ��ٶȣ�2/10/50MHz��    
	GPIO_Init(BUZZER_PORT, &GPIO_InitStructure);	
	
	GPIO_SetBits(BUZZER_PORT,BUZZER_Pin);	
}

void BUZZER_BEEP1(void){ //��������һ��
	BUZZER = RESET;
	delay_ms(100);
	BUZZER = SET;
}


/*
ѡ��IO�ӿڹ�����ʽ��
GPIO_Mode_AIN ģ������
GPIO_Mode_IN_FLOATING ��������
GPIO_Mode_IPD ��������
GPIO_Mode_IPU ��������
GPIO_Mode_Out_PP �������
GPIO_Mode_Out_OD ��©���
GPIO_Mode_AF_PP �����������
GPIO_Mode_AF_OD ���ÿ�©���
*/
