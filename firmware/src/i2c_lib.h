 /* File:   i2c_lib.h
 * Author: Harish
 *
 * Created on April 17, 2017, 11:04 AM
 */

#ifndef I2C_LIB_H
#define	I2C_LIB_H

#define slave_w 0b11010110
#define slave_r 0b11010111
#define IMU_ADD 0b11010110

void init();
void I2C_master_setup(void);
char getState(char p);
void setState(char add, char i);

void I2C_master_start(void);
void I2C_master_stop(void);
void I2C_master_restart(void);

void I2C_send(unsigned char i);
unsigned char I2C_receive(void);
void i2c_ack(int a);
short combine(unsigned char, unsigned char);
void I2C_read_multiple(unsigned char address, unsigned char register, unsigned char * data, int length);
void IMU_read_multiple(unsigned char register, unsigned char address, short * data, int length);

#endif