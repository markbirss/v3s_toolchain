cmd_/opt/retro-v3s/arm-retrov3s-linux-uclibcgnueabi/sysroot/usr/include/xen/.install := /bin/bash scripts/headers_install.sh /opt/retro-v3s/arm-retrov3s-linux-uclibcgnueabi/sysroot/usr/include/xen ./include/uapi/xen evtchn.h gntalloc.h gntdev.h privcmd.h; /bin/bash scripts/headers_install.sh /opt/retro-v3s/arm-retrov3s-linux-uclibcgnueabi/sysroot/usr/include/xen ./include/xen ; /bin/bash scripts/headers_install.sh /opt/retro-v3s/arm-retrov3s-linux-uclibcgnueabi/sysroot/usr/include/xen ./include/generated/uapi/xen ; for F in ; do echo "\#include <asm-generic/$$F>" > /opt/retro-v3s/arm-retrov3s-linux-uclibcgnueabi/sysroot/usr/include/xen/$$F; done; touch /opt/retro-v3s/arm-retrov3s-linux-uclibcgnueabi/sysroot/usr/include/xen/.install