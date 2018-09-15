/* mission_control-window.h
 *
 * Copyright 2018 VCSocial
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include <gtk/gtk.h>

G_BEGIN_DECLS

#define MISSION_CONTROL_TYPE_WINDOW (mission_control_window_get_type())

G_DECLARE_FINAL_TYPE (Mission_controlWindow, mission_control_window, MISSION_CONTROL, WINDOW, GtkApplicationWindow)

G_END_DECLS
