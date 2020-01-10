// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GTKMM_RADIOBUTTON_H
#define _GTKMM_RADIOBUTTON_H


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

#include <gtkmm/checkbutton.h>
#include <gtkmm/radiobuttongroup.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkRadioButton GtkRadioButton;
typedef struct _GtkRadioButtonClass GtkRadioButtonClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gtk
{ class RadioButton_Class; } // namespace Gtk
namespace Gtk
{

/** A single radio button performs the same basic function as a Gtk::CheckButton, as its position in the object hierarchy reflects. It is only when multiple radio buttons are grouped together that they become a different user interface component in their own right.
 * Every radio button is a member of some group of radio buttons. When one is selected, all other radio buttons in the same group are deselected. A Gtk::RadioButton gives the user a choice from many options.
 * After constructing the first RadioButton in a group, use get_group() and provide this Group to the constructors ot the other RadioButtons in the same group.
 * To remove a Gtk::RadioButton from one group and make it part of a new one, use set_group().
 *
 * The RadioButton widget looks like this:
 * @image html radiobutton1.png
 *
 * @ingroup Widgets
 */

class RadioButton : public CheckButton
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef RadioButton CppObjectType;
  typedef RadioButton_Class CppClassType;
  typedef GtkRadioButton BaseObjectType;
  typedef GtkRadioButtonClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  virtual ~RadioButton();

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class RadioButton_Class;
  static CppClassType radiobutton_class_;

  // noncopyable
  RadioButton(const RadioButton&);
  RadioButton& operator=(const RadioButton&);

protected:
  explicit RadioButton(const Glib::ConstructParams& construct_params);
  explicit RadioButton(GtkRadioButton* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GtkObject.
  GtkRadioButton*       gobj()       { return reinterpret_cast<GtkRadioButton*>(gobject_); }

  ///Provides access to the underlying C GtkObject.
  const GtkRadioButton* gobj() const { return reinterpret_cast<GtkRadioButton*>(gobject_); }


public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::
  /// This is a default handler for the signal signal_group_changed().
  virtual void on_group_changed();


private:

  
public:
  typedef RadioButtonGroup Group;

  RadioButton();
  explicit RadioButton(const Glib::ustring& label, bool mnemonic = false);

  /** Create an empty RadioButton belonging to the specified group,
   * into which you can add() a widget.
   * If you wish to add a Gtk::Label,
   * you may want to
   * use the Gtk::RadioButton(const Group& group, const Glib::ustring& label, bool mnemonic)
   * constructor directly instead.
   */
  explicit RadioButton(Group& group);

  /** Create a button belonging to the specified group, with a label inside.
   * You won't be able to add a widget to this button
   * since it already contains a Gtk::Label.
   */
  RadioButton(Group& group, const Glib::ustring& label, bool mnemonic = false);


  /** Get the radio button's group.
   * This group may be passed to the constructors of other radio buttons, or used with set_group().
   *
   * @result The group to which the radio button belongs.
   */
  Group get_group();

 //TODO: Remove set/get_group() now that we have join_group()?
 /** Set the radio button's group.
   * You can obtain a suitable group from another radio button by using get_group().
   *
   * @result The group to which the radio button should belong.
   */
  void set_group(Group& group);

  /** Remove the radio button from the group.
   */
  void reset_group();
  

  /** Joins a Gtk::RadioButton object to the group of another Gtk::RadioButton object
   * 
   * Use this in language bindings instead of the get_group() 
   * and set_group() methods
   * 
   * A common way to set up a group of radio buttons is the following:
   * 
   * [C example ellipted]
   * 
   * @newin{3,0}
   * @param group_source A radio button object whos group we are 
   * joining, or <tt>0</tt> to remove the radio button from its group.
   */
  void join_group(RadioButton& group_source);

  
/**
   * @par Slot Prototype:
   * <tt>void on_my_%group_changed()</tt>
   *
   * Emitted when the group of radio buttons that a radio button belongs
   * to changes. This is emitted when a radio button switches from
   * being alone to being part of a group of 2 or more buttons, or
   * vice-versa, and when a button is moved from one group of 2 or
   * more buttons to a different one, but not when the composition
   * of the group that a button belongs to changes.
   * 
   * @newin{2,4}
   */

  Glib::SignalProxy0< void > signal_group_changed();


  //Probably wouldn't work: _WRAP_PROPERTY("group", Group)


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
   * @relates Gtk::RadioButton
   */
  Gtk::RadioButton* wrap(GtkRadioButton* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKMM_RADIOBUTTON_H */

