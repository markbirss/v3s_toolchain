cmd_/opt/retro-v3s/arm-retrov3s-linux-uclibcgnueabi/sysroot/usr/include/video/.install := /bin/bash scripts/headers_install.sh /opt/retro-v3s/arm-retrov3s-linux-uclibcgnueabi/sysroot/usr/include/video ./include/uapi/video edid.h sisfb.h uvesafb.h; /bin/bash scripts/headers_install.sh /opt/retro-v3s/arm-retrov3s-linux-uclibcgnueabi/sysroot/usr/include/video ./include/video ; /bin/bash scripts/headers_install.sh /opt/retro-v3s/arm-retrov3s-linux-uclibcgnueabi/sysroot/usr/include/video ./include/generated/uapi/video ; for F in ; do echo "\#include <asm-generic/$$F>" > /opt/retro-v3s/arm-retrov3s-linux-uclibcgnueabi/sysroot/usr/include/video/$$F; done; touch /opt/retro-v3s/arm-retrov3s-linux-uclibcgnueabi/sysroot/usr/include/video/.install
