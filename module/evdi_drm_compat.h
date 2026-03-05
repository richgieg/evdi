/* SPDX-License-Identifier: GPL-2.0-only */
#ifndef EVDI_DRM_COMPAT_H
#define EVDI_DRM_COMPAT_H

/*
 * Prefer feature/API detection over kernel release checks.
 *
 * These are numeric feature flags (0/1) intended for use in preprocessor
 * conditionals. The module Makefile sets them via tiny compile tests against
 * the target kernel headers.
 */

#ifndef EVDI_DRM_FB_CREATE_HAS_FORMAT_INFO
#define EVDI_DRM_FB_CREATE_HAS_FORMAT_INFO 0
#endif

#ifndef EVDI_DRM_HELPER_MODE_FILL_FB_STRUCT_HAS_FORMAT_INFO
#define EVDI_DRM_HELPER_MODE_FILL_FB_STRUCT_HAS_FORMAT_INFO 0
#endif

#endif /* EVDI_DRM_COMPAT_H */
