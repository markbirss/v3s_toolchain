cmd_/opt/retro-v3s/arm-retrov3s-linux-uclibcgnueabi/sysroot/usr/include/linux/dvb/.install := /bin/bash scripts/headers_install.sh /opt/retro-v3s/arm-retrov3s-linux-uclibcgnueabi/sysroot/usr/include/linux/dvb ./include/uapi/linux/dvb audio.h ca.h dmx.h frontend.h net.h osd.h version.h video.h; /bin/bash scripts/headers_install.sh /opt/retro-v3s/arm-retrov3s-linux-uclibcgnueabi/sysroot/usr/include/linux/dvb ./include/linux/dvb ; /bin/bash scripts/headers_install.sh /opt/retro-v3s/arm-retrov3s-linux-uclibcgnueabi/sysroot/usr/include/linux/dvb ./include/generated/uapi/linux/dvb ; for F in ; do echo "\#include <asm-generic/$$F>" > /opt/retro-v3s/arm-retrov3s-linux-uclibcgnueabi/sysroot/usr/include/linux/dvb/$$F; done; touch /opt/retro-v3s/arm-retrov3s-linux-uclibcgnueabi/sysroot/usr/include/linux/dvb/.install
