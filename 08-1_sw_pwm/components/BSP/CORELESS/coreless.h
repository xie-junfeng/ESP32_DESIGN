#ifndef __CORELESS_H_
#define __CORELESS_H_

#include "pwm.h"


/* 控制程序 */
#define CRELESS_FWD             LEDC_TIMER_1        /* 使用定时器0*/
#define LEDC_PWM_CH0_GPIO       GPIO_NUM_1          /* LED控制器通道对应GPIO*/
#define LEDC_PWM_CH0_CHANNEL    LEDC_CHANNEL_1      /* LED控制器通道号*/

/* 函数声明 */
void forward_fast_decay(uint16_t duty);                   /* 向前快速衰减模式 */
void forward_slow_decay(uint16_t duty);                   /* 向前慢速衰减模式 */
void Reverse_fast_decay(uint16_t duty);                   /* 向后快速衰减模式 */
void Reverse_slow_decay(uint16_t duty);                   /* 向后慢速衰减模式 */
#endif
