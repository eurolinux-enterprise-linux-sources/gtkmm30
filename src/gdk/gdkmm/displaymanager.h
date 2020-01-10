// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GDKMM_DISPLAYMANAGER_H
#define _GDKMM_DISPLAYMANAGER_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/*
 * Copyright (C) 2002 The gtkmm Development Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#include <vector>

#include <glibmm/object.h>
#include <gdkmm/display.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GdkDisplayManager GdkDisplayManager;
typedef struct _GdkDisplayManagerClass GdkDisplayManagerClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gdk
{ class DisplayManager_Class; } // namespace Gdk
namespace Gdk
{

/** The purpose of the GdkDisplayManager singleton object is to offer notification when displays appear or disappear or the
 * default display changes.
 */

class DisplayManager : public Glib::Object
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef DisplayManager CppObjectType;
  typedef DisplayManager_Class CppClassType;
  typedef GdkDisplayManager BaseObjectType;
  typedef GdkDisplayManagerClass BaseClassType;

private:  friend class DisplayManager_Class;
  static CppClassType displaymanager_class_;

private:
  // noncopyable
  DisplayManager(const DisplayManager&);
  DisplayManager& operator=(const DisplayManager&);

protected:
  explicit DisplayManager(const Glib::ConstructParams& construct_params);
  explicit DisplayManager(GdkDisplayManager* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
  virtual ~DisplayManager();

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GdkDisplayManager*       gobj()       { return reinterpret_cast<GdkDisplayManager*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GdkDisplayManager* gobj() const { return reinterpret_cast<GdkDisplayManager*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GdkDisplayManager* gobj_copy();

private:

protected:

public:

  
  /** Gets the singleton Gdk::DisplayManager object.
   * 
   * When called for the first time, this function consults the
   * <tt>GDK_BACKEND</tt> environment variable to find out which
   * of the supported GDK backends to use (in case GDK has been compiled
   * with multiple backends).
   * 
   * @newin{2,2}
   * @return The global Gdk::DisplayManager singleton;
   * gdk_parse_args(), gdk_init(), or gdk_init_check() must have
   * been called first.
   */
  static Glib::RefPtr<DisplayManager> get();
  
  /** Gets the default Gdk::Display.
   * 
   * @newin{2,2}
   * @return A Gdk::Display, or <tt>0</tt>
   * if there is no default display.
   */
  Glib::RefPtr<Display> get_default_display();
  
  /** Gets the default Gdk::Display.
   * 
   * @newin{2,2}
   * @return A Gdk::Display, or <tt>0</tt>
   * if there is no default display.
   */
  Glib::RefPtr<const Display> get_default_display() const;

  
  /** Sets @a display as the default display.
   * 
   * @newin{2,2}
   * @param display A Gdk::Display.
   */
  void set_default_display(const Glib::RefPtr<Display>& display);

 
  /** List all currently open displays.
   * 
   * @newin{2,2}
   * @return A list of Gdk::Display objects.
   */
  std::vector< Glib::RefPtr<Display> > list_displays();

  
  /** Opens a display.
   * 
   * @newin{3,0}
   * @param name The name of the display to open.
   * @return A Gdk::Display, or <tt>0</tt>
   * if the display could not be opened.
   */
  Glib::RefPtr<Display> open_display(const Glib::ustring& name);

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** The default display for GDK.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::RefPtr<Display> > property_default_display() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** The default display for GDK.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Display> > property_default_display() const;
#endif //#GLIBMM_PROPERTIES_ENABLED


  //We use no_default_handler because GdkDisplayManagerClass is private.

  
/**
   * @par Slot Prototype:
   * <tt>void on_my_%display_opened(const Glib::RefPtr<Display>& display)</tt>
   *
   * The signal_display_opened() signal is emitted when a display is opened.
   * 
   * @newin{2,2}
   * @param display The opened display.
   */

  Glib::SignalProxy1< void,const Glib::RefPtr<Display>& > signal_display_opened();


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


};

} // namespace Gdk


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gdk::DisplayManager
   */
  Glib::RefPtr<Gdk::DisplayManager> wrap(GdkDisplayManager* object, bool take_copy = false);
}


#endif /* _GDKMM_DISPLAYMANAGER_H */

