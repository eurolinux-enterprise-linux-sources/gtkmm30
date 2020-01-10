// Generated by gtkmmproc -- DO NOT MODIFY!


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
#include <gtkmm/viewport.h>
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

void ScrolledWindow::remove_with_viewport()
{
  GtkWidget* child = gtk_bin_get_child(Bin::gobj());
  if (child)
  {
    if (GTK_IS_VIEWPORT(child))
    {
      // Remove the Viewport's child, if any, from the Viewport.
      GtkWidget* grandchild = gtk_bin_get_child(GTK_BIN(child)); // A GtkViewport is a GtkBin
      if (grandchild)
      {
        Gtk::Widget* cppGrandchild = Glib::wrap(grandchild);

        //If the grandchild is a managed widget, then do an extra ref so that it will not be
        //destroyed when it is removed, and restore the floating state of the ref.
        //This should leave it in the same state as when it was instantiated,
        //before being added to the first container.
        if (cppGrandchild->is_managed_())
        {
          cppGrandchild->reference();
          g_object_force_floating(static_cast<Glib::Object*>(cppGrandchild)->gobj());
        }

        gtk_container_remove(GTK_CONTAINER(child), grandchild);
      }

      // Remove the Viewport.
      // Don't do an extra ref on the child (the Viewport). If it's added
      // by ScrolledWindow::add() or created as a managed widget,
      // let it be deleted, when it's removed and the ref count reaches 0.
      gtk_container_remove(Container::gobj(), child);
    }
    else
    {
      // The child is not a Viewport. Just remove it.
      Bin::remove();
    }
  }
}

} //namespace Gtk

namespace
{
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
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
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

ScrolledWindow::~ScrolledWindow()
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
  Glib::ObjectBase(0),
  Gtk::Bin(Glib::ConstructParams(scrolledwindow_class_.init()))
{
  

}

ScrolledWindow::ScrolledWindow(const Glib::RefPtr<Adjustment>& hadjustment, const Glib::RefPtr<Adjustment>& vadjustment)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::Bin(Glib::ConstructParams(scrolledwindow_class_.init(), "hadjustment", Glib::unwrap(hadjustment), "vadjustment", Glib::unwrap(vadjustment), static_cast<char*>(0)))
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


#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< Glib::RefPtr<Adjustment> > ScrolledWindow::property_hadjustment() 
{
  return Glib::PropertyProxy< Glib::RefPtr<Adjustment> >(this, "hadjustment");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Adjustment> > ScrolledWindow::property_hadjustment() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Adjustment> >(this, "hadjustment");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< Glib::RefPtr<Adjustment> > ScrolledWindow::property_vadjustment() 
{
  return Glib::PropertyProxy< Glib::RefPtr<Adjustment> >(this, "vadjustment");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Adjustment> > ScrolledWindow::property_vadjustment() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Adjustment> >(this, "vadjustment");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< PolicyType > ScrolledWindow::property_hscrollbar_policy() 
{
  return Glib::PropertyProxy< PolicyType >(this, "hscrollbar-policy");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< PolicyType > ScrolledWindow::property_hscrollbar_policy() const
{
  return Glib::PropertyProxy_ReadOnly< PolicyType >(this, "hscrollbar-policy");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< PolicyType > ScrolledWindow::property_vscrollbar_policy() 
{
  return Glib::PropertyProxy< PolicyType >(this, "vscrollbar-policy");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< PolicyType > ScrolledWindow::property_vscrollbar_policy() const
{
  return Glib::PropertyProxy_ReadOnly< PolicyType >(this, "vscrollbar-policy");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< CornerType > ScrolledWindow::property_window_placement() 
{
  return Glib::PropertyProxy< CornerType >(this, "window-placement");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< CornerType > ScrolledWindow::property_window_placement() const
{
  return Glib::PropertyProxy_ReadOnly< CornerType >(this, "window-placement");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< bool > ScrolledWindow::property_window_placement_set() 
{
  return Glib::PropertyProxy< bool >(this, "window-placement-set");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< bool > ScrolledWindow::property_window_placement_set() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "window-placement-set");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< ShadowType > ScrolledWindow::property_shadow_type() 
{
  return Glib::PropertyProxy< ShadowType >(this, "shadow-type");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< ShadowType > ScrolledWindow::property_shadow_type() const
{
  return Glib::PropertyProxy_ReadOnly< ShadowType >(this, "shadow-type");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< int > ScrolledWindow::property_min_content_width() 
{
  return Glib::PropertyProxy< int >(this, "min-content-width");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< int > ScrolledWindow::property_min_content_width() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "min-content-width");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< int > ScrolledWindow::property_min_content_height() 
{
  return Glib::PropertyProxy< int >(this, "min-content-height");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< int > ScrolledWindow::property_min_content_height() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "min-content-height");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< bool > ScrolledWindow::property_kinetic_scrolling() 
{
  return Glib::PropertyProxy< bool >(this, "kinetic-scrolling");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< bool > ScrolledWindow::property_kinetic_scrolling() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "kinetic-scrolling");
}
#endif //GLIBMM_PROPERTIES_ENABLED


} // namespace Gtk


