//---------------------------------------------------------------------
//                                 ��ɳ�ϳ������豸���޹�˾
//                                        �з�����
//                                     �ܺ�װ����Ŀ��
//---------------------------------------------------------------------
#ifndef  _ADC_h_
#define  _ADC_h_

#define		BOT_LOW_VAL			3

//---------------------------------------------------------------------
//��    �ƣ�    void	InitAdc(void)
//��    �ܣ�   	��ʼ��ADC
//��ڲ�����    
//���ڲ�����    
//--------------------------------------------------------------------
extern	void	InitAdc(void);

//------------------------------------------------------------------------
//  ��  �� ��void BotVoltTest(void)
//  ��  �� ��
// ��ڲ�������
// ���ڲ�������
//------------------------------------------------------------------------
extern	uint8 BotVoltTest(float *BotVolt);

//------------------------------------------------------------------------
//  ��  �� ��void ReadAdc(void)
//  ��  �� ����ADCֵ
// ��ڲ�������
// ���ڲ�������
//------------------------------------------------------------------------
extern	float GetBotVolt(void);

//------------------------------------------------------------------------
//  ��  �� ��uint8 JudgeEr2450Err(void)
//  ��  �� ����ADCֵ
// ��ڲ�������
// ���ڲ�������
//------------------------------------------------------------------------
extern	uint8	JudgeEr2450Err(void);

#endif