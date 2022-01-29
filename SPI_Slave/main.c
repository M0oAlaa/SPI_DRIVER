#include "APP/App.h"

void main(void)
{
	/*Call App initialization*/
	APP_init();
	while(1)
	{
		/*Call the program*/
		App_prog();
	}
}
