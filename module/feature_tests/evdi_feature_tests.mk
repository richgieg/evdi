# Feature tests (API detection) for backport-friendly builds.
#
# Keep probes warning-clean: we intentionally use -Werror so CI/build envs with
# aggressive warning flags don't silently flip feature detection results.

EVDI_TEST_CC := $(CC) $(NOSTDINC_FLAGS) $(LINUXINCLUDE) $(KBUILD_CPPFLAGS) $(KBUILD_CFLAGS) \
	-Werror

EVDI_FEATURE_TESTS_DIR := $(if $(src),$(src),$(CURDIR))/feature_tests

EVDI_DRM_FB_CREATE_HAS_FORMAT_INFO := $(shell \
	$(EVDI_TEST_CC) -c -o /dev/null \
		$(EVDI_FEATURE_TESTS_DIR)/evdi_drm_fb_create_has_format_info.c \
		>/dev/null 2>&1 && echo 1 || echo 0)

EVDI_DRM_HELPER_MODE_FILL_FB_STRUCT_HAS_FORMAT_INFO := $(shell \
	$(EVDI_TEST_CC) -c -o /dev/null \
		$(EVDI_FEATURE_TESTS_DIR)/evdi_drm_helper_mode_fill_fb_struct_has_format_info.c \
		>/dev/null 2>&1 && echo 1 || echo 0)

ccflags-y += -DEVDI_DRM_FB_CREATE_HAS_FORMAT_INFO=$(EVDI_DRM_FB_CREATE_HAS_FORMAT_INFO)
ccflags-y += -DEVDI_DRM_HELPER_MODE_FILL_FB_STRUCT_HAS_FORMAT_INFO=$(EVDI_DRM_HELPER_MODE_FILL_FB_STRUCT_HAS_FORMAT_INFO)
