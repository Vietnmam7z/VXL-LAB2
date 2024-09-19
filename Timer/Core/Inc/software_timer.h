/*
 * software_timer.h
 *
 *  Created on: 19 Sep 2024
 *      Author: Genki
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_
extern int timer1_flag;
void setTimer1(int duration);
void timerRun(void);
void Display7Seg(int x);
void update7SEG(int index);

#endif /* INC_SOFTWARE_TIMER_H_ */
