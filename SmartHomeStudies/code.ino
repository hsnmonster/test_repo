  #include "App/Switching.h"
  #include <util/delay.h>

int main(void){

  
          while(1){
            if (switching_inputSensing(1)==0)
{
  switching_disconnect(1);
  }
  else if (switching_inputSensing(1)==1)
  {
      switching_connect(1);

    }

    if (switching_inputSensing(2)==0)
{
  switching_disconnect(2);
  }
  else if (switching_inputSensing(2)==1)
  {
      switching_connect(2);

    }

    if (switching_inputSensing(3)==0)
{
  switching_disconnect(3);
  }
  else if (switching_inputSensing(3)==1)
  {
      switching_connect(3);

    }

    if (switching_inputSensing(4)==0)
{
  switching_disconnect(4);
  }
  else if (switching_inputSensing(4)==1)
  {
      switching_connect(4);

    }

    switching_loadSensing(1);
    switching_loadSensing(2);
    switching_loadSensing(3);
    switching_loadSensing(4);
            }
return 0;
  }

  
       
  
  
 
