// Generated by gmmproc 2.50.0 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/widgetpath.h>
#include <gtkmm/private/widgetpath_p.h>


/* Copyright 2010 The gtkmm Development Team
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

#include <gtk/gtk.h>

namespace Gtk
{

}//namespace Gtk


namespace
{
} // anonymous namespace


namespace Glib
{

Gtk::WidgetPath wrap(GtkWidgetPath* object, bool take_copy)
{
  return Gtk::WidgetPath(object, take_copy);
}

} // namespace Glib


namespace Gtk
{


// static
GType WidgetPath::get_type()
{
  return gtk_widget_path_get_type();
}

WidgetPath::WidgetPath()
:
  gobject_ (gtk_widget_path_new())
{}

WidgetPath::WidgetPath(const WidgetPath& other)
:
  gobject_ ((other.gobject_) ? gtk_widget_path_copy(other.gobject_) : nullptr)
{}

WidgetPath::WidgetPath(WidgetPath&& other) noexcept
:
  gobject_(other.gobject_)
{
  other.gobject_ = nullptr;
}

WidgetPath& WidgetPath::operator=(WidgetPath&& other) noexcept
{
  WidgetPath temp (other);
  swap(temp);
  return *this;
}

WidgetPath::WidgetPath(GtkWidgetPath* gobject, bool make_a_copy)
:
  // For BoxedType wrappers, make_a_copy is true by default.  The static
  // BoxedType wrappers must always take a copy, thus make_a_copy = true
  // ensures identical behaviour if the default argument is used.
  gobject_ ((make_a_copy && gobject) ? gtk_widget_path_copy(gobject) : gobject)
{}

WidgetPath& WidgetPath::operator=(const WidgetPath& other)
{
  WidgetPath temp (other);
  swap(temp);
  return *this;
}

WidgetPath::~WidgetPath() noexcept
{
  if(gobject_)
    gtk_widget_path_free(gobject_);
}

void WidgetPath::swap(WidgetPath& other) noexcept
{
  std::swap(gobject_, other.gobject_);
}

GtkWidgetPath* WidgetPath::gobj_copy() const
{
  return gtk_widget_path_copy(gobject_);
}


Glib::ustring WidgetPath::to_string() const
{
  return Glib::convert_return_gchar_ptr_to_ustring(gtk_widget_path_to_string(const_cast<GtkWidgetPath*>(gobj())));
}

int WidgetPath::path_length() const
{
  return gtk_widget_path_length(const_cast<GtkWidgetPath*>(gobj()));
}

int WidgetPath::path_append_type(GType type)
{
  return gtk_widget_path_append_type(gobj(), type);
}

void WidgetPath::prepend_type(GType type)
{
  gtk_widget_path_prepend_type(gobj(), type);
}

GType WidgetPath::iter_get_object_type(int pos) const
{
  return gtk_widget_path_iter_get_object_type(const_cast<GtkWidgetPath*>(gobj()), pos);
}

void WidgetPath::iter_set_object_type(int pos, GType type)
{
  gtk_widget_path_iter_set_object_type(gobj(), pos, type);
}

Glib::ustring WidgetPath::iter_get_name(int pos) const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_widget_path_iter_get_name(const_cast<GtkWidgetPath*>(gobj()), pos));
}

void WidgetPath::iter_set_name(int pos, const Glib::ustring& name)
{
  gtk_widget_path_iter_set_name(gobj(), pos, name.c_str());
}

bool WidgetPath::iter_has_name(int pos, const Glib::ustring& name) const
{
  return gtk_widget_path_iter_has_name(const_cast<GtkWidgetPath*>(gobj()), pos, name.c_str());
}

WidgetPath WidgetPath::iter_get_siblings(int pos) const
{
  return Glib::wrap(const_cast<GtkWidgetPath*>(gtk_widget_path_iter_get_siblings(const_cast<GtkWidgetPath*>(gobj()), pos)), true);
}

guint WidgetPath::get_sibling_index(int pos)
{
  return gtk_widget_path_iter_get_sibling_index(gobj(), pos);
}

void WidgetPath::iter_add_class(int pos, const Glib::ustring& name)
{
  gtk_widget_path_iter_add_class(gobj(), pos, name.c_str());
}

void WidgetPath::iter_remove_class(int pos, const Glib::ustring& name)
{
  gtk_widget_path_iter_remove_class(gobj(), pos, name.c_str());
}

void WidgetPath::iter_clear_classes(int pos)
{
  gtk_widget_path_iter_clear_classes(gobj(), pos);
}

std::vector<Glib::ustring> WidgetPath::iter_list_classes(int pos) const
{
  return Glib::SListHandler<Glib::ustring>::slist_to_vector(gtk_widget_path_iter_list_classes(const_cast<GtkWidgetPath*>(gobj()), pos), Glib::OWNERSHIP_SHALLOW);
}

bool WidgetPath::iter_has_class(int pos, const Glib::ustring& name) const
{
  return gtk_widget_path_iter_has_class(const_cast<GtkWidgetPath*>(gobj()), pos, name.c_str());
}

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
void WidgetPath::iter_add_region(int pos, const Glib::ustring& name, RegionFlags flags)
{
  gtk_widget_path_iter_add_region(gobj(), pos, name.c_str(), ((GtkRegionFlags)(flags)));
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
void WidgetPath::iter_remove_region(int pos, const Glib::ustring& name)
{
  gtk_widget_path_iter_remove_region(gobj(), pos, name.c_str());
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
void WidgetPath::iter_clear_regions(int pos)
{
  gtk_widget_path_iter_clear_regions(gobj(), pos);
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
std::vector<Glib::ustring> WidgetPath::iter_list_regions(int pos) const
{
  return Glib::SListHandler<Glib::ustring>::slist_to_vector(gtk_widget_path_iter_list_regions(const_cast<GtkWidgetPath*>(gobj()), pos), Glib::OWNERSHIP_SHALLOW);
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
bool WidgetPath::iter_has_region(int pos, const Glib::ustring& name, RegionFlags& flags) const
{
  return gtk_widget_path_iter_has_region(const_cast<GtkWidgetPath*>(gobj()), pos, name.c_str(), ((GtkRegionFlags*) &(flags)));
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED

GType WidgetPath::get_object_type() const
{
  return gtk_widget_path_get_object_type(const_cast<GtkWidgetPath*>(gobj()));
}

bool WidgetPath::is_type(GType type) const
{
  return gtk_widget_path_is_type(const_cast<GtkWidgetPath*>(gobj()), type);
}

bool WidgetPath::has_parent(GType type) const
{
  return gtk_widget_path_has_parent(const_cast<GtkWidgetPath*>(gobj()), type);
}


} // namespace Gtk


