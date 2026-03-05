// SPDX-License-Identifier: GPL-2.0-only
#include <drm/drm_mode.h>
#include <drm/drm_modeset_helper.h>
#include <drm/drm_drv.h>
#include <drm/drm_framebuffer.h>
#include <drm/drm_fourcc.h>

int evdi_feature_test_drm_helper_mode_fill_fb_struct_has_format_info(void);

int evdi_feature_test_drm_helper_mode_fill_fb_struct_has_format_info(void)
{
	drm_helper_mode_fill_fb_struct((struct drm_device *)0,
				      (struct drm_framebuffer *)0,
				      (const struct drm_format_info *)0,
				      (const struct drm_mode_fb_cmd2 *)0);
	return 0;
}
