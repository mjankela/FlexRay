/*! @cond LIC */
/*******************************************************************************/
/**  THIS CODE IS PROVIDED AS IS. DUXSOLUTIONS KK OR ANY OF ITS DISTRIBUTORS  **/
/**  ACCEPTS NO RESPONSIBILITY OR LIABILITY FOR ANY ERRORS OR OMMISSIONS.     **/
/**  BY USING THIS SOURCE CODE YOU COMMIT TO CARRY ALL RESPONSIBILITIES AND   **/
/**  WARRANTIES UNDER OWN RISK. YOU COMMIT THAT NO CLAIMS TO DUXSOLUTIONS OR  **/ 
/**  ITS DISTRIBUTORS WILL BE DONE.   	                                      **/
/**  YOU ARE ONLY ALLOWED TO USE THIS CODE WITH A VALID TOOL LICENSE AND      **/
/**  SOURCE CODE LICENSE. PLEASE CONTACT DUXSOLUTIONS KK OR ONE OF ITS        **/
/**  DISTRIBUTORS FOR DETAILS AND PERMISSIONS.                                **/
/*******************************************************************************/

/*******************************************************************************/
/**  LICENSE: FOR THIS PROJECT THE DUXPL WITH THE CURRENT VERSION APPLIES.    **/
/*******************************************************************************/
/*! @endcond */

/*! \file dux_platform_types.h 
 *	\brief Basic data types.
 *   Redefines the types to make the platform independent. This assures that
 *   on different hardware architectures the same amount of bits and bytes
 *   are reserved. */

#ifndef __DUX_PLATFORM_TYPES_H__
#define __DUX_PLATFORM_TYPES_H__

/*! \def CPU_TYPE 
 *	A macro that returns the valid license for this driver module. */
#define CPU_TYPE 			CPU_TYPE_32

/*! \def CPU_BIT_ORDER 
 *	Defines the bit order. In this case little endian bit ordering, aka Bit_0 is the LSB. */
#define CPU_BIT_ORDER 		LSB_FIRST 				

/*! \def CPU_BYTE_ORDER 
 *	Defines the byte order. In this case big endian byte ordering. */
#define CPU_BYTE_ORDER 		HIGH_BYTE_FIRST 		

/*!\typedef sint8 
 * \brief signed integer 8 bit
 *  The value range is expected to be between -128 and +127
 */
typedef signed char 		sint8;

/*!\typedef uint8 
 * \brief unsigned integer 8 bit
 *  The value range is expected to be between 0 and +255
 */
typedef unsigned char 		uint8;

/*!\typedef sint16 
 * \brief signed integer 16 bit
 *  The value range is expected to be between -32,768 to +32,767
 */
typedef signed short 		sint16;

/*!\typedef uint16 
 * \brief unsigned integer 16 bit
 *  The value range is expected to be between 0 and +65,535
 */
typedef unsigned short 		uint16;

/*!\typedef sint32 
 * \brief signed integer 32 bit
 *  The value range is expected to be between -2,147,483,648 to +2,147,483,647
 */
typedef signed long 		sint32;

/*!\typedef int32 
 * \brief regular signed integer 32 bit
 *  The value range is expected to be between -2,147,483,648 to +2,147,483,647
 */
typedef signed long    		int32;

/*!\typedef uint32 
 * \brief unsigned integer 32 bit
 *  The value range is expected to be between 0 and +4 294 967 295
 */
typedef unsigned long  		uint32;

/*!\typedef float32 
 * \brief floating point 32 bit
 *  This is a binary format that occupies 32 bits (4 bytes) and its significand has a precision of 24 bits (about 7 decimal digits)
 */
typedef float          		float32;

/*!\typedef float64 
 * \brief floating point 64 bit
 *  This is a binary format that occupies 64 bits (8 bytes) and its significand has a precision of 53 bits (about 16 decimal digits).
 */
typedef double         		float64;

/*!\typedef boolean 
 * \brief boolean data type
 *  The value range is logical true or false
 */
typedef unsigned char  boolean;

#ifndef TRUE
/*! \def TRUE 
 *	If TRUE is not defined, define it as integer 1. */
	#define TRUE (1)
#endif
#ifndef FALSE
/*! \def FALSE 
 *	If FALSE is not defined, define it as integer 0. */
	#define FALSE (0)
#endif

#endif /*__DUX_PLATFORM_TYPES_H__*/
