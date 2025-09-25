/**
 ****************************************************************************************************
 * @file        pwm.h
 * @author      正点原子团队(ALIENTEK)
 * @version     V1.0
 * @date        2023-08-26
 * @brief       PWM驱动代码
 * @license     Copyright (c) 2020-2032, 广州市星翼电子科技有限公司
 ****************************************************************************************************
 * @attention
 *
 * 实验平台:正点原子 ESP32-S3开发板
 * 在线视频:www.yuanzige.com
 * 技术论坛:www.openedv.com
 * 公司网址:www.alientek.com
 * 购买地址:openedv.taobao.com
 * 
 ****************************************************************************************************
 */

#ifndef __PWM_H_
#define __PWM_H_

#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/semphr.h"
#include "driver/ledc.h"
#include "driver/gpio.h"


/* 引脚以及重要参数定义 */
#define LEDC_PWM_TIMER          LEDC_TIMER_1        /* 使用定时器0 */
#define LEDC_PWM_CH0_GPIO       GPIO_NUM_1          /* LED控制器通道对应GPIO */
#define LEDC_PWM_CH0_CHANNEL    LEDC_CHANNEL_1      /* LED控制器通道号 */

/* 函数声明 */
void pwm_init(uint8_t resolution, uint16_t freq,uint8_t channel,uint16_t gpio);   /* 初始化PWM */
void pwm_set_duty(uint16_t duty,uint8_t channel);                   /* PWM占空比设置 */

#endif
