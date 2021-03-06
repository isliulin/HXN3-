//---------------------------------------------------------------------
//                                 长沙南车电气设备有限公司
//                                        研发中心
//                                     能耗装置项目组
//---------------------------------------------------------------------
#ifndef  _ADC_h_
#define  _ADC_h_

#define		BOT_LOW_VAL			3

//---------------------------------------------------------------------
//名    称：    void	InitAdc(void)
//功    能：   	初始化ADC
//入口参数：    
//出口参数：    
//--------------------------------------------------------------------
extern	void	InitAdc(void);

//------------------------------------------------------------------------
//  名  称 ：void BotVoltTest(void)
//  功  能 ：
// 入口参数：无
// 出口参数：无
//------------------------------------------------------------------------
extern	uint8 BotVoltTest(float *BotVolt);

//------------------------------------------------------------------------
//  名  称 ：void ReadAdc(void)
//  功  能 ：读ADC值
// 入口参数：无
// 出口参数：无
//------------------------------------------------------------------------
extern	float GetBotVolt(void);

//------------------------------------------------------------------------
//  名  称 ：uint8 JudgeEr2450Err(void)
//  功  能 ：读ADC值
// 入口参数：无
// 出口参数：无
//------------------------------------------------------------------------
extern	uint8	JudgeEr2450Err(void);

#endif