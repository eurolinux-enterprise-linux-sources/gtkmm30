// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GTKMM_CSSPROVIDER_H
#define _GTKMM_CSSPROVIDER_H


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

#include <gtkmm/styleprovider.h>
#include <glibmm/object.h>
#include <giomm/file.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkCssProvider GtkCssProvider;
typedef struct _GtkCssProviderClass GtkCssProviderClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gtk
{ class CssProvider_Class; } // namespace Gtk
namespace Gtk
{

/** CSS-like styling for widgets, implementing the StyleProvider base class.
 *
 * It is able to parse <a href="http://www.w3.org/TR/CSS2">CSS</a>-like
 * input in order to style widgets.
 *
 * An application can cause GTK+ to parse a specific CSS style sheet by
 * calling load_from_file() and adding the provider with
 * StyleContext::add_provider() or StyleContext::add_provider_for_screen().
 * In addition, certain files will be read when GTK+ is initialized.
 * See the <a href="http://library.gnome.org/devel/gtk3/unstable/GtkCssProvider.html#GtkCssProvider.description">GtkCssProvider documentation</a> for details of these default files and details of the stylesheets.
 *
 * @newin{3,0}
 */

class CssProvider
  : public Glib::Object,
    public StyleProvider
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef CssProvider CppObjectType;
  typedef CssProvider_Class CppClassType;
  typedef GtkCssProvider BaseObjectType;
  typedef GtkCssProviderClass BaseClassType;

private:  friend class CssProvider_Class;
  static CppClassType cssprovider_class_;

private:
  // noncopyable
  CssProvider(const CssProvider&);
  CssProvider& operator=(const CssProvider&);

protected:
  explicit CssProvider(const Glib::ConstructParams& construct_params);
  explicit CssProvider(GtkCssProvider* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
  virtual ~CssProvider();

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GtkCssProvider*       gobj()       { return reinterpret_cast<GtkCssProvider*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GtkCssProvider* gobj() const { return reinterpret_cast<GtkCssProvider*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GtkCssProvider* gobj_copy();

private:

  
protected:
  CssProvider();
  

public:
  
  static Glib::RefPtr<CssProvider> create();


  /** Convertes the @a provider into a string representation in CSS
   * format.
   * 
   * Using load_from_data() with the return value
   * from this function on a new provider created with
   * new() will basicallu create a duplicate of
   * this @a provider.
   * 
   * @newin{3,2}
   * @return A new string representing the @a provider.
   */
  Glib::ustring to_string() const;

  /** Loads @a data into this css provider, making it clear any previously loaded information.
   *
   * @param data CSS data loaded in memory.
   * @result True if the data could be loaded.
   */
  bool load_from_data(const std::string& data);
  

  /** Loads the data contained in @a file into @a css_provider, making it
   * clear any previously loaded information.
   * @param file File pointing to a file to load.
   * @return <tt>true</tt>. The return value is deprecated and <tt>false</tt> will only be
   * returned for backwards compatibility reasons if an @a error is not 
   * <tt>0</tt> and a loading error occured. To track errors while loading
   * CSS, connect to the GtkCssProvider::parsing-error signal.
   */
  bool load_from_file(const Glib::RefPtr<const Gio::File>& file);
  
  /** Loads the data contained in @a path into @a css_provider, making it clear
   * any previously loaded information.
   * @param path The path of a filename to load, in the GLib filename encoding.
   * @return <tt>true</tt>. The return value is deprecated and <tt>false</tt> will only be
   * returned for backwards compatibility reasons if an @a error is not 
   * <tt>0</tt> and a loading error occured. To track errors while loading
   * CSS, connect to the GtkCssProvider::parsing-error signal.
   */
  bool load_from_path(const std::string& path);

  
  /** Returns the provider containing the style settings used as a
   * fallback for all widgets.
   * @return The provider used for fallback styling.
   * This memory is owned by GTK+, and you must not free it.
   */
  static Glib::RefPtr<CssProvider> get_default();

  
  /** Loads a theme from the usual theme paths
   * @param name A theme name.
   * @param variant Variant to load, for example, "dark", or
   * <tt>0</tt> for the default.
   * @return A Gtk::CssProvider with the theme loaded.
   * This memory is owned by GTK+, and you must not free it.
   */
  static Glib::RefPtr<CssProvider> get_named(const Glib::ustring& name, const Glib::ustring& variant);

  //There are no properties or signals.


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


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
   * @relates Gtk::CssProvider
   */
  Glib::RefPtr<Gtk::CssProvider> wrap(GtkCssProvider* object, bool take_copy = false);
}


#endif /* _GTKMM_CSSPROVIDER_H */

