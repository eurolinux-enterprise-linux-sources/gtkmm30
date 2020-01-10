// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GTKMM_SWITCH_H
#define _GTKMM_SWITCH_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 2010 The gtkmm Development Team
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

#include <gtkmm/widget.h>
#include <gtkmm/activatable.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkSwitch GtkSwitch;
typedef struct _GtkSwitchClass GtkSwitchClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gtk
{ class Switch_Class; } // namespace Gtk
namespace Gtk
{

/** A "light switch"-style toggle.
 *
 * The Switch widget has two states: on or off. The user can control
 * which state should be active by clicking the empty area, or by dragging the
 * handle.
 *
 * @ingroup Widgets
 * @newin{3,0}
 */

class Switch
  : public Widget,
    public Activatable
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef Switch CppObjectType;
  typedef Switch_Class CppClassType;
  typedef GtkSwitch BaseObjectType;
  typedef GtkSwitchClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  virtual ~Switch();

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class Switch_Class;
  static CppClassType switch_class_;

  // noncopyable
  Switch(const Switch&);
  Switch& operator=(const Switch&);

protected:
  explicit Switch(const Glib::ConstructParams& construct_params);
  explicit Switch(GtkSwitch* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GtkObject.
  GtkSwitch*       gobj()       { return reinterpret_cast<GtkSwitch*>(gobject_); }

  ///Provides access to the underlying C GtkObject.
  const GtkSwitch* gobj() const { return reinterpret_cast<GtkSwitch*>(gobject_); }


public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


private:

  
public:

  Switch();

  
  /** Changes the state of @a sw to the desired one.
   * 
   * @newin{3,0}
   * @param is_active <tt>true</tt> if @a sw should be active, and <tt>false</tt> otherwise.
   */
  void set_active(bool is_active =  true);
  
  /** Gets whether the Gtk::Switch is in its "on" or "off" state.
   * 
   * @newin{3,0}
   * @return <tt>true</tt> if the Gtk::Switch is active, and <tt>false</tt> otherwise.
   */
  bool get_active() const;

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Whether the switch is on or off.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_active() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** Whether the switch is on or off.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_active() const;
#endif //#GLIBMM_PROPERTIES_ENABLED


};

} // namespace Gtk


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::Switch
   */
  Gtk::Switch* wrap(GtkSwitch* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKMM_SWITCH_H */

