#include "delay.h"

void wait_some_time(uint32_t waiting_time)
{
	for( uint32_t i = 0; i < waiting_time; i++)
	{
		nop();
	}
}