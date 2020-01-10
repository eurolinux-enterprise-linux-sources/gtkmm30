// Generated by gmmproc 2.50.0 -- DO NOT MODIFY!
#ifndef _GTKMM_TABLE_H
#define _GTKMM_TABLE_H


#ifndef GTKMM_DISABLE_DEPRECATED


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 1998-2002 The gtkmm Development Team
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


#include <gtkmm/container.h>
#include <gtkmm/enums.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GtkTable = struct _GtkTable;
using GtkTableClass = struct _GtkTableClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class Table_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{

/** Pack widgets in regular patterns.
 * @ingroup Widgets
 * @ingroup Containers
 * Gtk::Table is one of the primary ways of grouping widgets together.  It
 * consists of a set of lattice points to to which widgets can be attached.
 * There are <em>rows</em>&nbsp;+&nbsp;1 lattice points vertically and
 * <em>columns</em>&nbsp;+&nbsp;1 lattice points horizontally.  Lattice points
 * start counting from 0.  Lattice points can either be specified to be
 * <em>homogeneous</em>, meaning equally spaced, or not <em>homogeneous</em>,
 * meaning each cell should be calculated based on the widgets contained in the
 * row and column. The <em>homogeneous</em> property defaults to false.
 *
 * Widgets can be attached to the table by specifying the top, bottom, left and
 * right points corresponding to upper, lefthand lattice point and the lower,
 * righthand lattice point which the widget should span.  Widgets can either be
 * contained in a cell or may span cells.  A number of options control the
 * resizing behavior of widgets contained in the table.
 *
 * @par Packing options:
 * There are a number of packing options that can be specified when adding a
 * widget.  With <tt>Gtk::EXPAND</tt>, the lattice is allowed to grow to fill
 * space.  With <tt>Gtk::SHRINK</tt>, the lattice is allowed to shrink when
 * resized.  It is also possible to specify the behaviour of the widgets
 * allocation within the table.  The flag <tt>Gtk::FILL</tt> declares the
 * widget should grow to fill lattice.  If this is not set any extra space is
 * used as padding.  The default is <tt>(Gtk::FILL&nbsp;|&nbsp;Gtk::EXPAND)</tt>.
 *
 * @par Table sizing:
 * The table size is calculated based on the size of the widgets contained
 * within and the restrictions imposed by specified options.  Padding and
 * spacing can be used in the table.  Padding is added on either side of a
 * widget, while spacing is placed between widgets.
 *
 * A Table widget looks like this:
 * @image html table1.png
 *
 * @deprecated Use Gtk::Grid instead. It provides the same
 * capabilities as Gtk::Table for arranging widgets in a rectangular grid, but
 * does support height-for-width geometry management.
 *
 * @see Gtk::HBox, Gtk::VBox
 */

class Table : public Container
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef Table CppObjectType;
  typedef Table_Class CppClassType;
  typedef GtkTable BaseObjectType;
  typedef GtkTableClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  Table(Table&& src) noexcept;
  Table& operator=(Table&& src) noexcept;

  // noncopyable
  Table(const Table&) = delete;
  Table& operator=(const Table&) = delete;

  ~Table() noexcept override;

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class Table_Class;
  static CppClassType table_class_;

protected:
  explicit Table(const Glib::ConstructParams& construct_params);
  explicit Table(GtkTable* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GtkObject.
  GtkTable*       gobj()       { return reinterpret_cast<GtkTable*>(gobject_); }

  ///Provides access to the underlying C GtkObject.
  const GtkTable* gobj() const { return reinterpret_cast<GtkTable*>(gobject_); }


public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


private:

  
public:
    explicit Table(guint n_rows =  1, guint n_columns =  1, bool homogeneous =  false);


  /** Adds a widget to a table. The number of “cells” that a widget will occupy is
   * specified by @a left_attach, @a right_attach, @a top_attach and @a bottom_attach.
   * These each represent the leftmost, rightmost, uppermost and lowest column
   * and row numbers of the table. (Columns and rows are indexed from zero).
   * 
   * To make a button occupy the lower right cell of a 2x2 table, use
   * 
   * [C example ellipted]
   * If you want to make the button span the entire bottom row, use @a left_attach == 0 and @a right_attach = 2 instead.
   * 
   * Deprecated: 3.4: Use Gtk::Grid::attach() with Gtk::Grid. Note that the attach
   * arguments differ between those two functions.
   * 
   * @param child The widget to add.
   * @param left_attach The column number to attach the left side of a child widget to.
   * @param right_attach The column number to attach the right side of a child widget to.
   * @param top_attach The row number to attach the top of a child widget to.
   * @param bottom_attach The row number to attach the bottom of a child widget to.
   * @param xoptions Used to specify the properties of the child widget when the table is resized.
   * @param yoptions The same as xoptions, except this field determines behaviour of vertical resizing.
   * @param xpadding An integer value specifying the padding on the left and right of the widget being added to the table.
   * @param ypadding The amount of padding above and below the child widget.
   */
  void attach(Widget& child, guint left_attach, guint right_attach, guint top_attach, guint bottom_attach, AttachOptions xoptions =  FILL | EXPAND, AttachOptions yoptions =  FILL | EXPAND, guint xpadding =  0, guint ypadding =  0);


  /** If you need to change a table’s size after
   * it has been created, this function allows you to do so.
   * 
   * Deprecated: 3.4: Gtk::Grid resizes automatically.
   * 
   * @param rows The new number of rows.
   * @param columns The new number of columns.
   */
  void resize(guint rows, guint columns);


  /** Changes the space between a given table row and the subsequent row.
   * 
   * Deprecated: 3.4: Use Gtk::Widget::set_margin_top() and
   * Gtk::Widget::set_margin_bottom() on the widgets contained in the row if
   * you need this functionality. Gtk::Grid does not support per-row spacing.
   * 
   * @param row Row number whose spacing will be changed.
   * @param spacing Number of pixels that the spacing should take up.
   */
  void set_row_spacing(guint row, guint spacing);
  
  /** Gets the amount of space between row @a row, and
   * row @a row + 1. See set_row_spacing().
   * 
   * Deprecated: 3.4: Gtk::Grid does not offer a replacement for this
   * functionality.
   * 
   * @param row A row in the table, 0 indicates the first row.
   * @return The row spacing.
   */
  guint get_row_spacing(guint row) const;

  
  /** Alters the amount of space between a given table column and the following
   * column.
   * 
   * Deprecated: 3.4: Use Gtk::Widget::set_margin_start() and
   * Gtk::Widget::set_margin_end() on the widgets contained in the row if
   * you need this functionality. Gtk::Grid does not support per-row spacing.
   * 
   * @param column The column whose spacing should be changed.
   * @param spacing Number of pixels that the spacing should take up.
   */
  void set_col_spacing(guint column, guint spacing);
  
  /** Gets the amount of space between column @a col, and
   * column @a col + 1. See set_col_spacing().
   * 
   * Deprecated: 3.4: Gtk::Grid does not offer a replacement for this
   * functionality.
   * 
   * @param column A column in the table, 0 indicates the first column.
   * @return The column spacing.
   */
  guint get_col_spacing(guint column) const;

  
  /** Sets the space between every row in @a table equal to @a spacing.
   * 
   * Deprecated: 3.4: Use Gtk::Grid::set_row_spacing() with Gtk::Grid.
   * 
   * @param spacing The number of pixels of space to place between every row in the table.
   */
  void set_row_spacings(guint spacing);

  
  /** Sets the space between every column in @a table equal to @a spacing.
   * 
   * Deprecated: 3.4: Use Gtk::Grid::set_column_spacing() with Gtk::Grid.
   * 
   * @param spacing The number of pixels of space to place between every column
   * in the table.
   */
  void set_col_spacings(guint spacing);

  void set_spacings(guint spacing);

  
  /** Gets the default row spacing for the table. This is
   * the spacing that will be used for newly added rows.
   * (See set_row_spacings())
   * 
   * Deprecated: 3.4: Use Gtk::Grid::get_row_spacing() with Gtk::Grid.
   * 
   * @return The default row spacing.
   */
  guint get_default_row_spacing();
  
  /** Gets the default column spacing for the table. This is
   * the spacing that will be used for newly added columns.
   * (See set_col_spacings())
   * 
   * Deprecated: 3.4: Use Gtk::Grid::get_column_spacing() with Gtk::Grid.
   * 
   * @return The default column spacing.
   */
  guint get_default_col_spacing();

  
  /** Changes the homogenous property of table cells, ie. whether all cells are
   * an equal size or not.
   * 
   * Deprecated: 3.4: Use Gtk::Grid::set_row_homogeneous() and
   * Gtk::Grid::set_column_homogeneous() with Gtk::Grid.
   * 
   * @param homogeneous Set to <tt>true</tt> to ensure all table cells are the same size. Set
   * to <tt>false</tt> if this is not your desired behaviour.
   */
  void set_homogeneous(bool homogeneous =  true);
  
  /** Returns whether the table cells are all constrained to the same
   * width and height. (See set_homogeneous())
   * 
   * Deprecated: 3.4: Use Gtk::Grid::get_row_homogeneous() and
   * Gtk::Grid::get_column_homogeneous() with Gtk::Grid.
   * 
   * @return <tt>true</tt> if the cells are all constrained to the same size.
   */
  bool get_homogeneous() const;

  
  /** Gets the number of rows and columns in the table.
   * 
   * @newin{2,22}
   * 
   * Deprecated: 3.4: Gtk::Grid does not expose the number of columns and
   * rows.
   * 
   * @param rows Return location for the number of
   * rows, or <tt>nullptr</tt>.
   * @param columns Return location for the number
   * of columns, or <tt>nullptr</tt>.
   */
  void get_size(guint& rows, guint& columns) const;

  /** The number of rows in the table.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< guint > property_n_rows() ;

/** The number of rows in the table.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< guint > property_n_rows() const;

  /** The number of columns in the table.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< guint > property_n_columns() ;

/** The number of columns in the table.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< guint > property_n_columns() const;

  /** The amount of space between two consecutive columns.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< guint > property_column_spacing() ;

/** The amount of space between two consecutive columns.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< guint > property_column_spacing() const;

  /** The amount of space between two consecutive rows.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< guint > property_row_spacing() ;

/** The amount of space between two consecutive rows.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< guint > property_row_spacing() const;

  /** If TRUE, the table cells are all the same width/height.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_homogeneous() ;

/** If TRUE, the table cells are all the same width/height.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_homogeneous() const;


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
   * @relates Gtk::Table
   */
  Gtk::Table* wrap(GtkTable* object, bool take_copy = false);
} //namespace Glib


#endif // GTKMM_DISABLE_DEPRECATED


#endif /* _GTKMM_TABLE_H */

