#ifndef __PANLCOMN_H__
#define __PANLCOMN_H__

/**
    Macro to generate dummy element for enum type to expand enum size to word (4 bytes)
*/
#ifndef ENUM_DUMMY4WORD
#define ENUM_DUMMY4WORD(name)   E_##name  0x10000000
#endif

#define FALSE				0
#define TRUE				1

#define CMDDELAY_MS         0x80000000 
#define CMDDELAY_US         0x40000000 
#define CMDTEON             0x20000000 
#define CMDTEEXTPIN         0x10000000 
#define CMDTEONEACHFRAME    0x04000000 
#define CMDBTA              0x08000000 
#define CMDTEONEACHFRAMERTY 0x00800000 
									
#define DSICMD_CMD          0x01000000 
#define DSICMD_DATA         0x02000000 
									
#define MICMD_CMD           0x01000000 
#define MICMD_DATA          0x02000000 
									
#define IFCMD_CMD           0x00 
#define IFCMD_DATA          0x01 

/**
    PIN config of LCD modes

    @note For pinmux_init() with PIN_FUNC_LCD or PIN_FUNC_LCD2.\n
            For example you can use {PIN_FUNC_LCD PINMUX_DISPMUX_SEL_LCD | PINMUX_LCDMODE_RGB_SERIAL}\n
            to tell display object that PIN_FUNC_LCD is located on primary LCD pinmux\n
            and it's LCD mode is RGB serial.
*/

#define PINMUX_LCDMODE_RGB_SERIAL               0     ///< LCD MODE is RGB Serial or UPS051
#define PINMUX_LCDMODE_RGB_PARALL               1     ///< LCD MODE is RGB Parallel (888)
#define PINMUX_LCDMODE_YUV640                   2     ///< LCD MODE is YUV640
#define PINMUX_LCDMODE_YUV720                   3     ///< LCD MODE is YUV720
#define PINMUX_LCDMODE_RGBD360                  4     ///< LCD MODE is RGB Dummy 360
#define PINMUX_LCDMODE_RGBD320                  5     ///< LCD MODE is RGB Dummy 320
#define PINMUX_LCDMODE_RGB_THROUGH              6     ///< LCD MODE is RGB through mode
#define PINMUX_LCDMODE_CCIR601                  7     ///< LCD MODE is CCIR601
#define PINMUX_LCDMODE_CCIR656                  8     ///< LCD MODE is CCIR656
#define PINMUX_LCDMODE_RGB_PARALL666            9     ///< LCD MODE is RGB Parallel 666
#define PINMUX_LCDMODE_RGB_PARALL565           10     ///< LCD MODE is RGB Parallel 565
#define PINMUX_LCDMODE_RGB_PARALL_DELTA        11     ///< LCD MODE is RGB Parallel Delta
#define PINMUX_LCDMODE_MIPI                    12     ///< LCD MODE is MIPI Display

#define PINMUX_LCDMODE_MI_OFFSET             32       ///< Memory LCD MODE offset
#define PINMUX_LCDMODE_MI_FMT0               32+0     ///< LCD MODE is Memory(Parallel Interface) 8bits
#define PINMUX_LCDMODE_MI_FMT1               32+1     ///< LCD MODE is Memory(Parallel Interface) 8bits
#define PINMUX_LCDMODE_MI_FMT2               32+2     ///< LCD MODE is Memory(Parallel Interface) 8bits
#define PINMUX_LCDMODE_MI_FMT3               32+3     ///< LCD MODE is Memory(Parallel Interface) 8bits
#define PINMUX_LCDMODE_MI_FMT4               32+4     ///< LCD MODE is Memory(Parallel Interface) 8bits
#define PINMUX_LCDMODE_MI_FMT5               32+5     ///< LCD MODE is Memory(Parallel Interface) 8bits
#define PINMUX_LCDMODE_MI_FMT6               32+6     ///< LCD MODE is Memory(Parallel Interface) 8bits
#define PINMUX_LCDMODE_MI_FMT7               32+7     ///< LCD MODE is Memory(Parallel Interface) 9bits
#define PINMUX_LCDMODE_MI_FMT8               32+8     ///< LCD MODE is Memory(Parallel Interface) 16bits
#define PINMUX_LCDMODE_MI_FMT9               32+9     ///< LCD MODE is Memory(Parallel Interface) 16bits
#define PINMUX_LCDMODE_MI_FMT10              32+10    ///< LCD MODE is Memory(Parallel Interface) 18bits
#define PINMUX_LCDMODE_MI_FMT11              32+11    ///< LCD MODE is Memory(Parallel Interface)  8bits
#define PINMUX_LCDMODE_MI_FMT12              32+12    ///< LCD MODE is Memory(Parallel Interface) 16bits
#define PINMUX_LCDMODE_MI_FMT13              32+13    ///< LCD MODE is Memory(Parallel Interface) 16bits
#define PINMUX_LCDMODE_MI_FMT14              32+14    ///< LCD MODE is Memory(Parallel Interface) 16bits
#define PINMUX_LCDMODE_MI_SERIAL_BI          32+20    ///< LCD MODE is Serial Interface bi-direction
#define PINMUX_LCDMODE_MI_SERIAL_SEP         32+21    ///< LCD MODE is Serial Interface separation

#define PINMUX_LCDMODE_AUTO_PINMUX           0x01<<22 ///< Set display device to GPIO mode when display device is closed. Select this filed will inform display object to switch to GPIO when display device is closed.


#define PINMUX_HDMIMODE_OFFSET               64       ///< HDMI MODE offset
#define PINMUX_HDMIMODE_640X480P60           64+1     ///< HDMI Video format is 640x480 & Progressive 60fps
#define PINMUX_HDMIMODE_720X480P60           64+2     ///< HDMI Video format is 720x480 & Progressive 60fps & 4:3
#define PINMUX_HDMIMODE_720X480P60_16X9      64+3     ///< HDMI Video format is 720x480 & Progressive 60fps & 16:9
#define PINMUX_HDMIMODE_1280X720P60          64+4     ///< HDMI Video format is 1280x720 & Progressive 60fps
#define PINMUX_HDMIMODE_1920X1080I60         64+5     ///< HDMI Video format is 1920x1080 & Interlaced 60fps
#define PINMUX_HDMIMODE_720X480I60           64+6     ///< HDMI Video format is 720x480 & Interlaced 60fps
#define PINMUX_HDMIMODE_720X480I60_16X9      64+7     ///< HDMI Video format is 720x480 & Interlaced 60fps & 16:9
#define PINMUX_HDMIMODE_720X240P60           64+8     ///< HDMI Video format is 720x240 & Progressive 60fps
#define PINMUX_HDMIMODE_720X240P60_16X9      64+9     ///< HDMI Video format is 720x240 & Progressive 60fps & 16:9
#define PINMUX_HDMIMODE_1440X480I60          64+10    ///< HDMI Video format is 1440x480 & Interlaced 60fps
#define PINMUX_HDMIMODE_1440X480I60_16X9     64+11    ///< HDMI Video format is 1440x480 & Interlaced 60fps & 16:9
#define PINMUX_HDMIMODE_1440X240P60          64+12    ///< HDMI Video format is 1440x240 & Progressive 60fps
#define PINMUX_HDMIMODE_1440X240P60_16X9     64+13    ///< HDMI Video format is 1440x240 & Progressive 60fps & 16:9
#define PINMUX_HDMIMODE_1440X480P60          64+14    ///< HDMI Video format is 1440x480 & Progressive 60fps
#define PINMUX_HDMIMODE_1440X480P60_16X9     64+15    ///< HDMI Video format is 1440x480 & Progressive 60fps & 16:9
#define PINMUX_HDMIMODE_720X576P50           64+17    ///< HDMI Video format is 720x576 & Progressive 50fps
#define PINMUX_HDMIMODE_720X576P50_16X9      64+18    ///< HDMI Video format is 720x576 & Progressive 50fps & 16:9
#define PINMUX_HDMIMODE_1280X720P50          64+19    ///< HDMI Video format is 1280x720 & Progressive 50fps
#define PINMUX_HDMIMODE_1920X1080I50         64+20    ///< HDMI Video format is 1920x1080 & Interlaced 50fps
#define PINMUX_HDMIMODE_720X576I50           64+21    ///< HDMI Video format is 720x576 & Interlaced 50fps
#define PINMUX_HDMIMODE_720X576I50_16X9      64+22    ///< HDMI Video format is 720x576 & Interlaced 50fps & 16:9
#define PINMUX_HDMIMODE_720X288P50           64+23    ///< HDMI Video format is 720x288 & Progressive 50fps
#define PINMUX_HDMIMODE_720X288P50_16X9      64+24    ///< HDMI Video format is 720x288 & Progressive 50fps & 16:9
#define PINMUX_HDMIMODE_1440X576I50          64+25    ///< HDMI Video format is 1440x576 & Interlaced 50fps
#define PINMUX_HDMIMODE_1440X576I50_16X9     64+26    ///< HDMI Video format is 1440x576 & Interlaced 50fps & 16:9
#define PINMUX_HDMIMODE_1440X288P50          64+27    ///< HDMI Video format is 1440x288 & Progressive 50fps
#define PINMUX_HDMIMODE_1440X288P50_16X9     64+28    ///< HDMI Video format is 1440x288 & Progressive 50fps & 16:9
#define PINMUX_HDMIMODE_1440X576P50          64+29    ///< HDMI Video format is 1440x576 & Progressive 50fps
#define PINMUX_HDMIMODE_1440X576P50_16X9     64+30    ///< HDMI Video format is 1440x576 & Progressive 50fps & 16:9
#define PINMUX_HDMIMODE_1920X1080P50         64+31    ///< HDMI Video format is 1920x1080 & Progressive 50fps
#define PINMUX_HDMIMODE_1920X1080P24         64+32    ///< HDMI Video format is 1920x1080 & Progressive 24fps
#define PINMUX_HDMIMODE_1920X1080P25         64+33    ///< HDMI Video format is 1920x1080 & Progressive 25fps
#define PINMUX_HDMIMODE_1920X1080P30         64+34    ///< HDMI Video format is 1920x1080 & Progressive 30fps
#define PINMUX_HDMIMODE_1920X1080I50_VT1250  64+39    ///< HDMI Video format is 1920x1080 & Interlaced  50fps & V-total is 1250 lines
#define PINMUX_HDMIMODE_1920X1080I100        64+40    ///< HDMI Video format is 1920x1080 & Interlaced  100fps
#define PINMUX_HDMIMODE_1280X720P100         64+41    ///< HDMI Video format is 1280X720  & Progressive 100fps
#define PINMUX_HDMIMODE_720X576P100          64+42    ///< HDMI Video format is 720X576   & Progressive 100fps
#define PINMUX_HDMIMODE_720X576P100_16X9     64+43    ///< HDMI Video format is 720X576   & Progressive 100fps & 16:9
#define PINMUX_HDMIMODE_720X576I100          64+44    ///< HDMI Video format is 720X576  & Interlaced 100fps
#define PINMUX_HDMIMODE_720X576I100_16X9     64+45    ///< HDMI Video format is 720X576  & Interlaced 100fps & 16:9
#define PINMUX_HDMIMODE_1920X1080I120        64+46    ///< HDMI Video format is 1920X1080 & Interlaced 120fps
#define PINMUX_HDMIMODE_1280X720P120         64+47    ///< HDMI Video format is 1280X720  & Progressive 120fps
#define PINMUX_HDMIMODE_720X480P120          64+48    ///< HDMI Video format is 720X480   & Progressive 120fps
#define PINMUX_HDMIMODE_720X480P120_16X9     64+49    ///< HDMI Video format is 720X480   & Progressive 120fps & 16:9
#define PINMUX_HDMIMODE_720X480I120          64+50    ///< HDMI Video format is 720X480  & Interlaced 120fps
#define PINMUX_HDMIMODE_720X480I120_16X9     64+51    ///< HDMI Video format is 720X480  & Interlaced 120fps & 16:9
#define PINMUX_HDMIMODE_720X576P200          64+52    ///< HDMI Video format is 720X576  & Progressive 200fps
#define PINMUX_HDMIMODE_720X576P200_16X9     64+53    ///< HDMI Video format is 720X576  & Progressive 200fps & 16:9
#define PINMUX_HDMIMODE_720X576I200          64+54    ///< HDMI Video format is 720X576  & Interlaced 200fps
#define PINMUX_HDMIMODE_720X576I200_16X9     64+55    ///< HDMI Video format is 720X576  & Interlaced 200fps & 16:9
#define PINMUX_HDMIMODE_720X480P240          64+56    ///< HDMI Video format is 720X480  & Progressive 240fps
#define PINMUX_HDMIMODE_720X480P240_16X9     64+57    ///< HDMI Video format is 720X480  & Progressive 240fps & 16:9
#define PINMUX_HDMIMODE_720X480I240          64+58    ///< HDMI Video format is 720X480  & Interlaced 240fps
#define PINMUX_HDMIMODE_720X480I240_16X9     64+59    ///< HDMI Video format is 720X480  & Interlaced 240fps & 16:9

#define PINMUX_DSI_1_LANE_CMD_MODE_RGB565            96+0 ///< DSI command mode with RGB565 format
#define PINMUX_DSI_1_LANE_CMD_MODE_RGB666P           96+1 ///< DSI command mode with RGB666 packed
#define PINMUX_DSI_1_LANE_CMD_MODE_RGB666L           96+2 ///< DSI command mode with RGB666 loosely
#define PINMUX_DSI_1_LANE_CMD_MODE_RGB888            96+3 ///< DSI command mode with RGB888

#define PINMUX_DSI_1_LANE_VDO_SYNC_PULSE_RGB565      96+4 ///< DSI video sync pulse mode with RGB565 format
#define PINMUX_DSI_1_LANE_VDO_SYNC_PULSE_RGB666P     96+5 ///< DSI video sync pulse mode with RGB666 packed
#define PINMUX_DSI_1_LANE_VDO_SYNC_PULSE_RGB666L     96+6 ///< DSI video sync pulse mode with RGB666 loosely
#define PINMUX_DSI_1_LANE_VDO_SYNC_PULSE_RGB888      96+7 ///< DSI video sync pulse mode with RGB888

#define PINMUX_DSI_1_LANE_VDO_SYNC_EVENT_RGB565      96+8 ///< DSI video sync event burst mode with RGB565 format
#define PINMUX_DSI_1_LANE_VDO_SYNC_EVENT_RGB666P     96+9 ///< DSI video sync event burst mode with RGB666 packed
#define PINMUX_DSI_1_LANE_VDO_SYNC_EVENT_RGB666L     96+10///< DSI video sync event burst mode with RGB666 loosely
#define PINMUX_DSI_1_LANE_VDO_SYNC_EVENT_RGB888      96+11///< DSI video sync event burst mode with RGB888

#define PINMUX_DSI_2_LANE_CMD_MODE_RGB565            96+12///< DSI command mode with RGB565 format
#define PINMUX_DSI_2_LANE_CMD_MODE_RGB666P           96+13///< DSI command mode with RGB666 packed
#define PINMUX_DSI_2_LANE_CMD_MODE_RGB666L           96+14///< DSI command mode with RGB666 loosely
#define PINMUX_DSI_2_LANE_CMD_MODE_RGB888            96+15///< DSI command mode with RGB888

#define PINMUX_DSI_2_LANE_VDO_SYNC_PULSE_RGB565      96+16///< DSI video sync pulse mode with RGB565 format
#define PINMUX_DSI_2_LANE_VDO_SYNC_PULSE_RGB666P     96+17///< DSI video sync pulse mode with RGB666 packed
#define PINMUX_DSI_2_LANE_VDO_SYNC_PULSE_RGB666L     96+18///< DSI video sync pulse mode with RGB666 loosely
#define PINMUX_DSI_2_LANE_VDO_SYNC_PULSE_RGB888      96+19///< DSI video sync pulse mode with RGB888

#define PINMUX_DSI_2_LANE_VDO_SYNC_EVENT_RGB565      96+20///< DSI video sync event burst mode with RGB565 format
#define PINMUX_DSI_2_LANE_VDO_SYNC_EVENT_RGB666P     96+21///< DSI video sync event burst mode with RGB666 packed
#define PINMUX_DSI_2_LANE_VDO_SYNC_EVENT_RGB666L     96+22///< DSI video sync event burst mode with RGB666 loosely
#define PINMUX_DSI_2_LANE_VDO_SYNC_EVENT_RGB888      96+23///< DSI video sync event burst mode with RGB888


/**
    Pinmux selection for LCD

    @note For PINMUX_FUNC_ID_LCD PINMUX_FUNC_ID_LCD2
*//*
typedef enum
{*/
#define PINMUX_LCD_SEL_GPIO                 0           ///< GPIO
#define PINMUX_LCD_SEL_CCIR656              1           ///< CCIR-656 8 bits. Enable CCIR_YC[0..7]/CCIR_CLK on LCD[0..8] (L_GPIO[0..8])
#define PINMUX_LCD_SEL_CCIR656_16BITS       2           ///< CCIR-656 16 bits. Enable CCIR_Y[0..7]/CCIR_CLK/CCIR_C[0..7] on LCD[0..8]/LCD[12..19] (L_GPIO[0..8]/L_GPIO[12..19])
#define PINMUX_LCD_SEL_CCIR601              3           ///< CCIR-601 8 bits. Enable CCIR_YC[0..7]/CCIR_CLK/CCIR_VD/CCIR_HD on LCD[0..10] (L_GPIO[0..10])
#define PINMUX_LCD_SEL_CCIR601_16BITS       4           ///< CCIR-601 16 bits. Enable CCIR_Y[0..7]/CCIR_CLK/CCIR_VD/CCIR_HD/CCIR_C[0..7] on LCD[0..19] (L_GPIO[0..19])
#define PINMUX_LCD_SEL_SERIAL_RGB_6BITS     5           ///< Serial RGB 6 bits. Enable RGB_D[2..7]/RGB_CLK/RGB_VD/RGB_HD on LCD[2..10] (L_GPIO[2..10])
#define PINMUX_LCD_SEL_SERIAL_RGB_8BITS     6           ///< Serial RGB 8 bits. Enable RGB_D[0..7]/RGB_CLK/RGB_VD/RGB_HD on LCD[0..10] (L_GPIO[0..10])
#define PINMUX_LCD_SEL_SERIAL_YCbCr_8BITS   7           ///< Serial YCbCr 8 bits. Enable CCIR_YC[0..7]/CCIR_CLK/CCIR_VD/CCIR_HD on LCD[0..10] (L_GPIO[0..10])
#define PINMUX_LCD_SEL_PARALLE_RGB565       8           ///< Parallel RGB565. Enable RGB_C0_[0..4]/RGB_DCLK/RGB_VS/RGB_HS/RGB_C1_[0..5]/RGB_C2_[0..4] on LCD[3..10]/LCD[14..19]/LCD[23..27] (L_GPIO[3..10]/L_GPIO[14..19]/L_GPIO[23..27])
#define PINMUX_LCD_SEL_PARALLE_RGB666       9           ///< Parallel RGB666. Enable RGB_C0_[0..5]/RGB_DCLK/RGB_VS/RGB_HS/RGB_C1_[0..5]/RGB_C2_[0..5] on LCD[2..10]/LCD[14..19]/LCD[22..27] (L_GPIO[2..10]/L_GPIO[14..19]/L_GPIO[22..27])
#define PINMUX_LCD_SEL_PARALLE_RGB888       10           ///< Parallel RGB888. Enable RGB_C0_[0..7]/RGB_DCLK/RGB_VS/RGB_HS/RGB_C1_[0..7]/RGB_C2_[0..7] on LCD[0..10]/LCD[12..27] (L_GPIO[2..10]/L_GPIO[12..27])
#define PINMUX_LCD_SEL_RGB_16BITS           11           ///< RGB 16 bits. Enable CCIR_Y[0..7]/CCIR_CLK/CCIR_VD/CCIR_HD/CCIR_C[0..7] on LCD[0..19] (L_GPIO[0..19])
#define PINMUX_LCD_SEL_PARALLE_MI_8BITS     12           ///< Parallel MI 8 bits.
                                                    ///< When PINMUX_PMI_CFG_NORMAL is set Enable MPU_D[0..7]/MPU_CS/MPU_RS/MPU_WR/MPU_RD on LCD[0..7]/LCD[9..12] (L_GPIO[0..7]/L_GPIO[9..12])
                                                    ///< When PINMUX_PMI_CFG_2ND_PINMUX is set Enable MPU2_RS/MPU2_CS/MPU2_D[0..7]/MPU2_WR/MPU2_RD on LCD[12..22]/LCD[24] (L_GPIO[12..22]/L_GPIO[24])
#define PINMUX_LCD_SEL_PARALLE_MI_9BITS     13           ///< Parallel MI 9 bits.
                                                    ///< When PINMUX_PMI_CFG_NORMAL is set Enable MPU_D[0..8]/MPU_CS/MPU_RS/MPU_WR/MPU_RD on LCD[0..7]/LCD[9..13] (L_GPIO[0..7]/L_GPIO[9..13])
                                                    ///< When PINMUX_PMI_CFG_2ND_PINMUX is set Enable MPU2_RS/MPU2_CS/MPU2_D[0..8]/MPU2_WR/MPU2_RD on LCD[12..24] (L_GPIO[12..24])
#define PINMUX_LCD_SEL_PARALLE_MI_16BITS    14           ///< Parallel MI 16 bits. Enable MPU_D[0..15]/MPU_CS/MPU_RS/MPU_WR/MPU_RD on LCD[0..7]/LCD[9..20] (L_GPIO[0..7]/L_GPIO[9..20])
#define PINMUX_LCD_SEL_PARALLE_MI_18BITS    15           ///< Parallel MI 18 bits. Enable MPU_D[0..17]/MPU_CS/MPU_RS/MPU_WR/MPU_RD on LCD[0..7]/LCD[9..22] (L_GPIO[0..7]/L_GPIO[9..22])
#define PINMUX_LCD_SEL_SERIAL_MI_SDIO       16           ///< Serial MI SDIO bi-direction. Enable MPU_CS/MPU_RS/MPU_CLK/MPU_SDIO on LCD[15..18] (L_GPIO[15..18])
#define PINMUX_LCD_SEL_SERIAL_MI_SDI_SDO    17           ///< Serial MI SDI/SDO seperate. Enable MPU_SDO/MPU_SDI/MPU_CS/MPU_RS/MPU_CLK on LCD[13..17] (L_GPIO[13..17])
#define PINMUX_LCD_SEL_MIPI                 18           ///< MIPI DSI

#define PINMUX_LCD_SEL_TE_ENABLE  0x01<<23            ///< TE Enable (For Parallel/Serial MI)
                                                    ///< When normal (PINMUX_PMI_CFG_NORMAL) parallel MI enable MPU_TE on LCD8 (L_GPIO[8]).
                                                    ///< When 2nd (PINMUX_PMI_CFG_2ND_PINMUX) parallel MI enable MPU_TE on LCD25 (L_GPIO[25]).
                                                    ///< When serial MI enable MI_TE on LCD19 (L_GPIO[19]).
#define PINMUX_LCD_SEL_DE_ENABLE  0x01<<24            ///< DE Enable (For CCIR656 8/16bits CCIR601 16bits Serial RGB 6/8bits Serial YCbCr 8 bits RGB 16 bits)
                                                    ///< When corresponding item in pinmux_init() is set with PINMUX_DISPMUX_SEL_LCD enable CCIR_DE on LCD11 (L_GPIO[11]).
                                                    ///< When corresponding item in pinmux_init() is set with PINMUX_DISPMUX_SEL_LCD2 enable CCIR2_DE on LCD23 (L_GPIO[23]).
#define PINMUX_LCD_SEL_HVLD_VVLD  0x01<<25            ///< HVLD/VVLD Enable (For CCIR-601 8 bits). Enable CCIR_HVLD/CCIR_VVLD on LCD[12..13] (L_GPIO[12..13])
#define PINMUX_LCD_SEL_FIELD  0x01<<26                ///< FIELD Enable (For CCIR-601 8 bits). Enable CCIR_FIELD on LCD14 (L_GPIO[14])

#define PINMUX_LCD_SEL_FEATURE_MSK  0x0F<<23

 /*   ENUM_DUMMY4WORD(PINMUX_LCD_SEL)
} PINMUX_LCD_SEL;
*/
/**
    @name Display ICST output type select.
*/
//@{
//typedef enum {
#define ICST_CCIR601     0                    ///< ICST type 601
#define ICST_ITU_BT_709  1                    ///< ICST type 709
/*
    ENUM_DUMMY4WORD(ICST_TYPE)
} ICST_TYPE;
*/
//@}


/**
    @addtogroup mIDISPIDE
*/
//@{

/**
    Display plane(Osd/Video) Enable

    These definitions are used for ide_setAllWindowEn()/ide_getWindowEn() to enable/disable
    the osd/video layers.

    @name   Display plane(Osd/Video) Enable
*/
//@{
#define DISPLAY_OSD1_EN                 0x02
#define DISPLAY_OSD2_EN                 0x04
#define DISPLAY_VIDEO1_EN               0x08
#define DISPLAY_VIDEO2_EN               0x10
//@}

/**
    Display device type.

    Select display device.
\n  The IDE engine could output various type of interface format as specified in ide_setDevice().
*/
//@{
/*
typedef enum {
*/
    //DISPLAY_DEVICE_CASIO1G           0x0
#define DISPLAY_DEVICE_CASIO2G           0x1
#define DISPLAY_DEVICE_AU                0x2
#define DISPLAY_DEVICE_TOPPOLY           0x3
#define DISPLAY_DEVICE_CCIR656           0x4
#define DISPLAY_DEVICE_CCIR601           0x5
#define DISPLAY_DEVICE_TV                0x6
#define DISPLAY_DEVICE_HDMI_24BIT        0x7
#define DISPLAY_DEVICE_HDMI_16BIT        0x8
#define DISPALY_DEVICE_PARALLEL          0x9
#define DISPLAY_DEVICE_CCIR656_16BIT     0xA
#define DISPLAY_DEVICE_CCIR601_16BIT     0xB
#define DISPLAY_DEVICE_MI                0xC
#define DISPLAY_DEVICE_MIPIDSI           0xD
#define DISPLAY_DEVICE_RGB_16BIT         0xE
/*
    ENUM_DUMMY4WORD(IDE_DEVICE_TYPE)
} IDE_DEVICE_TYPE;
*/
//@}


/**
    IDE LCD pixel direction.

    Set the output pixel RGB direction.
*/
//@{
//typedef enum {
#define IDE_PDIR_RGB  0   ///< R...G...B...
#define IDE_PDIR_RBG  1    ///< R...B...G...
/*
    ENUM_DUMMY4WORD(IDE_PDIR)
} IDE_PDIR;
*/
//@}

/**
    IDE RGB format begin color.

    Used in ide_setOdd()/ ide_setEven() to set the interlaced mode odd/even begin color.
*/
//@{
//typedef enum {
#define IDE_LCD_R  0      ///< Color begin from R
#define IDE_LCD_G  1      ///< Color begin from G
#define IDE_LCD_B  2       ///< Color begin from B
/*
    ENUM_DUMMY4WORD(IDE_PORDER)
} IDE_PORDER;
*/
//@}

/**
    IDE dithering valid bits.

    Select the dithering function valid bits.
*/
//@{
//typedef enum {
#define IDE_DITHER_4BITS  0   ///< Dithering 4 valid bits.
#define IDE_DITHER_5BITS  1   ///< Dithering 5 valid bits.
#define IDE_DITHER_6BITS  2   ///< Dithering 6 valid bits.
#define IDE_DITHER_7BITS  3    ///< Dithering 7 valid bits.
/*
    ENUM_DUMMY4WORD(IDE_DITHER_VBITS)
} IDE_DITHER_VBITS;
*/
//@}

/**
    @name Display Device Control Group

    These definitions are used for display control API (DISP_OBJ.devCtrl) as the display device control portal.
    The display device such as TV_PAL/TV_NTSC/HDMI/PANEL are controlled by this API.
*/
//@{

/**
    Display Device Rotation ID definition

    This definition is used for the OP Code: "DISPDEV_SET_ROTATE" in the devCtrl API to specify
    the display device rotation configuration.
*/
//typedef enum{
#define DISPDEV_LCD_ROTATE_NONE    ///< Config Panel Register to Set LCD None of Rotation.
#define DISPDEV_LCD_ROTATE_180     ///< Config Panel Register to Set LCD Rotation 180 degrees.
/*
    ENUM_DUMMY4WORD(DISPDEV_LCD_ROTATE)
}DISPDEV_LCD_ROTATE;
*/

#endif

