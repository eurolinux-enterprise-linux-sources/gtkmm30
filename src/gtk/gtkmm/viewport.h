// Generated by gmmproc 2.50.0 -- DO NOT MODIFY!
#ifndef _GTKMM_VIEWPORT_H
#define _GTKMM_VIEWPORT_H


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

#include <gtkmm/bin.h>
#include <gtkmm/scrollable.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GtkViewport = struct _GtkViewport;
using GtkViewportClass = struct _GtkViewportClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class Viewport_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk {

/** An adapter which makes widgets scrollable.
 *
 * @ingroup Widgets
 * @ingroup Containers
 */

class Viewport
 : public Bin,
   public Scrollable
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef Viewport CppObjectType;
  typedef Viewport_Class CppClassType;
  typedef GtkViewport BaseObjectType;
  typedef GtkViewportClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  Viewport(Viewport&& src) noexcept;
  Viewport& operator=(Viewport&& src) noexcept;

  // noncopyable
  Viewport(const Viewport&) = delete;
  Viewport& operator=(const Viewport&) = delete;

  ~Viewport() noexcept override;

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class Viewport_Class;
  static CppClassType viewport_class_;

protected:
  explicit Viewport(const Glib::ConstructParams& construct_params);
  explicit Viewport(GtkViewport* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GtkObject.
  GtkViewport*       gobj()       { return reinterpret_cast<GtkViewport*>(gobject_); }

  ///Provides access to the underlying C GtkObject.
  const GtkViewport* gobj() const { return reinterpret_cast<GtkViewport*>(gobject_); }


public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


private:

  
public:

    explicit Viewport(const Glib::RefPtr<Adjustment>& hadjustment, const Glib::RefPtr<Adjustment>& vadjustment);


   //deprecated

  
  /** Sets the shadow type of the viewport.
   * 
   * @param type The new shadow type.
   */
  void set_shadow_type(ShadowType type);

  
  /** Gets the shadow type of the Gtk::Viewport. See
   * set_shadow_type().
   * 
   * @return The shadow type.
   */
  ShadowType get_shadow_type() const;

  
  /** Gets the bin window of the Gtk::Viewport.
   * 
   * @newin{2,20}
   * 
   * @return A Gdk::Window.
   */
  Glib::RefPtr<Gdk::Window> get_bin_window();
  
  /** Gets the bin window of the Gtk::Viewport.
   * 
   * @newin{2,20}
   * 
   * @return A Gdk::Window.
   */
  Glib::RefPtr<const Gdk::Window> get_bin_window() const;

  
  /** Gets the view window of the Gtk::Viewport.
   * 
   * @newin{2,22}
   * 
   * @return A Gdk::Window.
   */
  Glib::RefPtr<Gdk::Window> get_view_window();
  
  /** Gets the view window of the Gtk::Viewport.
   * 
   * @newin{2,22}
   * 
   * @return A Gdk::Window.
   */
  Glib::RefPtr<const Gdk::Window> get_view_window() const;

  /** Determines how the shadowed box around the viewport is drawn.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< ShadowType > property_shadow_type() ;

/** Determines how the shadowed box around the viewport is drawn.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< ShadowType > property_shadow_type() const;


};

}  //namespace Gtk


namespace Glib
{
  /** A Glib::wrap() method for this object.
   *
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::Viewport
   */
  Gtk::Viewport* wrap(GtkViewport* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKMM_VIEWPORT_H */

