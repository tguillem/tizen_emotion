MAINTAINERCLEANFILES = Makefile.in

AM_CPPFLAGS = \
-I$(top_srcdir) \
-I$(top_srcdir)/src/lib \
-I$(top_srcdir)/src/modules \
-DPACKAGE_BIN_DIR=\"$(bindir)\" \
-DPACKAGE_LIB_DIR=\"$(libdir)\" \
-DPACKAGE_DATA_DIR=\"$(datadir)/$(PACKAGE)\" \
@EMOTION_CFLAGS@ \
@EMOTION_CPPFLAGS@ \
@EFL_EMOTION_BUILD@ \
@LIBVLC_CFLAGS@

if EMOTION_BUILD_LIBVLC
if !EMOTION_STATIC_BUILD_LIBVLC

pkgdir = $(libdir)/emotion

pkg_LTLIBRARIES = libvlc.la

libvlc_la_SOURCES = \
emotion_libvlc.c
libvlc_la_LIBADD = @EMOTION_LIBS@ @LIBVLC_LIBS@ $(top_builddir)/src/lib/libemotion.la -lpthread
libvlc_la_LDFLAGS = -no-undefined @lt_enable_auto_import@ -module -avoid-version
libvlc_la_LIBTOOLFLAGS = --tag=disable-static

endif
endif
