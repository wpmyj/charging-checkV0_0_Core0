
#ifndef FLASHADDRESS_MAP_H
#define FLASHADDRESS_MAP_H

#define FLASH_START_ADDR		0xB0000000
#define FLASH_END_ADDR			0xB07FFFFF


//为了更好的管理地址，建议分配地址时从最高位往下面分配，这样可以减少碎片，且适合大文件的存储，同时程序存放的地方从地位开始，这样可以避免覆盖程序数据
//同时，每一块的数据块大小都为64Kbit（除了0~3）
#define FLASH_CF_SECT			129			//校准系数存放块地址
#define FLASH_CF_ADDR			0x20000 + (FLASH_CF_SECT-4)*128*1024 + FLASH_START_ADDR	//校准系数存放地址
#define FLASH_CF_L11A_OFFSET		0
#define FLASH_CF_L11Q_OFFSET		FLASH_CF_L11A_OFFSET + 4
#define FLASH_CF_L12A_OFFSET		FLASH_CF_L11Q_OFFSET + 4
#define FLASH_CF_L12Q_OFFSET		FLASH_CF_L12A_OFFSET + 4
#define FLASH_CF_L21A_OFFSET		FLASH_CF_L12Q_OFFSET + 4
#define FLASH_CF_L21Q_OFFSET		FLASH_CF_L21A_OFFSET + 4
#define FLASH_CF_L22A_OFFSET		FLASH_CF_L21Q_OFFSET + 4
#define FLASH_CF_L22Q_OFFSET		FLASH_CF_L22A_OFFSET + 4
#define FLASH_CF_L23A_OFFSET		FLASH_CF_L22Q_OFFSET + 4
#define FLASH_CF_L23Q_OFFSET		FLASH_CF_L23A_OFFSET + 4


#define FLASH_ZC_SECT			128			//零位补偿系数存放块地址
#define FLASH_ZC_ADDR			0x20000 + (FLASH_ZC_SECT-4)*128*1024 + FLASH_START_ADDR	//校准系数存放地址
#define FLASH_ZC_L11A_OFFSET		0
#define FLASH_ZC_L12A_OFFSET		FLASH_ZC_L11A_OFFSET + 4
#define FLASH_ZC_L21A_OFFSET		FLASH_ZC_L12A_OFFSET + 4
#define FLASH_ZC_L22A_OFFSET		FLASH_ZC_L21A_OFFSET + 4
#define FLASH_ZC_L23A_OFFSET		FLASH_ZC_L22A_OFFSET + 4

#define FLASH_RF_SECT			127			//纹波系数存放块地址
#define FLASH_RF_ADDR			0x20000 + (FLASH_RF_SECT-4)*128*1024 + FLASH_START_ADDR	//校准系数存放地址
#define FLASH_RF_L11A_OFFSET		0
#define FLASH_RF_L12A_OFFSET		FLASH_RF_L11A_OFFSET + 4
#define FLASH_RF_L21A_OFFSET		FLASH_RF_L12A_OFFSET + 4
#define FLASH_RF_L22A_OFFSET		FLASH_RF_L21A_OFFSET + 4
#define FLASH_RF_L23A_OFFSET		FLASH_RF_L22A_OFFSET + 4

#define FLASH_Param_SECT			126			//本机基本参数设置存放地址
#define FLASH_Param_ADDR			0x20000 + (FLASH_Param_SECT-4)*128*1024 + FLASH_START_ADDR	//存放首地址
#define FLASH_Param_RP_ORRSET		0			//存放基本参数的地址偏移,用于存放基本参数结构体

#define FLASH_BMSListen_SECT		125			//本机基本参数设置存放地址
#define FLASH_BMSListen_ADDR		0x20000 + (FLASH_BMSListen_SECT-4)*128*1024 + FLASH_START_ADDR	//存放首地址
#define FLASH_BMSListen_ORRSET		0			//存放基本参数的地址偏移,用于存放基本参数结构体

#endif










