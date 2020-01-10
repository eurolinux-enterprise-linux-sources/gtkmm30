// Generated by gmmproc 2.50.0 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gdkmm/event.h>
#include <gdkmm/private/event_p.h>

#include <gdk/gdk.h>

// -*- c++ -*-
/* $Id: event.ccg,v 1.2 2004/02/10 17:29:54 mxpxpod Exp $ */

/*
 *
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

#include <gdkmm/display.h>

namespace Gdk
{

} //namespace Gdk


namespace
{
} // anonymous namespace

// static
GType Glib::Value<Gdk::EventType>::value_type()
{
  return gdk_event_type_get_type();
}

// static
GType Glib::Value<Gdk::AxisUse>::value_type()
{
  return gdk_axis_use_get_type();
}

// static
GType Glib::Value<Gdk::AxisFlags>::value_type()
{
  return gdk_axis_flags_get_type();
}


namespace Glib
{

Gdk::Event wrap(GdkEvent* object, bool take_copy)
{
  return Gdk::Event(object, take_copy);
}

} // namespace Glib


namespace Gdk
{


// static
GType Event::get_type()
{
  return gdk_event_get_type();
}

Event::Event()
:
  gobject_ (nullptr) // Allows creation of invalid wrapper, e.g. for output arguments to methods.
{}

Event::Event(const Event& other)
:
  gobject_ ((other.gobject_) ? gdk_event_copy(other.gobject_) : nullptr)
{}

Event::Event(Event&& other) noexcept
:
  gobject_(other.gobject_)
{
  other.gobject_ = nullptr;
}

Event& Event::operator=(Event&& other) noexcept
{
  Event temp (other);
  swap(temp);
  return *this;
}

Event::Event(GdkEvent* gobject, bool make_a_copy)
:
  // For BoxedType wrappers, make_a_copy is true by default.  The static
  // BoxedType wrappers must always take a copy, thus make_a_copy = true
  // ensures identical behaviour if the default argument is used.
  gobject_ ((make_a_copy && gobject) ? gdk_event_copy(gobject) : gobject)
{}

Event& Event::operator=(const Event& other)
{
  Event temp (other);
  swap(temp);
  return *this;
}

Event::~Event() noexcept
{
  if(gobject_)
    gdk_event_free(gobject_);
}

void Event::swap(Event& other) noexcept
{
  std::swap(gobject_, other.gobject_);
}

GdkEvent* Event::gobj_copy() const
{
  return gdk_event_copy(gobject_);
}


Event Event::get()
{
  return Event(gdk_event_get());
}

Event Event::peek()
{
  return Event(gdk_event_peek());
}

void Event::put()
{
  gdk_event_put(gobj());
}

bool Event::events_pending()
{
  return gdk_events_pending();
}

guint32 Event::get_time() const
{
  return gdk_event_get_time(const_cast<GdkEvent*>(gobj()));
}

bool Event::get_state(ModifierType& state) const
{
  return gdk_event_get_state(const_cast<GdkEvent*>(gobj()), ((GdkModifierType*) &(state)));
}

bool Event::get_coords(double& x_win, double& y_win) const
{
  return gdk_event_get_coords(const_cast<GdkEvent*>(gobj()), &(x_win), &(y_win));
}

bool Event::get_root_coords(double& x_root, double& y_root) const
{
  return gdk_event_get_root_coords(const_cast<GdkEvent*>(gobj()), &(x_root), &(y_root));
}

bool Event::get_axis(AxisUse axis_use, double& value) const
{
  return gdk_event_get_axis(const_cast<GdkEvent*>(gobj()), ((GdkAxisUse)(axis_use)), &(value));
}

void Event::set_show_events(bool show_events)
{
  gdk_set_show_events(static_cast<int>(show_events));
}

bool Event::get_show_events()
{
  return gdk_get_show_events();
}

Glib::RefPtr<Screen> Event::get_screen()
{
  Glib::RefPtr<Screen> retvalue = Glib::wrap(gdk_event_get_screen(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Screen> Event::get_screen() const
{
  return const_cast<Event*>(this)->get_screen();
}


} // namespace Gdk


