vendor := $(srctree)/$(src)

ifneq "$(wildcard $(vendor)/qcom)" ""
	subdir-y += qcom
endif

# Kebab is an overlay on the generic Kona base DTB.  Build both trees: qcom
# supplies the base DTB (and its Xiaomi ramoops reservation), while oplus
# supplies only the OnePlus board overlay.  Do not make these mutually
# exclusive; doing so produces an incompatible DTBO image.
ifneq "$(wildcard $(vendor)/oplus)" ""
	subdir-y += oplus
endif
