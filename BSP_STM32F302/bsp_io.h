#ifndef __BSP_IO_H_
#define __BSP_IO_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <xpd_gpio.h>

#define CAN_TX_PIN          PB9
#define CAN_TX_CFG          (&BSP_IOCfg[1])
#define CAN_RX_PIN          PB8
#define CAN_RX_CFG          (&BSP_IOCfg[1])

#define CAN_SILENT_PIN      PC13
#define CAN_SILENT_CFG      (&BSP_IOCfg[0])
#define CAN_TRV_PS_PIN      PA10
#define CAN_TRV_PS_CFG      (&BSP_IOCfg[0])

#define USB_CONNECT_PIN     PA15
#define USB_CONNECT_CFG     (&BSP_IOCfg[0])

#define USB_DP_PIN          PA12
#define USB_DP_CFG          (&BSP_IOCfg[2])
#define USB_DM_PIN          PA11
#define USB_DM_CFG          (&BSP_IOCfg[2])

#define LED_RED_PIN         PB0
#define LED_RED_CFG         (&BSP_IOCfg[3])
#define LED_GREEN_PIN       PB13
#define LED_GREEN_CFG       (&BSP_IOCfg[3])

extern const GPIO_InitType BSP_IOCfg[];

#ifdef __cplusplus
}
#endif

#endif /* __BSP_IO_H_ */
