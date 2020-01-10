// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GTKMM_HVBOX_H
#define _GTKMM_HVBOX_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 1998-2011 The gtkmm Development Team
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


#include <gtkmm/box.h>

#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkVBox GtkVBox;
typedef struct _GtkVBoxClass GtkVBoxClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gtk
{ class VBox_Class; } // namespace Gtk
#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkHBox GtkHBox;
typedef struct _GtkHBoxClass GtkHBoxClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gtk
{ class HBox_Class; } // namespace Gtk
namespace Gtk
{

/** Vertical Box for laying widgets in a vertical row.
 *
 * You should create these objects, but it is more comfortable to pass
 * around pointers of Gtk::Box. All the methods that do anything are in
 * class Gtk::Box and this allows you to later change the direction of the
 * box, when there's no dependencies to HBox and VBox classes.
 *
 * @ingroup Widgets
 * @ingroup Containers
 *
 * @deprecated Use Box instead, which is a very quick and easy change. But we recommend switching to Grid, since
 * Box will go away eventually.
 */

class VBox : public Box
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef VBox CppObjectType;
  typedef VBox_Class CppClassType;
  typedef GtkVBox BaseObjectType;
  typedef GtkVBoxClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  virtual ~VBox();

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class VBox_Class;
  static CppClassType vbox_class_;

  // noncopyable
  VBox(const VBox&);
  VBox& operator=(const VBox&);

protected:
  explicit VBox(const Glib::ConstructParams& construct_params);
  explicit VBox(GtkVBox* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GtkObject.
  GtkVBox*       gobj()       { return reinterpret_cast<GtkVBox*>(gobject_); }

  ///Provides access to the underlying C GtkObject.
  const GtkVBox* gobj() const { return reinterpret_cast<GtkVBox*>(gobject_); }


public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


private:

  //TODO: Do this when we can stop using this as a base class elsewhere, when we break ABI: _IS_DEPRECATED
public:

  //TODO: Remove the homogoenous parameter as it was removed in gtk_box_new().
  /** Creates a new vertical box.
   * @param homogeneous <tt>true</tt> if all children are to be given equal space allotments.
   * @param spacing Determines the space in pixels between child widgets.
   */
    explicit VBox(bool homogeneous =  false, int spacing =  0);


};

/** Horizontal Box for laying widgets in a horizontal row.
 *
 * You should create these objects, but it is more comfortable to pass
 * around pointers of Gtk::Box. All the methods that do anything are in
 * class Gtk::Box and this allows you to later change the direction of the
 * box, when there's no dependencies to HBox and VBox classes.
 *
 * Use the Gtk::Box packing interface to determine the arrangement, spacing,
 * width, and alignment of Gtk::HBox children.
 *
 * All children are allocated the same height.
 *
 * @ingroup Widgets
 * @ingroup Containers
 *
 * @deprecated Use Box instead, which is a very quick and easy change. But we recommend switching to Grid, since
 * Box will go away eventually.
 */

class HBox : public Box
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef HBox CppObjectType;
  typedef HBox_Class CppClassType;
  typedef GtkHBox BaseObjectType;
  typedef GtkHBoxClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  virtual ~HBox();

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class HBox_Class;
  static CppClassType hbox_class_;

  // noncopyable
  HBox(const HBox&);
  HBox& operator=(const HBox&);

protected:
  explicit HBox(const Glib::ConstructParams& construct_params);
  explicit HBox(GtkHBox* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GtkObject.
  GtkHBox*       gobj()       { return reinterpret_cast<GtkHBox*>(gobject_); }

  ///Provides access to the underlying C GtkObject.
  const GtkHBox* gobj() const { return reinterpret_cast<GtkHBox*>(gobject_); }


public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


private:

  //TODO: Do this when we can stop using this as a base class elsewhere, when we break ABI: _IS_DEPRECATED
public:

  //TODO: Remove the homogoenous parameter as it was removed in gtk_box_new().
  /** Creates a new horizontal box.
   * @param homogeneous <tt>true</tt> if all children are to be given equal space allotments.
   * @param spacing Determines the space in pixels between child widgets.
   */
    explicit HBox(bool homogeneous =  false, int spacing =  0);


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
   * @relates Gtk::VBox
   */
  Gtk::VBox* wrap(GtkVBox* object, bool take_copy = false);
} //namespace Glib


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::HBox
   */
  Gtk::HBox* wrap(GtkHBox* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKMM_HVBOX_H */

