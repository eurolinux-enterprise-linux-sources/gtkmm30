// Generated by gmmproc 2.54.0 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/box.h>
#include <gtkmm/private/box_p.h>


/*
 * Copyright 1998-2002 The gtkmm Development Team
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
#include <glibmm/wrap.h>


namespace Gtk
{

void Box::pack_start(Widget& child, PackOptions options, guint padding)
{
  bool expand = (options == PACK_EXPAND_PADDING) || (options == PACK_EXPAND_WIDGET);
  bool fill = (options == PACK_EXPAND_WIDGET);

  gtk_box_pack_start(gobj(), child.gobj(), (gboolean)expand, (gboolean)fill, padding);
}

void Box::pack_end(Widget& child, PackOptions options, guint padding)
{
  bool expand = (options == PACK_EXPAND_PADDING) || (options == PACK_EXPAND_WIDGET);
  bool fill = (options == PACK_EXPAND_WIDGET);

  gtk_box_pack_end(gobj(), child.gobj(), (gboolean)expand, (gboolean)fill, padding);
}

void Box::unset_center_widget()
{
  gtk_box_set_center_widget(gobj(), nullptr);
}

} //namespace Gtk

namespace
{
} // anonymous namespace


namespace Glib
{

Gtk::Box* wrap(GtkBox* object, bool take_copy)
{
  return dynamic_cast<Gtk::Box *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& Box_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &Box_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_box_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:
  Orientable::add_interface(get_type());

  }

  return *this;
}


void Box_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* Box_Class::wrap_new(GObject* o)
{
  return manage(new Box((GtkBox*)(o)));

}


/* The implementation: */

Box::Box(const Glib::ConstructParams& construct_params)
:
  Gtk::Container(construct_params)
{
  }

Box::Box(GtkBox* castitem)
:
  Gtk::Container((GtkContainer*)(castitem))
{
  }


Box::Box(Box&& src) noexcept
: Gtk::Container(std::move(src))
  , Orientable(std::move(src))
{}

Box& Box::operator=(Box&& src) noexcept
{
  Gtk::Container::operator=(std::move(src));
  Orientable::operator=(std::move(src));
  return *this;
}

Box::~Box() noexcept
{
  destroy_();
}

Box::CppClassType Box::box_class_; // initialize static member

GType Box::get_type()
{
  return box_class_.init().get_type();
}


GType Box::get_base_type()
{
  return gtk_box_get_type();
}


Box::Box(Orientation orientation, int spacing)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gtk::Container(Glib::ConstructParams(box_class_.init(), "orientation", ((GtkOrientation)(orientation)), "spacing", spacing, nullptr))
{
  

}

void Box::pack_start(Widget& child, bool expand, bool fill, guint padding)
{
  gtk_box_pack_start(gobj(), (child).gobj(), static_cast<int>(expand), static_cast<int>(fill), padding);
}

void Box::pack_end(Widget& child, bool expand, bool fill, guint padding)
{
  gtk_box_pack_end(gobj(), (child).gobj(), static_cast<int>(expand), static_cast<int>(fill), padding);
}

void Box::set_homogeneous(bool homogeneous)
{
  gtk_box_set_homogeneous(gobj(), static_cast<int>(homogeneous));
}

bool Box::get_homogeneous() const
{
  return gtk_box_get_homogeneous(const_cast<GtkBox*>(gobj()));
}

void Box::set_spacing(int spacing)
{
  gtk_box_set_spacing(gobj(), spacing);
}

int Box::get_spacing() const
{
  return gtk_box_get_spacing(const_cast<GtkBox*>(gobj()));
}

void Box::set_baseline_position(BaselinePosition position)
{
  gtk_box_set_baseline_position(gobj(), ((GtkBaselinePosition)(position)));
}

BaselinePosition Box::get_baseline_position() const
{
  return ((BaselinePosition)(gtk_box_get_baseline_position(const_cast<GtkBox*>(gobj()))));
}

void Box::reorder_child(Widget& child, int position)
{
  gtk_box_reorder_child(gobj(), (child).gobj(), position);
}

void Box::set_center_widget(Widget& widget)
{
  gtk_box_set_center_widget(gobj(), (widget).gobj());
}

Widget* Box::get_center_widget()
{
  return Glib::wrap(gtk_box_get_center_widget(gobj()));
}

const Widget* Box::get_center_widget() const
{
  return const_cast<Box*>(this)->get_center_widget();
}


Glib::PropertyProxy< int > Box::property_spacing() 
{
  return Glib::PropertyProxy< int >(this, "spacing");
}

Glib::PropertyProxy_ReadOnly< int > Box::property_spacing() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "spacing");
}

Glib::PropertyProxy< bool > Box::property_homogeneous() 
{
  return Glib::PropertyProxy< bool >(this, "homogeneous");
}

Glib::PropertyProxy_ReadOnly< bool > Box::property_homogeneous() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "homogeneous");
}

Glib::PropertyProxy< BaselinePosition > Box::property_baseline_position() 
{
  return Glib::PropertyProxy< BaselinePosition >(this, "baseline-position");
}

Glib::PropertyProxy_ReadOnly< BaselinePosition > Box::property_baseline_position() const
{
  return Glib::PropertyProxy_ReadOnly< BaselinePosition >(this, "baseline-position");
}

Gtk::ChildPropertyProxy< bool > Box::child_property_expand(Gtk::Widget& child) 
{
  return Gtk::ChildPropertyProxy< bool >(this, child, "expand");
}

Gtk::ChildPropertyProxy_ReadOnly< bool > Box::child_property_expand(const Gtk::Widget& child) const
{
  return Gtk::ChildPropertyProxy_ReadOnly< bool >(this, child, "expand");
}

Gtk::ChildPropertyProxy< bool > Box::child_property_fill(Gtk::Widget& child) 
{
  return Gtk::ChildPropertyProxy< bool >(this, child, "fill");
}

Gtk::ChildPropertyProxy_ReadOnly< bool > Box::child_property_fill(const Gtk::Widget& child) const
{
  return Gtk::ChildPropertyProxy_ReadOnly< bool >(this, child, "fill");
}

Gtk::ChildPropertyProxy< guint > Box::child_property_padding(Gtk::Widget& child) 
{
  return Gtk::ChildPropertyProxy< guint >(this, child, "padding");
}

Gtk::ChildPropertyProxy_ReadOnly< guint > Box::child_property_padding(const Gtk::Widget& child) const
{
  return Gtk::ChildPropertyProxy_ReadOnly< guint >(this, child, "padding");
}

Gtk::ChildPropertyProxy< PackType > Box::child_property_pack_type(Gtk::Widget& child) 
{
  return Gtk::ChildPropertyProxy< PackType >(this, child, "pack-type");
}

Gtk::ChildPropertyProxy_ReadOnly< PackType > Box::child_property_pack_type(const Gtk::Widget& child) const
{
  return Gtk::ChildPropertyProxy_ReadOnly< PackType >(this, child, "pack-type");
}

Gtk::ChildPropertyProxy< int > Box::child_property_position(Gtk::Widget& child) 
{
  return Gtk::ChildPropertyProxy< int >(this, child, "position");
}

Gtk::ChildPropertyProxy_ReadOnly< int > Box::child_property_position(const Gtk::Widget& child) const
{
  return Gtk::ChildPropertyProxy_ReadOnly< int >(this, child, "position");
}


} // namespace Gtk


