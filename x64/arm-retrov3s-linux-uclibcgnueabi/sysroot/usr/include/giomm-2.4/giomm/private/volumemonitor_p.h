// Generated by gmmproc 2.54.0 -- DO NOT MODIFY!
#ifndef _GIOMM_VOLUMEMONITOR_P_H
#define _GIOMM_VOLUMEMONITOR_P_H


#include <glibmm/private/object_p.h>

#include <glibmm/class.h>

namespace Gio
{

class VolumeMonitor_Class : public Glib::Class
{
public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  using CppObjectType = VolumeMonitor;
  using BaseObjectType = GVolumeMonitor;
  using BaseClassType = GVolumeMonitorClass;
  using CppClassParent = Glib::Object_Class;
  using BaseClassParent = GObjectClass;

  friend class VolumeMonitor;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  const Glib::Class& init();


  static void class_init_function(void* g_class, void* class_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.
  static void volume_added_callback(GVolumeMonitor* self, GVolume* p0);
  static void volume_removed_callback(GVolumeMonitor* self, GVolume* p0);
  static void volume_changed_callback(GVolumeMonitor* self, GVolume* p0);
  static void mount_added_callback(GVolumeMonitor* self, GMount* p0);
  static void mount_removed_callback(GVolumeMonitor* self, GMount* p0);
  static void mount_pre_unmount_callback(GVolumeMonitor* self, GMount* p0);
  static void mount_changed_callback(GVolumeMonitor* self, GMount* p0);
  static void drive_connected_callback(GVolumeMonitor* self, GDrive* p0);
  static void drive_disconnected_callback(GVolumeMonitor* self, GDrive* p0);
  static void drive_changed_callback(GVolumeMonitor* self, GDrive* p0);

  //Callbacks (virtual functions):
};


} // namespace Gio


#endif /* _GIOMM_VOLUMEMONITOR_P_H */

