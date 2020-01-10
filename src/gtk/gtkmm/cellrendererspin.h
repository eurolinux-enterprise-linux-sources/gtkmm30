// Generated by gmmproc 2.50.0 -- DO NOT MODIFY!
#ifndef _GTKMM_CELLRENDERERSPIN_H
#define _GTKMM_CELLRENDERERSPIN_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 2006 The gtkmm Development Team
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

#include <gtkmm/cellrenderertext.h>
//#include <gtkmm/treemodel.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GtkCellRendererSpin = struct _GtkCellRendererSpin;
using GtkCellRendererSpinClass = struct _GtkCellRendererSpinClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class CellRendererSpin_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{

/**  Renders a spin button in a cell.
 *
 * Gtk::CellRendererSpin renders text in a cell like Gtk::CellRendererText,
 * from which it is derived. But while Gtk::CellRendererText offers a simple
 * entry to edit the text, Gtk::CellRendererSpin offers a Gtk::SpinButton widget.
 * Of course, that means that the text must be parseable as a floating point
 * number.
 *
 * The range of the spinbutton is taken from the adjustment property of the
 * cell renderer, which can be set explicitly or mapped to a column in
 * the tree model, like all properties of cell renders. Gtk::CellRendererSpin
 * also has properties for the climb rate and the number of digits to display.
 * Other Gtk::SpinButton properties can be set in a handler for the start-editing
 * signal.
 *
 * @ingroup TreeView
 * @newin{2,12}
 */

class CellRendererSpin : public CellRendererText
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef CellRendererSpin CppObjectType;
  typedef CellRendererSpin_Class CppClassType;
  typedef GtkCellRendererSpin BaseObjectType;
  typedef GtkCellRendererSpinClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  CellRendererSpin(CellRendererSpin&& src) noexcept;
  CellRendererSpin& operator=(CellRendererSpin&& src) noexcept;

  // noncopyable
  CellRendererSpin(const CellRendererSpin&) = delete;
  CellRendererSpin& operator=(const CellRendererSpin&) = delete;

  ~CellRendererSpin() noexcept override;

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class CellRendererSpin_Class;
  static CppClassType cellrendererspin_class_;

protected:
  explicit CellRendererSpin(const Glib::ConstructParams& construct_params);
  explicit CellRendererSpin(GtkCellRendererSpin* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GtkObject.
  GtkCellRendererSpin*       gobj()       { return reinterpret_cast<GtkCellRendererSpin*>(gobject_); }

  ///Provides access to the underlying C GtkObject.
  const GtkCellRendererSpin* gobj() const { return reinterpret_cast<GtkCellRendererSpin*>(gobject_); }


public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


private:

public:

  CellRendererSpin();

  /** The adjustment that holds the value of the spinbutton. 
   * This must be non-<tt>nullptr</tt> for the cell renderer to be editable.
   * 
   * @newin{2,10}
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::RefPtr<Adjustment> > property_adjustment() ;

/** The adjustment that holds the value of the spinbutton. 
   * This must be non-<tt>nullptr</tt> for the cell renderer to be editable.
   * 
   * @newin{2,10}
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Adjustment> > property_adjustment() const;

  /** The acceleration rate when you hold down a button.
   * 
   * @newin{2,10}
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< double > property_climb_rate() ;

/** The acceleration rate when you hold down a button.
   * 
   * @newin{2,10}
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< double > property_climb_rate() const;

  /** The number of decimal places to display.
   * 
   * @newin{2,10}
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< guint > property_digits() ;

/** The number of decimal places to display.
   * 
   * @newin{2,10}
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< guint > property_digits() const;


  Glib::PropertyProxy_Base _property_renderable() override;


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
   * @relates Gtk::CellRendererSpin
   */
  Gtk::CellRendererSpin* wrap(GtkCellRendererSpin* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKMM_CELLRENDERERSPIN_H */

