/*
 * software_timer.h
 *
 *  Created on: 19 Sep 2024
 *      Author: Genki
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_
extern int timer1_flag;
extern int hour;
extern int minute;
extern int second;
void setTimer1(int duration);
void timerRun(void);
void Display7Seg(int x);
void updateClockBuffer(void);
void update7SEG(int index);
void updateClockBuffer(void);
#endif /* INC_SOFTWARE_TIMER_H_ */
