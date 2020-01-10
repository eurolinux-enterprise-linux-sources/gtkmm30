// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GTKMM_MESSAGEDIALOG_H
#define _GTKMM_MESSAGEDIALOG_H


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

#include <gtkmm/dialog.h>
#include <gtkmm/enums.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkMessageDialog GtkMessageDialog;
typedef struct _GtkMessageDialogClass GtkMessageDialogClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gtk
{ class MessageDialog_Class; } // namespace Gtk
namespace Gtk
{


/** @addtogroup gtkmmEnums gtkmm Enums and Flags */

/** 
 * Prebuilt sets of buttons for the dialog. If
 * none of these choices are appropriate, simply use Gtk::BUTTONS_NONE
 * then call Gtk::Dialog::add_buttons().
 * <note>
 * Please note that Gtk::BUTTONS_OK, Gtk::BUTTONS_YES_NO
 * and Gtk::BUTTONS_OK_CANCEL are discouraged by the
 * GNOME HIG.
 * </note>
 * @ingroup gtkmmEnums
 */
enum ButtonsType
{
  /** no buttons at all
   */
  BUTTONS_NONE,
  /** an OK button
   */
  BUTTONS_OK,
  /** a Close button
   */
  BUTTONS_CLOSE,
  /** a Cancel button
   */
  BUTTONS_CANCEL,
  /** Yes and No buttons
   */
  BUTTONS_YES_NO,
  /** OK and Cancel buttons
   */
  BUTTONS_OK_CANCEL
};

} // namespace Gtk


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class Value<Gtk::ButtonsType> : public Glib::Value_Enum<Gtk::ButtonsType>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gtk
{


/** Convenient message window.
 *
 * Gtk::MessageDialog presents a dialog with an image representing the type
 * of message (Error, Question, etc.) alongside some message text. It's
 * simply a convenience widget; you could construct the equivalent of
 * Gtk::MessageDialog from Gtk::Dialog without too much effort, but
 * Gtk::MessageDialog saves typing.
 *
 * A MessageDialog looks like this:
 * @image html messagedialog1.png
 *
 * @ingroup Dialogs
 */

class MessageDialog : public Dialog
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef MessageDialog CppObjectType;
  typedef MessageDialog_Class CppClassType;
  typedef GtkMessageDialog BaseObjectType;
  typedef GtkMessageDialogClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  virtual ~MessageDialog();

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class MessageDialog_Class;
  static CppClassType messagedialog_class_;

  // noncopyable
  MessageDialog(const MessageDialog&);
  MessageDialog& operator=(const MessageDialog&);

protected:
  explicit MessageDialog(const Glib::ConstructParams& construct_params);
  explicit MessageDialog(GtkMessageDialog* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GtkObject.
  GtkMessageDialog*       gobj()       { return reinterpret_cast<GtkMessageDialog*>(gobject_); }

  ///Provides access to the underlying C GtkObject.
  const GtkMessageDialog* gobj() const { return reinterpret_cast<GtkMessageDialog*>(gobject_); }


public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


private:

  
public:
  explicit MessageDialog(const Glib::ustring& message, bool use_markup = false, MessageType type = MESSAGE_INFO, ButtonsType buttons = BUTTONS_OK, bool modal = false);
  MessageDialog(Gtk::Window& parent, const Glib::ustring& message, bool use_markup = false, MessageType type = MESSAGE_INFO, ButtonsType buttons = BUTTONS_OK, bool modal = false);
  

  /** Sets the dialog's image to @a image.
   * 
   * @newin{2,10}
   * @param image The image.
   */
  void set_image(Widget& image);
  
  /** Gets the dialog's image.
   * 
   * @newin{2,14}
   * @return The dialog's image.
   */
  Widget* get_image();
  
  /** Gets the dialog's image.
   * 
   * @newin{2,14}
   * @return The dialog's image.
   */
  const Widget* get_image() const;

  
  /** Sets the primary text of the message dialog.
   *
   * @param message The message.
   * @param use_markup Whether @a message contains pango markup.
   */
  void set_message(const Glib::ustring& message, bool use_markup = false);
  

  /** Sets the secondary text of the message dialog.
   * Note that setting a secondary text makes the primary text become bold, unless you have provided explicit markup.
   *
   * @newin{2,6}
   *
   * @param text The message.
   * @param use_markup Whether @a message contains pango markup.
   */
  void set_secondary_text(const Glib::ustring& text, bool use_markup = false);
  

  /** Returns the message area of the dialog. This is the box where the
   * dialog's primary and secondary labels are packed. You can add your
   * own extra content to that box and it will appear below those labels,
   * on the right side of the dialog's image (or on the left for right-to-left
   * languages).  See Gtk::Dialog::get_content_area() for the corresponding
   * function in the parent Gtk::Dialog.
   * 
   * @newin{2,22}
   * @return A Gtk::VBox corresponding to the
   * "message area" in the @a message_dialog.
   */
  Box* get_message_area();
  
  /** Returns the message area of the dialog. This is the box where the
   * dialog's primary and secondary labels are packed. You can add your
   * own extra content to that box and it will appear below those labels,
   * on the right side of the dialog's image (or on the left for right-to-left
   * languages).  See Gtk::Dialog::get_content_area() for the corresponding
   * function in the parent Gtk::Dialog.
   * 
   * @newin{2,22}
   * @return A Gtk::VBox corresponding to the
   * "message area" in the @a message_dialog.
   */
  const Box* get_message_area() const;

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** The type of message.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< MessageType > property_message_type() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** The type of message.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< MessageType > property_message_type() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  //Not wrapped because it is write-only and construct: _WRAP_PROPERTY("buttons", ButtonsType)
  #ifdef GLIBMM_PROPERTIES_ENABLED
/** The primary text of the message dialog.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::ustring > property_text() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** The primary text of the message dialog.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_text() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** The primary text of the title includes Pango markup.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_use_markup() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** The primary text of the title includes Pango markup.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_use_markup() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** The secondary text of the message dialog.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::ustring > property_secondary_text() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** The secondary text of the message dialog.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_secondary_text() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** The secondary text includes Pango markup.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_secondary_use_markup() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** The secondary text includes Pango markup.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_secondary_use_markup() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** The image.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Widget* > property_image() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** The image.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Widget* > property_image() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** GtkVBox that holds the dialog's primary and secondary labels.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Box* > property_message_area() const;
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
   * @relates Gtk::MessageDialog
   */
  Gtk::MessageDialog* wrap(GtkMessageDialog* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKMM_MESSAGEDIALOG_H */

