#include "lib/include/leafengine.h"

int main()
{
	/* Setup the console game engine */
  setupCge();
	
  while(running)
  {
		
		/* Drawing & Logicstarts here */

		/* Processing starts here */
		process();
  }
	
	/* Exit functionality */
	exitCge();
	
  return 0;
}