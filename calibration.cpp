extern "C" {
#include <user_interface.h>
}

RF_PRE_INIT(){
  system_phy_set_powerup_option(2);
}