// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GTKMM_INVISIBLE_H
#define _GTKMM_INVISIBLE_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/*
 * Copyright (C) 1998-2002 The gtkmm Development Team
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


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkInvisible GtkInvisible;
typedef struct _GtkInvisibleClass GtkInvisibleClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gtk
{ class Invisible_Class; } // namespace Gtk
namespace Gtk
{

/** This widget is used internally in GTK+, and is probably not useful for application developers.
 * It is used for reliable pointer grabs and selection handling in the code for drag-and-drop.
 * @ingroup Widgets
 */

class Invisible : public Widget
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef Invisible CppObjectType;
  typedef Invisible_Class CppClassType;
  typedef GtkInvisible BaseObjectType;
  typedef GtkInvisibleClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  virtual ~Invisible();

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class Invisible_Class;
  static CppClassType invisible_class_;

  // noncopyable
  Invisible(const Invisible&);
  Invisible& operator=(const Invisible&);

protected:
  explicit Invisible(const Glib::ConstructParams& construct_params);
  explicit Invisible(GtkInvisible* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GtkObject.
  GtkInvisible*       gobj()       { return reinterpret_cast<GtkInvisible*>(gobject_); }

  ///Provides access to the underlying C GtkObject.
  const GtkInvisible* gobj() const { return reinterpret_cast<GtkInvisible*>(gobject_); }


public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


private:

public:
  Invisible();
    explicit Invisible(const Glib::RefPtr<Gdk::Screen>& screen);


  /** Returns the Gdk::Screen object associated with @a invisible
   * 
   * @newin{2,2}
   * @return The associated Gdk::Screen.
   */
  Glib::RefPtr<Gdk::Screen> get_screen();
  
  /** Returns the Gdk::Screen object associated with @a invisible
   * 
   * @newin{2,2}
   * @return The associated Gdk::Screen.
   */
  Glib::RefPtr<const Gdk::Screen> get_screen() const;
  
  /** Sets the Gdk::Screen where the Gtk::Invisible object will be displayed.
   * 
   * @newin{2,2}
   * @param screen A Gdk::Screen.
   */
  void set_screen(const Glib::RefPtr<Gdk::Screen>& screen);

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** The screen where this window will be displayed.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::RefPtr<Gdk::Screen> > property_screen() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** The screen where this window will be displayed.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gdk::Screen> > property_screen() const;
#endif //#GLIBMM_PROPERTIES_ENABLED


};

} //namespace Gtk


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::Invisible
   */
  Gtk::Invisible* wrap(GtkInvisible* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKMM_INVISIBLE_H */

