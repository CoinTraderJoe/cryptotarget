include $(top_srcdir)/src/Makefile.include

AM_CPPFLAGS += -I$(top_srcdir)/src \
  -I$(top_srcdir)/src/qt \
  -I$(top_builddir)/src/qt \
  $(PROTOBUF_CFLAGS) \
    $(QR_CFLAGS)
bin_PROGRAMS = test_cryptotarget-qt
TESTS = test_cryptotarget-qt

TEST_QT_MOC_CPP = moc_uritests.cpp

if ENABLE_WALLET
TEST_QT_MOC_CPP += moc_paymentservertests.cpp
endif

TEST_QT_H = \
  uritests.h \
  paymentrequestdata.h \
  paymentservertests.h

BUILT_SOURCES = $(TEST_QT_MOC_CPP)

test_cryptotarget_qt_CPPFLAGS = $(AM_CPPFLAGS) $(QT_INCLUDES) $(QT_TEST_INCLUDES)

test_cryptotarget_qt_SOURCES = \
  test_main.cpp \
  uritests.cpp \
  $(TEST_QT_H)
if ENABLE_WALLET
test_cryptotarget_qt_SOURCES += \
  paymentservertests.cpp
endif

nodist_test_cryptotarget_qt_SOURCES = $(TEST_QT_MOC_CPP)

test_cryptotarget_qt_LDADD = $(LIBCRYPTOTARGETQT) $(LIBCRYPTOTARGET_SERVER)
if ENABLE_WALLET
test_cryptotarget_qt_LDADD += $(LIBCRYPTOTARGET_WALLET)
endif
test_cryptotarget_qt_LDADD += $(LIBCRYPTOTARGET_CLI) $(LIBCRYPTOTARGET_COMMON) $(LIBLEVELDB) \
  $(LIBMEMENV) $(BOOST_LIBS) $(QT_DBUS_LIBS) $(QT_TEST_LIBS) $(QT_LIBS) \
  $(QR_LIBS) $(PROTOBUF_LIBS) $(BDB_LIBS)
test_cryptotarget_qt_LDFLAGS = $(QT_LDFLAGS)

CLEANFILES = $(BUILT_SOURCES) *.gcda *.gcno
