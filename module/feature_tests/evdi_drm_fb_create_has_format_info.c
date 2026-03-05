// SPDX-License-Identifier: GPL-2.0-only
#include <drm/drm_mode.h>
#include <drm/drm_mode_config.h>
#include <drm/drm_drv.h>
#include <drm/drm_framebuffer.h>
#include <drm/drm_file.h>
#include <drm/drm_fourcc.h>

static struct drm_framebuffer *f(struct drm_device *dev,
				struct drm_file *file,
				const struct drm_format_info *info,
				const struct drm_mode_fb_cmd2 *cmd)
{
	return 0;
}

int evdi_feature_test_drm_fb_create_has_format_info(void);

int evdi_feature_test_drm_fb_create_has_format_info(void)
{
	struct drm_mode_config_funcs funcs = {
		.fb_create = f,
	};

	return funcs.fb_create == NULL;
}
