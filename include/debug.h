//This file defines the debugging for the quadcopter firmware.
//By commenting and uncommenting the lines debugging functions for output via serial-bus and board-pins can be activated.

#ifndef QC_DEBUG_H
#define QC_DEBUG_H

//#define DBG_ALLOW_SERIAL_DEBUGGING

//debug macros
#ifdef DBG_ALLOW_SERIAL_DEBUGGING
#define DBG_print(x) 	Serial.print(x)
#define DBG_println(x) 	Serial.println(x)
#else
#define DBG_print(x)
#define DBG_println(x)
#endif


//various debugging at different stages of the program
#ifdef DBG_ALLOW_SERIAL_DEBUGGING

//========================== LOOP =======================

//#define DBG_SCHEDULER_PIN				13			// check timing with an oscilloscope
//#define DBG_SCHEDULER_PRINT			10000000ul	// loop timing data
//#define DBG_SCHEDULER_OFFSET_PRINT	50			// to minimize serial access
//#define DBG_SCHEDULER_EXEC_TIME_PRINT				// debug execution time jitter

//======================== RECEIVER =====================

//#define DBG_RECEIVER_PRINT			1000000ul	// receiver pulse lenghts

//===================== SENSOR FUSION ===================

//#define DBG_SFUS_TILT_CALIB_PRINT					// tilt of sensor relative to quadcopter
//#define DBG_SFUS_INIT_ATTI_PRINT					// initial attitude before start up
//#define DBG_SFUS_RAW_PRINT			2500000ul	// raw sensor data
//#define DBG_SFUS_FUSED_PRINT			1000000ul	// sensor fusion data
//#define DBG_SFUS_RANDOM_PRINT			1000000ul

//======================= STABILIZER ====================

//#define DBG_STABLE_MAP_RX_INPUT_PRINT	1000000ul	// receiver pulse length mapped to angles
//#define DBG_STABLE_SENSOR_INPUT_PRINT	1000000ul	// sensor input at the stabilizer
//#define DBG_STABLE_PWM_OUTPUT_PRINT	1000000ul	// pwm outputs at the stabilizer
//#define DBG_STABLE_RANDOM_PRINT		1000000ul

//======================= MOTORS ====================

//#define DBG_MOTORS_PWM_PRINT

#endif

class enclosedDbger
{
	public:
	
		enclosedDbger(const char* startMessage);
		~enclosedDbger();
		
		void close(const char* stopMessage);
		
	private:
	
		unsigned long startTime;
};

#endif