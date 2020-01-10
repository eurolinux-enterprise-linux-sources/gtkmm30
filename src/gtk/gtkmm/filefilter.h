// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GTKMM_FILEFILTER_H
#define _GTKMM_FILEFILTER_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 2003 The gtkmm Development Team
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

#include <glibmm/object.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkFileFilter GtkFileFilter;
typedef struct _GtkFileFilterClass GtkFileFilterClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gtk
{ class FileFilter_Class; } // namespace Gtk
namespace Gtk
{

/** @addtogroup gtkmmEnums gtkmm Enums and Flags */

/** 
 * These flags indicate what parts of a Gtk::FileFilterInfo struct
 * are filled or need to be filled.
 * @ingroup gtkmmEnums
 * @par Bitwise operators:
 * <tt>%FileFilterFlags operator|(FileFilterFlags, FileFilterFlags)</tt><br>
 * <tt>%FileFilterFlags operator&(FileFilterFlags, FileFilterFlags)</tt><br>
 * <tt>%FileFilterFlags operator^(FileFilterFlags, FileFilterFlags)</tt><br>
 * <tt>%FileFilterFlags operator~(FileFilterFlags)</tt><br>
 * <tt>%FileFilterFlags& operator|=(FileFilterFlags&, FileFilterFlags)</tt><br>
 * <tt>%FileFilterFlags& operator&=(FileFilterFlags&, FileFilterFlags)</tt><br>
 * <tt>%FileFilterFlags& operator^=(FileFilterFlags&, FileFilterFlags)</tt><br>
 */
enum FileFilterFlags
{
  /** the filename of the file being tested
   */
  FILE_FILTER_FILENAME = 1 << 0,
  /** the URI for the file being tested
   */
  FILE_FILTER_URI = 1 << 1,
  /** the string that will be used to 
   * display the file in the file chooser
   */
  FILE_FILTER_DISPLAY_NAME = 1 << 2,
  /** the mime type of the file
   */
  FILE_FILTER_MIME_TYPE = 1 << 3
};

/** @ingroup gtkmmEnums */
inline FileFilterFlags operator|(FileFilterFlags lhs, FileFilterFlags rhs)
  { return static_cast<FileFilterFlags>(static_cast<unsigned>(lhs) | static_cast<unsigned>(rhs)); }

/** @ingroup gtkmmEnums */
inline FileFilterFlags operator&(FileFilterFlags lhs, FileFilterFlags rhs)
  { return static_cast<FileFilterFlags>(static_cast<unsigned>(lhs) & static_cast<unsigned>(rhs)); }

/** @ingroup gtkmmEnums */
inline FileFilterFlags operator^(FileFilterFlags lhs, FileFilterFlags rhs)
  { return static_cast<FileFilterFlags>(static_cast<unsigned>(lhs) ^ static_cast<unsigned>(rhs)); }

/** @ingroup gtkmmEnums */
inline FileFilterFlags operator~(FileFilterFlags flags)
  { return static_cast<FileFilterFlags>(~static_cast<unsigned>(flags)); }

/** @ingroup gtkmmEnums */
inline FileFilterFlags& operator|=(FileFilterFlags& lhs, FileFilterFlags rhs)
  { return (lhs = static_cast<FileFilterFlags>(static_cast<unsigned>(lhs) | static_cast<unsigned>(rhs))); }

/** @ingroup gtkmmEnums */
inline FileFilterFlags& operator&=(FileFilterFlags& lhs, FileFilterFlags rhs)
  { return (lhs = static_cast<FileFilterFlags>(static_cast<unsigned>(lhs) & static_cast<unsigned>(rhs))); }

/** @ingroup gtkmmEnums */
inline FileFilterFlags& operator^=(FileFilterFlags& lhs, FileFilterFlags rhs)
  { return (lhs = static_cast<FileFilterFlags>(static_cast<unsigned>(lhs) ^ static_cast<unsigned>(rhs))); }

} // namespace Gtk


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class Value<Gtk::FileFilterFlags> : public Glib::Value_Flags<Gtk::FileFilterFlags>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gtk
{


/** A filter for selecting a file subset.
 *
 * A Gtk::FileFilter can be used to restrict the files being shown in a Gtk::FileChooser.
 * Files can be filtered based on their name (with add_pattern()),
 * on their mime type (with add_mime_type()), or by a custom filter
 * function (with add_custom()).
 *
 * Filtering by mime types handles aliasing and subclassing of mime types;
 * e.g. a filter for text/plain also matches a file with mime type application/rtf,
 * since application/rtf is a subclass of text/plain. Note that Gtk::FileFilter
 * allows wildcards for the subtype of a mime type, so you can e.g. filter for image/ *.
 *
 * Normally, filters are used by adding them to a Gtk::FileChooser. See Gtk::FileChooser::add_filter().
 * But it is also possible to manually use a filter on a file with filter().
 */

class FileFilter : public Glib::Object
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef FileFilter CppObjectType;
  typedef FileFilter_Class CppClassType;
  typedef GtkFileFilter BaseObjectType;
  typedef GtkFileFilterClass BaseClassType;

private:  friend class FileFilter_Class;
  static CppClassType filefilter_class_;

private:
  // noncopyable
  FileFilter(const FileFilter&);
  FileFilter& operator=(const FileFilter&);

protected:
  explicit FileFilter(const Glib::ConstructParams& construct_params);
  explicit FileFilter(GtkFileFilter* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
  virtual ~FileFilter();

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GtkFileFilter*       gobj()       { return reinterpret_cast<GtkFileFilter*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GtkFileFilter* gobj() const { return reinterpret_cast<GtkFileFilter*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GtkFileFilter* gobj_copy();

private:

  
protected:
  FileFilter();

public:
  
  static Glib::RefPtr<FileFilter> create();


  /** Sets the human-readable name of the filter; this is the string
   * that will be displayed in the file selector user interface if
   * there is a selectable list of filters.
   * 
   * @newin{2,4}
   * @param name The human-readable-name for the filter, or <tt>0</tt>
   * to remove any existing name.
   */
  void set_name(const Glib::ustring& name);
  
  /** Gets the human-readable name for the filter. See set_name().
   * 
   * @newin{2,4}
   * @return The human-readable name of the filter,
   * or <tt>0</tt>. This value is owned by GTK+ and must not
   * be modified or freed.
   */
  Glib::ustring get_name() const;

  
  /** Adds a rule allowing a given mime type to @a filter.
   * 
   * @newin{2,4}
   * @param mime_type Name of a MIME type.
   */
  void add_mime_type(const Glib::ustring& mime_type);
  
  /** Adds a rule allowing a shell style glob to a filter.
   * 
   * @newin{2,4}
   * @param pattern A shell style glob.
   */
  void add_pattern(const Glib::ustring& pattern);
  
  /** Adds a rule allowing image files in the formats supported
   * by GdkPixbuf.
   * 
   * @newin{2,6}
   */
  void add_pixbuf_formats();

  class Info
  {
  public:
    FileFilterFlags contains;
    Glib::ustring filename;
    Glib::ustring uri;
    Glib::ustring display_name;
    Glib::ustring mime_type;
  };

  /// For instance, bool on_custom(const Gtk::FileFilter::Info& filter_info);
  typedef sigc::slot<bool, const Info&> SlotCustom;

  void add_custom(FileFilterFlags needed, const SlotCustom& slot);
  

  /** Gets the fields that need to be filled in for the structure
   * passed to filter()
   * 
   * This function will not typically be used by applications; it
   * is intended principally for use in the implementation of
   * Gtk::FileChooser.
   * 
   * @newin{2,4}
   * @return Bitfield of flags indicating needed fields when
   * calling filter().
   */
  FileFilterFlags get_needed() const;

  //TODO: This method is only used by FileChooser implementors, so we don't need to wrap it.
  
  //_WRAP_METHOD(bool filter(const GtkFileFilterInfo* filter_info), gtk_file_filter_filter)


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
   * @relates Gtk::FileFilter
   */
  Glib::RefPtr<Gtk::FileFilter> wrap(GtkFileFilter* object, bool take_copy = false);
}


#endif /* _GTKMM_FILEFILTER_H */

