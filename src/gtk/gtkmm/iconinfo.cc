// Generated by gtkmmproc -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/iconinfo.h>
#include <gtkmm/private/iconinfo_p.h>


/* Copyright 2003 The gtkmm Development Team
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

#include <glibmm/vectorutils.h>

#include <gtk/gtk.h>
#include <gtkmm/icontheme.h>
//TODO: Install and use this? #include <giomm/slot_async.h>

namespace {

//This is just to satisfy our generated code, which cannot
//handle just using g_object_ref() because it needs a cast.
static GtkIconInfo* gtk_icon_info_ref(GtkIconInfo* icon_info)
{
  g_object_ref (G_OBJECT(icon_info));
  return icon_info;
}

//TODO: Install and use giomm's slot_async.h if we use this more often:
static void
SignalProxy_async_callback(GObject*, GAsyncResult* res, void* data)
{
  Gio::SlotAsyncReady* the_slot = static_cast<Gio::SlotAsyncReady*>(data);

  try
  {
    Glib::RefPtr<Gio::AsyncResult> result = Glib::wrap(res, true /* take copy */);
    (*the_slot)(result);
  }
  catch(...)
  {
    Glib::exception_handlers_invoke();
  }

  delete the_slot;
}

}

namespace Gtk
{

IconInfo::IconInfo(const Glib::RefPtr<IconTheme>& icon_theme, const Glib::RefPtr<Gdk::Pixbuf>& pixbuf)
: gobject_( gtk_icon_info_new_for_pixbuf(Glib::unwrap(icon_theme), pixbuf->gobj()) )
{
}

std::vector<Gdk::Point> IconInfo::get_attach_points() const
{
  GdkPoint* c_attach_points = 0;
  gint n_points = 0;
  gtk_icon_info_get_attach_points (const_cast<GtkIconInfo*>(gobj()), &c_attach_points, &n_points);

  if (c_attach_points)
  {
    return Glib::ArrayHandler<Gdk::Point, Gdk::PointTraits>::array_to_vector(c_attach_points, n_points, Glib::OWNERSHIP_DEEP);
  }
  return std::vector<Gdk::Point> ();
}

IconInfo::operator const void*() const
{
  return gobj() ? GINT_TO_POINTER(1) : 0;
}


Glib::RefPtr<Gdk::Pixbuf> IconInfo::load_symbolic(const Gdk::RGBA& fg, const Gdk::RGBA& success_color, const Gdk::RGBA& warning_color, const Gdk::RGBA& error_color, bool& was_symbolic) const
{
  GError* gerror = 0;
  gboolean c_was_symbolic = false;
  Glib::RefPtr<Gdk::Pixbuf> retvalue = Glib::wrap(gtk_icon_info_load_symbolic(const_cast<GtkIconInfo*>(gobj()), const_cast<GdkRGBA*>(fg.gobj()), const_cast<GdkRGBA*>(success_color.gobj()), const_cast<GdkRGBA*>(warning_color.gobj()), const_cast<GdkRGBA*>(error_color.gobj()), &c_was_symbolic, &(gerror)));
  was_symbolic = c_was_symbolic;
  if(gerror)
    ::Glib::Error::throw_exception(gerror);

  return retvalue;
}

Glib::RefPtr<Gdk::Pixbuf> IconInfo::load_symbolic(const Glib::RefPtr<StyleContext>& style, bool& was_symbolic)
{
  GError* gerror = 0;
  gboolean c_was_symbolic = false;
  Glib::RefPtr<Gdk::Pixbuf> retvalue = Glib::wrap(gtk_icon_info_load_symbolic_for_context(gobj(), Glib::unwrap(style), &c_was_symbolic, &(gerror)));
  was_symbolic = c_was_symbolic;
  if(gerror)
    ::Glib::Error::throw_exception(gerror);

  return retvalue;
}


/* deprecated
Glib::RefPtr<Gdk::Pixbuf> IconInfo::load_symbolic(const Glib::RefPtr<Style>& style, StateType state, bool& was_symbolic) const
{
  GError* gerror = 0;
  gboolean c_was_symbolic = false;
  Glib::RefPtr<Gdk::Pixbuf> retvalue = Glib::wrap(gtk_icon_info_load_symbolic_for_style(const_cast<GtkIconInfo*>(gobj()), Glib::unwrap(style), ((GtkStateType)(state)), &c_was_symbolic, &(gerror)));
  was_symbolic = c_was_symbolic;
  if(gerror)
    ::Glib::Error::throw_exception(gerror);

  return retvalue;
}
*/

void IconInfo::load_icon_async(const Gio::SlotAsyncReady& slot, const Glib::RefPtr<Gio::Cancellable>& cancellable)
{
  // Create a copy of the slot.
  // A pointer to it will be passed through the callback's data parameter
  // and deleted in the callback.
  Gio::SlotAsyncReady* slot_copy = new Gio::SlotAsyncReady(slot);

  gtk_icon_info_load_icon_async(gobj(),
    Glib::unwrap(cancellable),
    &SignalProxy_async_callback,
    slot_copy);
}

void IconInfo::load_icon_async(const Gio::SlotAsyncReady& slot)
{
  // Create a copy of the slot.
  // A pointer to it will be passed through the callback's data parameter
  // and deleted in the callback.
  Gio::SlotAsyncReady* slot_copy = new Gio::SlotAsyncReady(slot);

  gtk_icon_info_load_icon_async(gobj(),
    0,
    &SignalProxy_async_callback,
    slot_copy);
}


void IconInfo::load_symbolic_async(const Gdk::RGBA& fg, const Gdk::RGBA& success_color, const Gdk::RGBA& warning_color, const Gdk::RGBA& error_color, const Gio::SlotAsyncReady& slot, const Glib::RefPtr<Gio::Cancellable>& cancellable)
{
  // Create a copy of the slot.
  // A pointer to it will be passed through the callback's data parameter
  // and deleted in the callback.
  Gio::SlotAsyncReady* slot_copy = new Gio::SlotAsyncReady(slot);

  gtk_icon_info_load_symbolic_async(gobj(),
    fg.gobj(),
    success_color.gobj(),
    warning_color.gobj(),
    error_color.gobj(),
    Glib::unwrap(cancellable),
    &SignalProxy_async_callback,
    slot_copy);
}

void IconInfo::load_symbolic_async(const Gdk::RGBA& fg, const Gdk::RGBA& success_color, const Gdk::RGBA& warning_color, const Gdk::RGBA& error_color, const Gio::SlotAsyncReady& slot)
{
  // Create a copy of the slot.
  // A pointer to it will be passed through the callback's data parameter
  // and deleted in the callback.
  Gio::SlotAsyncReady* slot_copy = new Gio::SlotAsyncReady(slot);

  gtk_icon_info_load_symbolic_async(gobj(),
    fg.gobj(),
    success_color.gobj(),
    warning_color.gobj(),
    error_color.gobj(),
    0,
    &SignalProxy_async_callback,
    slot_copy);
}


void IconInfo::load_symbolic_for_context_async(const Glib::RefPtr<StyleContext>& context, const Gio::SlotAsyncReady& slot, const Glib::RefPtr<Gio::Cancellable>& cancellable)
{
  // Create a copy of the slot.
  // A pointer to it will be passed through the callback's data parameter
  // and deleted in the callback.
  Gio::SlotAsyncReady* slot_copy = new Gio::SlotAsyncReady(slot);

  gtk_icon_info_load_symbolic_for_context_async(gobj(),
    Glib::unwrap(context),
    Glib::unwrap(cancellable),
    &SignalProxy_async_callback,
    slot_copy);
}

void IconInfo::load_symbolic_for_context_async(const Glib::RefPtr<StyleContext>& context, const Gio::SlotAsyncReady& slot)
{
  // Create a copy of the slot.
  // A pointer to it will be passed through the callback's data parameter
  // and deleted in the callback.
  Gio::SlotAsyncReady* slot_copy = new Gio::SlotAsyncReady(slot);

  gtk_icon_info_load_symbolic_for_context_async(gobj(),
    Glib::unwrap(context),
    0,
    &SignalProxy_async_callback,
    slot_copy);
}


} // namespace Gtk

namespace
{
} // anonymous namespace


namespace Glib
{

Gtk::IconInfo wrap(GtkIconInfo* object, bool take_copy)
{
  return Gtk::IconInfo(object, take_copy);
}

} // namespace Glib


namespace Gtk
{


// static
GType IconInfo::get_type()
{
  return gtk_icon_info_get_type();
}

IconInfo::IconInfo()
:
  gobject_ (0) // Allows creation of invalid wrapper, e.g. for output arguments to methods.
{}

IconInfo::IconInfo(const IconInfo& other)
:
  gobject_ ((other.gobject_) ? gtk_icon_info_ref(other.gobject_) : 0)
{}

IconInfo::IconInfo(GtkIconInfo* gobject, bool make_a_copy)
:
  // For BoxedType wrappers, make_a_copy is true by default.  The static
  // BoxedType wrappers must always take a copy, thus make_a_copy = true
  // ensures identical behaviour if the default argument is used.
  gobject_ ((make_a_copy && gobject) ? gtk_icon_info_ref(gobject) : gobject)
{}

IconInfo& IconInfo::operator=(const IconInfo& other)
{
  IconInfo temp (other);
  swap(temp);
  return *this;
}

IconInfo::~IconInfo()
{
  if(gobject_)
    g_object_unref(gobject_);
}

void IconInfo::swap(IconInfo& other)
{
  GtkIconInfo *const temp = gobject_;
  gobject_ = other.gobject_;
  other.gobject_ = temp;
}

GtkIconInfo* IconInfo::gobj_copy() const
{
  return gtk_icon_info_ref(gobject_);
}


int IconInfo::get_base_size() const
{
  return gtk_icon_info_get_base_size(const_cast<GtkIconInfo*>(gobj()));
}

Glib::ustring IconInfo::get_filename() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_icon_info_get_filename(const_cast<GtkIconInfo*>(gobj())));
}

Glib::RefPtr<Gdk::Pixbuf> IconInfo::get_builtin_pixbuf()
{
  Glib::RefPtr<Gdk::Pixbuf> retvalue = Glib::wrap(gtk_icon_info_get_builtin_pixbuf(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Gdk::Pixbuf> IconInfo::get_builtin_pixbuf() const
{
  return const_cast<IconInfo*>(this)->get_builtin_pixbuf();
}

Glib::RefPtr<Gdk::Pixbuf> IconInfo::load_icon() const
{
  GError* gerror = 0;
  Glib::RefPtr<Gdk::Pixbuf> retvalue = Glib::wrap(gtk_icon_info_load_icon(const_cast<GtkIconInfo*>(gobj()), &(gerror)));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

Glib::RefPtr<Gdk::Pixbuf> IconInfo::load_icon_finish(const Glib::RefPtr<Gio::AsyncResult>& result)
{
  GError* gerror = 0;
  Glib::RefPtr<Gdk::Pixbuf> retvalue = Glib::wrap(gtk_icon_info_load_icon_finish(gobj(), Glib::unwrap(result), &(gerror)));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

Glib::RefPtr<Gdk::Pixbuf> IconInfo::load_symbolic_for_context_finish(const Glib::RefPtr<Gio::AsyncResult>& result, bool& was_symbolic)
{
  GError* gerror = 0;
  Glib::RefPtr<Gdk::Pixbuf> retvalue = Glib::wrap(gtk_icon_info_load_symbolic_for_context_finish(gobj(), Glib::unwrap(result), ((gboolean*) &(was_symbolic)), &(gerror)));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

Glib::RefPtr<Gdk::Pixbuf> IconInfo::load_symbolic_finish(const Glib::RefPtr<Gio::AsyncResult>& result, bool& was_symbolic)
{
  GError* gerror = 0;
  Glib::RefPtr<Gdk::Pixbuf> retvalue = Glib::wrap(gtk_icon_info_load_symbolic_finish(gobj(), Glib::unwrap(result), ((gboolean*) &(was_symbolic)), &(gerror)));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

void IconInfo::set_raw_coordinates(bool raw_coordinates)
{
  gtk_icon_info_set_raw_coordinates(gobj(), static_cast<int>(raw_coordinates));
}

bool IconInfo::get_embedded_rect(Gdk::Rectangle& rectangle) const
{
  return gtk_icon_info_get_embedded_rect(const_cast<GtkIconInfo*>(gobj()), (rectangle).gobj());
}

Glib::ustring IconInfo::get_display_name() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_icon_info_get_display_name(const_cast<GtkIconInfo*>(gobj())));
}


} // namespace Gtk


