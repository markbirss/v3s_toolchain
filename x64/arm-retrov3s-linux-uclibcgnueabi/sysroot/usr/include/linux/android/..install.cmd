cmd_/opt/retro-v3s/arm-retrov3s-linux-uclibcgnueabi/sysroot/usr/include/linux/android/.install := /bin/bash scripts/headers_install.sh /opt/retro-v3s/arm-retrov3s-linux-uclibcgnueabi/sysroot/usr/include/linux/android ./include/uapi/linux/android binder.h; /bin/bash scripts/headers_install.sh /opt/retro-v3s/arm-retrov3s-linux-uclibcgnueabi/sysroot/usr/include/linux/android ./include/linux/android ; /bin/bash scripts/headers_install.sh /opt/retro-v3s/arm-retrov3s-linux-uclibcgnueabi/sysroot/usr/include/linux/android ./include/generated/uapi/linux/android ; for F in ; do echo "\#include <asm-generic/$$F>" > /opt/retro-v3s/arm-retrov3s-linux-uclibcgnueabi/sysroot/usr/include/linux/android/$$F; done; touch /opt/retro-v3s/arm-retrov3s-linux-uclibcgnueabi/sysroot/usr/include/linux/android/.install