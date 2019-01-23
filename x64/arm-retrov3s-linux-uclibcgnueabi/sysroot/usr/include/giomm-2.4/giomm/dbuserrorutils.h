// Generated by gmmproc 2.54.0 -- DO NOT MODIFY!
#ifndef _GIOMM_DBUSERRORUTILS_H
#define _GIOMM_DBUSERRORUTILS_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 2010 The giomm Development Team
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
 * License along with this library.  If not, see <http://www.gnu.org/licenses/>.
 */


namespace Glib
{

class Error;

}

namespace Gio
{

namespace DBus
{

namespace ErrorUtils
{

/** Checks if @a error represents an error received via D-Bus from a remote
 * peer.  If so, use get_remote_error() to get the name of the error.
 *
 * @param error A Glib::Error.
 * @return <tt>true</tt> if error represents an error from a remote peer,
 * <tt>false</tt> otherwise.
 * @newin{2,28}
 * @ingroup DBus
 */
bool is_remote_error(const Glib::Error& error);

/** Gets the D-Bus error name used for @a error, if any.
 *
 * This function is guaranteed to return a D-Bus error name for all
 * Glib::Error instances returned from functions handling remote method calls
 * (e.g. Gio::DBus::Connection::call_finish()) unless strip_remote_error() has
 * been used on @a error.
 *
 * @param error A Glib::Error.
 * @return An allocated string or <tt>0</tt> if the D-Bus error name could not
 * be found.
 * @newin{2,28}
 * @ingroup DBus
 */
Glib::ustring get_remote_error(const Glib::Error& error);

/** Looks for extra information in the error message used to recover the D-Bus
 * error name and strips it if found. If stripped, the message field in @a
 * error will correspond exactly to what was received on the wire.
 *
 * This is typically used when presenting errors to the end user.
 *
 * @param error A Glib::Error.
 * @return <tt>true</tt> if information was stripped, <tt>false</tt>
 * otherwise.
 * @newin{2,28}
 * @ingroup DBus
 */
bool strip_remote_error(Glib::Error& error);

} // namespace ErrorUtils

} // namespace DBus

} // namespace Gio


#endif /* _GIOMM_DBUSERRORUTILS_H */

