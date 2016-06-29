#include <gpio.h>
#include <ioc.h>
#include <driverlib/sys_ctrl.h>

#define LED_IO_6 IOID_6

int main(void)
{	
	SysCtrlPowerEverything();
	IOCPinTypeGpioOutput(LED_IO_6);
	GPIO_writeDio(LED_IO_6, 1);

	while (1)
	{
		CPUdelay(500000);
		GPIO_toggleDio(LED_IO_6);
	}
}
