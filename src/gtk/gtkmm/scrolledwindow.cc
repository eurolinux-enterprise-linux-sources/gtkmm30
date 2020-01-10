// Generated by gmmproc 2.50.0 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/scrolledwindow.h>
#include <gtkmm/private/scrolledwindow_p.h>


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

#include <gtkmm/scrollbar.h>
#include <gtkmm/adjustment.h>
#include <gtk/gtk.h>

namespace Gtk
{

void ScrolledWindow::add(Gtk::Widget& widget)
{
  //TODO: Remove this method overload completely when we can break ABI.
  //We used to do what GTK+ now does for us:
  //See https://bugzilla.gnome.org/show_bug.cgi?id=693015
  Bin::add(widget);
}

#ifndef GTKMM_DISABLE_DEPRECATED

void ScrolledWindow::remove_with_viewport()
{
  //We used to do what GTK+ now does for us:
  //See https://bugzilla.gnome.org/show_bug.cgi?id=710471
  remove();
}
#endif // GTKMM_DISABLE_DEPRECATED


} //namespace Gtk

namespace
{


static void ScrolledWindow_signal_edge_overshot_callback(GtkScrolledWindow* self, GtkPositionType p0,void* data)
{
  using namespace Gtk;
  using SlotType = sigc::slot< void,Gtk::PositionType >;

  auto obj = dynamic_cast<ScrolledWindow*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(((Gtk::PositionType)(p0))
);
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }
}

static const Glib::SignalProxyInfo ScrolledWindow_signal_edge_overshot_info =
{
  "edge-overshot",
  (GCallback) &ScrolledWindow_signal_edge_overshot_callback,
  (GCallback) &ScrolledWindow_signal_edge_overshot_callback
};


static void ScrolledWindow_signal_edge_reached_callback(GtkScrolledWindow* self, GtkPositionType p0,void* data)
{
  using namespace Gtk;
  using SlotType = sigc::slot< void,Gtk::PositionType >;

  auto obj = dynamic_cast<ScrolledWindow*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(((Gtk::PositionType)(p0))
);
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }
}

static const Glib::SignalProxyInfo ScrolledWindow_signal_edge_reached_info =
{
  "edge-reached",
  (GCallback) &ScrolledWindow_signal_edge_reached_callback,
  (GCallback) &ScrolledWindow_signal_edge_reached_callback
};


} // anonymous namespace


namespace Glib
{

Gtk::ScrolledWindow* wrap(GtkScrolledWindow* object, bool take_copy)
{
  return dynamic_cast<Gtk::ScrolledWindow *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& ScrolledWindow_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &ScrolledWindow_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_scrolled_window_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void ScrolledWindow_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* ScrolledWindow_Class::wrap_new(GObject* o)
{
  return manage(new ScrolledWindow((GtkScrolledWindow*)(o)));

}


/* The implementation: */

ScrolledWindow::ScrolledWindow(const Glib::ConstructParams& construct_params)
:
  Gtk::Bin(construct_params)
{
  }

ScrolledWindow::ScrolledWindow(GtkScrolledWindow* castitem)
:
  Gtk::Bin((GtkBin*)(castitem))
{
  }


ScrolledWindow::ScrolledWindow(ScrolledWindow&& src) noexcept
: Gtk::Bin(std::move(src))
{}

ScrolledWindow& ScrolledWindow::operator=(ScrolledWindow&& src) noexcept
{
  Gtk::Bin::operator=(std::move(src));
  return *this;
}

ScrolledWindow::~ScrolledWindow() noexcept
{
  destroy_();
}

ScrolledWindow::CppClassType ScrolledWindow::scrolledwindow_class_; // initialize static member

GType ScrolledWindow::get_type()
{
  return scrolledwindow_class_.init().get_type();
}


GType ScrolledWindow::get_base_type()
{
  return gtk_scrolled_window_get_type();
}


ScrolledWindow::ScrolledWindow()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gtk::Bin(Glib::ConstructParams(scrolledwindow_class_.init()))
{
  

}

ScrolledWindow::ScrolledWindow(const Glib::RefPtr<Adjustment>& hadjustment, const Glib::RefPtr<Adjustment>& vadjustment)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gtk::Bin(Glib::ConstructParams(scrolledwindow_class_.init(), "hadjustment", Glib::unwrap(hadjustment), "vadjustment", Glib::unwrap(vadjustment), nullptr))
{
  

}

void ScrolledWindow::set_hadjustment(const Glib::RefPtr<Adjustment>& hadjustment)
{
  gtk_scrolled_window_set_hadjustment(gobj(), Glib::unwrap(hadjustment));
}

void ScrolledWindow::set_vadjustment(const Glib::RefPtr<Adjustment>& vadjustment)
{
  gtk_scrolled_window_set_vadjustment(gobj(), Glib::unwrap(vadjustment));
}

Glib::RefPtr<Adjustment> ScrolledWindow::get_hadjustment()
{
  Glib::RefPtr<Adjustment> retvalue = Glib::wrap(gtk_scrolled_window_get_hadjustment(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Adjustment> ScrolledWindow::get_hadjustment() const
{
  return const_cast<ScrolledWindow*>(this)->get_hadjustment();
}

Glib::RefPtr<Adjustment> ScrolledWindow::get_vadjustment()
{
  Glib::RefPtr<Adjustment> retvalue = Glib::wrap(gtk_scrolled_window_get_vadjustment(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Adjustment> ScrolledWindow::get_vadjustment() const
{
  return const_cast<ScrolledWindow*>(this)->get_vadjustment();
}

void ScrolledWindow::set_policy(PolicyType hscrollbar_policy, PolicyType vscrollbar_policy)
{
  gtk_scrolled_window_set_policy(gobj(), ((GtkPolicyType)(hscrollbar_policy)), ((GtkPolicyType)(vscrollbar_policy)));
}

void ScrolledWindow::get_policy(PolicyType& hscrollbar_policy, PolicyType& vscrollbar_policy) const
{
  gtk_scrolled_window_get_policy(const_cast<GtkScrolledWindow*>(gobj()), ((GtkPolicyType*) &(hscrollbar_policy)), ((GtkPolicyType*) &(vscrollbar_policy)));
}

void ScrolledWindow::set_placement(CornerType window_placement)
{
  gtk_scrolled_window_set_placement(gobj(), ((GtkCornerType)(window_placement)));
}

void ScrolledWindow::unset_placement()
{
  gtk_scrolled_window_unset_placement(gobj());
}

CornerType ScrolledWindow::get_placement() const
{
  return ((CornerType)(gtk_scrolled_window_get_placement(const_cast<GtkScrolledWindow*>(gobj()))));
}

void ScrolledWindow::set_shadow_type(ShadowType type)
{
  gtk_scrolled_window_set_shadow_type(gobj(), ((GtkShadowType)(type)));
}

ShadowType ScrolledWindow::get_shadow_type() const
{
  return ((ShadowType)(gtk_scrolled_window_get_shadow_type(const_cast<GtkScrolledWindow*>(gobj()))));
}

Scrollbar* ScrolledWindow::get_vscrollbar()
{
  return Glib::wrap((GtkScrollbar*)gtk_scrolled_window_get_vscrollbar(gobj()));
}

const Scrollbar* ScrolledWindow::get_vscrollbar() const
{
  return Glib::wrap((GtkScrollbar*)gtk_scrolled_window_get_vscrollbar(const_cast<GtkScrolledWindow*>(gobj())));
}

Scrollbar* ScrolledWindow::get_hscrollbar()
{
  return Glib::wrap((GtkScrollbar*)gtk_scrolled_window_get_hscrollbar(gobj()));
}

const Scrollbar* ScrolledWindow::get_hscrollbar() const
{
  return Glib::wrap((GtkScrollbar*)gtk_scrolled_window_get_hscrollbar(const_cast<GtkScrolledWindow*>(gobj())));
}

int ScrolledWindow::get_min_content_width() const
{
  return gtk_scrolled_window_get_min_content_width(const_cast<GtkScrolledWindow*>(gobj()));
}

void ScrolledWindow::set_min_content_width(int width)
{
  gtk_scrolled_window_set_min_content_width(gobj(), width);
}

int ScrolledWindow::get_min_content_height() const
{
  return gtk_scrolled_window_get_min_content_height(const_cast<GtkScrolledWindow*>(gobj()));
}

void ScrolledWindow::set_min_content_height(int height)
{
  gtk_scrolled_window_set_min_content_height(gobj(), height);
}

void ScrolledWindow::set_kinetic_scrolling(bool kinetic_scrolling)
{
  gtk_scrolled_window_set_kinetic_scrolling(gobj(), static_cast<int>(kinetic_scrolling));
}

bool ScrolledWindow::get_kinetic_scrolling() const
{
  return gtk_scrolled_window_get_kinetic_scrolling(const_cast<GtkScrolledWindow*>(gobj()));
}

void ScrolledWindow::set_capture_button_press(bool capture_button_press)
{
  gtk_scrolled_window_set_capture_button_press(gobj(), static_cast<int>(capture_button_press));
}

bool ScrolledWindow::get_capture_button_press() const
{
  return gtk_scrolled_window_get_capture_button_press(const_cast<GtkScrolledWindow*>(gobj()));
}

void ScrolledWindow::set_overlay_scrolling(bool overlay_scrolling)
{
  gtk_scrolled_window_set_overlay_scrolling(gobj(), static_cast<int>(overlay_scrolling));
}

bool ScrolledWindow::get_overlay_scrolling() const
{
  return gtk_scrolled_window_get_overlay_scrolling(const_cast<GtkScrolledWindow*>(gobj()));
}

void ScrolledWindow::set_max_content_width(int width)
{
  gtk_scrolled_window_set_max_content_width(gobj(), width);
}

int ScrolledWindow::get_max_content_width() const
{
  return gtk_scrolled_window_get_max_content_width(const_cast<GtkScrolledWindow*>(gobj()));
}

void ScrolledWindow::set_max_content_height(int height)
{
  gtk_scrolled_window_set_max_content_height(gobj(), height);
}

int ScrolledWindow::get_max_content_height() const
{
  return gtk_scrolled_window_get_max_content_height(const_cast<GtkScrolledWindow*>(gobj()));
}

void ScrolledWindow::set_propagate_natural_width(bool propagate)
{
  gtk_scrolled_window_set_propagate_natural_width(gobj(), static_cast<int>(propagate));
}

bool ScrolledWindow::get_propagate_natural_width() const
{
  return gtk_scrolled_window_get_propagate_natural_width(const_cast<GtkScrolledWindow*>(gobj()));
}

void ScrolledWindow::set_propagate_natural_height(bool propagate)
{
  gtk_scrolled_window_set_propagate_natural_height(gobj(), static_cast<int>(propagate));
}

bool ScrolledWindow::get_propagate_natural_height() const
{
  return gtk_scrolled_window_get_propagate_natural_height(const_cast<GtkScrolledWindow*>(gobj()));
}


Glib::SignalProxy< void,Gtk::PositionType > ScrolledWindow::signal_edge_overshot()
{
  return Glib::SignalProxy< void,Gtk::PositionType >(this, &ScrolledWindow_signal_edge_overshot_info);
}


Glib::SignalProxy< void,Gtk::PositionType > ScrolledWindow::signal_edge_reached()
{
  return Glib::SignalProxy< void,Gtk::PositionType >(this, &ScrolledWindow_signal_edge_reached_info);
}


Glib::PropertyProxy< Glib::RefPtr<Adjustment> > ScrolledWindow::property_hadjustment() 
{
  return Glib::PropertyProxy< Glib::RefPtr<Adjustment> >(this, "hadjustment");
}

Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Adjustment> > ScrolledWindow::property_hadjustment() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Adjustment> >(this, "hadjustment");
}

Glib::PropertyProxy< Glib::RefPtr<Adjustment> > ScrolledWindow::property_vadjustment() 
{
  return Glib::PropertyProxy< Glib::RefPtr<Adjustment> >(this, "vadjustment");
}

Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Adjustment> > ScrolledWindow::property_vadjustment() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Adjustment> >(this, "vadjustment");
}

Glib::PropertyProxy< PolicyType > ScrolledWindow::property_hscrollbar_policy() 
{
  return Glib::PropertyProxy< PolicyType >(this, "hscrollbar-policy");
}

Glib::PropertyProxy_ReadOnly< PolicyType > ScrolledWindow::property_hscrollbar_policy() const
{
  return Glib::PropertyProxy_ReadOnly< PolicyType >(this, "hscrollbar-policy");
}

Glib::PropertyProxy< PolicyType > ScrolledWindow::property_vscrollbar_policy() 
{
  return Glib::PropertyProxy< PolicyType >(this, "vscrollbar-policy");
}

Glib::PropertyProxy_ReadOnly< PolicyType > ScrolledWindow::property_vscrollbar_policy() const
{
  return Glib::PropertyProxy_ReadOnly< PolicyType >(this, "vscrollbar-policy");
}

Glib::PropertyProxy< CornerType > ScrolledWindow::property_window_placement() 
{
  return Glib::PropertyProxy< CornerType >(this, "window-placement");
}

Glib::PropertyProxy_ReadOnly< CornerType > ScrolledWindow::property_window_placement() const
{
  return Glib::PropertyProxy_ReadOnly< CornerType >(this, "window-placement");
}

#ifndef GTKMM_DISABLE_DEPRECATED

Glib::PropertyProxy< bool > ScrolledWindow::property_window_placement_set() 
{
  return Glib::PropertyProxy< bool >(this, "window-placement-set");
}
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

Glib::PropertyProxy_ReadOnly< bool > ScrolledWindow::property_window_placement_set() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "window-placement-set");
}
#endif // GTKMM_DISABLE_DEPRECATED


Glib::PropertyProxy< ShadowType > ScrolledWindow::property_shadow_type() 
{
  return Glib::PropertyProxy< ShadowType >(this, "shadow-type");
}

Glib::PropertyProxy_ReadOnly< ShadowType > ScrolledWindow::property_shadow_type() const
{
  return Glib::PropertyProxy_ReadOnly< ShadowType >(this, "shadow-type");
}

Glib::PropertyProxy< int > ScrolledWindow::property_min_content_width() 
{
  return Glib::PropertyProxy< int >(this, "min-content-width");
}

Glib::PropertyProxy_ReadOnly< int > ScrolledWindow::property_min_content_width() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "min-content-width");
}

Glib::PropertyProxy< int > ScrolledWindow::property_min_content_height() 
{
  return Glib::PropertyProxy< int >(this, "min-content-height");
}

Glib::PropertyProxy_ReadOnly< int > ScrolledWindow::property_min_content_height() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "min-content-height");
}

Glib::PropertyProxy< bool > ScrolledWindow::property_kinetic_scrolling() 
{
  return Glib::PropertyProxy< bool >(this, "kinetic-scrolling");
}

Glib::PropertyProxy_ReadOnly< bool > ScrolledWindow::property_kinetic_scrolling() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "kinetic-scrolling");
}

Glib::PropertyProxy< bool > ScrolledWindow::property_overlay_scrolling() 
{
  return Glib::PropertyProxy< bool >(this, "overlay-scrolling");
}

Glib::PropertyProxy_ReadOnly< bool > ScrolledWindow::property_overlay_scrolling() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "overlay-scrolling");
}

Glib::PropertyProxy< int > ScrolledWindow::property_max_content_width() 
{
  return Glib::PropertyProxy< int >(this, "max-content-width");
}

Glib::PropertyProxy_ReadOnly< int > ScrolledWindow::property_max_content_width() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "max-content-width");
}

Glib::PropertyProxy< int > ScrolledWindow::property_max_content_height() 
{
  return Glib::PropertyProxy< int >(this, "max-content-height");
}

Glib::PropertyProxy_ReadOnly< int > ScrolledWindow::property_max_content_height() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "max-content-height");
}

Glib::PropertyProxy< bool > ScrolledWindow::property_propagate_natural_width() 
{
  return Glib::PropertyProxy< bool >(this, "propagate-natural-width");
}

Glib::PropertyProxy_ReadOnly< bool > ScrolledWindow::property_propagate_natural_width() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "propagate-natural-width");
}

Glib::PropertyProxy< bool > ScrolledWindow::property_propagate_natural_height() 
{
  return Glib::PropertyProxy< bool >(this, "propagate-natural-height");
}

Glib::PropertyProxy_ReadOnly< bool > ScrolledWindow::property_propagate_natural_height() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "propagate-natural-height");
}


} // namespace Gtk


