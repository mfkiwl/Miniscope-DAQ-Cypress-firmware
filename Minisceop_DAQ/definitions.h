/*
 * definitions.h
 *
 *  Created on: Jan 20, 2020
 *      Author: DBAharoni
 */

#ifndef DEFINITIONS_H_
#define DEFINITIONS_H_

//Define which imaging sensors is being used.
//#define MT9V032
//#define MT9M001
#define V4_PYTHON480
//#define V4_PYTHON480_2C
//#define MT9P031_FULL_RES
//#define MT9P031_2x_BIN

//Define if we are using a BNO055 IMU
#define BNO055_ENABLED

//Communication over saturation channel
#define RECORD_START		0x01
#define RECORD_END			0x02
#define SET_CMOS_SETTINGS	0x03
     //For setting MS FPS
#define FPS5				0x11
#define FPS10				0x12
#define	FPS15				0x13
#define	FPS20				0x14
#define FPS30				0x15
#define	FPS60				0x16

#define MODE_V4_MINISCOPE	0x20
#define MODE_DEMO_2_COLOR	0x21
#define MODE_2_COLOR		0x22

#define CONFIG_BNO055_TO_NDOF	0xF0


#define TRIG_RECORD_EXT	21
#define GPIO_SHIFT		20
#define GPIO_MASK		0b00000111

#define MCU_SET_MODE 0x04

#endif /* DEFINITIONS_H_ */