/* kasasa-screenshot.h
 *
 * Copyright 2024 Kelvin
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#pragma once

#include <adwaita.h>

G_BEGIN_DECLS

#define KASASA_TYPE_SCREENSHOT (kasasa_screenshot_get_type ())

G_DECLARE_FINAL_TYPE (KasasaScreenshot, kasasa_screenshot, KASASA, SCREENSHOT, AdwBin)

KasasaScreenshot *kasasa_screenshot_new (void);

GFile *kasasa_screenshot_get_file (KasasaScreenshot *self);

gint kasasa_screenshot_get_image_height (KasasaScreenshot *self);
gint kasasa_screenshot_get_image_width (KasasaScreenshot *self);

gdouble kasasa_screenshot_get_nat_width (KasasaScreenshot *self);
gdouble kasasa_screenshot_get_nat_height (KasasaScreenshot *self);

void kasasa_screenshot_set_nat_width (KasasaScreenshot *self,
                                      gdouble           nat_width);
void kasasa_screenshot_set_nat_height (KasasaScreenshot *self,
                                       gdouble           nat_height);


void kasasa_screenshot_load_screenshot (KasasaScreenshot *self,
                                        const gchar      *uri);

void kasasa_screenshot_trash_image (KasasaScreenshot *self);

G_END_DECLS
