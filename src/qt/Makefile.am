include $(top_srcdir)/src/Makefile.include

AM_CPPFLAGS += -I$(top_srcdir)/src \
  -I$(top_builddir)/src/qt \
  -I$(top_builddir)/src/qt/forms \
  $(PROTOBUF_CFLAGS) \
  $(QR_CFLAGS)
bin_PROGRAMS = cryptotarget-qt
noinst_LIBRARIES = libcryptotargetqt.a
SUBDIRS = . $(BUILD_TEST_QT)
DIST_SUBDIRS = . test

# cryptotarget qt core #
QT_TS = \
  locale/cryptotarget_ach.ts \
  locale/cryptotarget_af_ZA.ts \
  locale/cryptotarget_ar.ts \
  locale/cryptotarget_be_BY.ts \
  locale/cryptotarget_bg.ts \
  locale/cryptotarget_bs.ts \
  locale/cryptotarget_ca_ES.ts \
  locale/cryptotarget_ca.ts \
  locale/cryptotarget_ca@valencia.ts \
  locale/cryptotarget_cmn.ts \
  locale/cryptotarget_cs.ts \
  locale/cryptotarget_cy.ts \
  locale/cryptotarget_da.ts \
  locale/cryptotarget_de.ts \
  locale/cryptotarget_el_GR.ts \
  locale/cryptotarget_en.ts \
  locale/cryptotarget_eo.ts \
  locale/cryptotarget_es_CL.ts \
  locale/cryptotarget_es_DO.ts \
  locale/cryptotarget_es_MX.ts \
  locale/cryptotarget_es.ts \
  locale/cryptotarget_es_UY.ts \
  locale/cryptotarget_et.ts \
  locale/cryptotarget_eu_ES.ts \
  locale/cryptotarget_fa_IR.ts \
  locale/cryptotarget_fa.ts \
  locale/cryptotarget_fi.ts \
  locale/cryptotarget_fr_CA.ts \
  locale/cryptotarget_fr.ts \
  locale/cryptotarget_gl.ts \
  locale/cryptotarget_gu_IN.ts \
  locale/cryptotarget_he.ts \
  locale/cryptotarget_hi_IN.ts \
  locale/cryptotarget_hr.ts \
  locale/cryptotarget_hu.ts \
  locale/cryptotarget_id_ID.ts \
  locale/cryptotarget_it.ts \
  locale/cryptotarget_ja.ts \
  locale/cryptotarget_ka.ts \
  locale/cryptotarget_kk_KZ.ts \
  locale/cryptotarget_ko_KR.ts \
  locale/cryptotarget_ky.ts \
  locale/cryptotarget_la.ts \
  locale/cryptotarget_lt.ts \
  locale/cryptotarget_lv_LV.ts \
  locale/cryptotarget_mn.ts \
  locale/cryptotarget_ms_MY.ts \
  locale/cryptotarget_nb.ts \
  locale/cryptotarget_nl.ts \
  locale/cryptotarget_pam.ts \
  locale/cryptotarget_pl.ts \
  locale/cryptotarget_pt_BR.ts \
  locale/cryptotarget_pt_PT.ts \
  locale/cryptotarget_ro_RO.ts \
  locale/cryptotarget_ru.ts \
  locale/cryptotarget_sah.ts \
  locale/cryptotarget_sk.ts \
  locale/cryptotarget_sl_SI.ts \
  locale/cryptotarget_sq.ts \
  locale/cryptotarget_sr.ts \
  locale/cryptotarget_sv.ts \
  locale/cryptotarget_th_TH.ts \
  locale/cryptotarget_tr.ts \
  locale/cryptotarget_uk.ts \
  locale/cryptotarget_ur_PK.ts \
  locale/cryptotarget_uz@Cyrl.ts \
  locale/cryptotarget_vi.ts \
  locale/cryptotarget_vi_VN.ts \
  locale/cryptotarget_zh_CN.ts \
  locale/cryptotarget_zh_HK.ts \
  locale/cryptotarget_zh_TW.ts

QT_FORMS_UI = \
  forms/aboutdialog.ui \
  forms/addressbookpage.ui \
  forms/askpassphrasedialog.ui \
  forms/coincontroldialog.ui \
  forms/editaddressdialog.ui \
  forms/helpmessagedialog.ui \
  forms/intro.ui \
  forms/openuridialog.ui \
  forms/optionsdialog.ui \
  forms/overviewpage.ui \
  forms/receivecoinsdialog.ui \
  forms/receiverequestdialog.ui \
  forms/rpcconsole.ui \
  forms/sendcoinsdialog.ui \
  forms/sendcoinsentry.ui \
  forms/signverifymessagedialog.ui \
  forms/transactiondescdialog.ui

QT_MOC_CPP = \
  moc_addressbookpage.cpp \
  moc_addresstablemodel.cpp \
  moc_askpassphrasedialog.cpp \
  moc_cryptotargetaddressvalidator.cpp \
  moc_cryptotargetamountfield.cpp \
  moc_cryptotargetgui.cpp \
  moc_cryptotargetunits.cpp \
  moc_clientmodel.cpp \
  moc_coincontroldialog.cpp \
  moc_coincontroltreewidget.cpp \
  moc_csvmodelwriter.cpp \
  moc_editaddressdialog.cpp \
  moc_guiutil.cpp \
  moc_intro.cpp \
  moc_macdockiconhandler.cpp \
  moc_macnotificationhandler.cpp \
  moc_monitoreddatamapper.cpp \
  moc_notificator.cpp \
  moc_openuridialog.cpp \
  moc_optionsdialog.cpp \
  moc_optionsmodel.cpp \
  moc_overviewpage.cpp \
  moc_paymentserver.cpp \
  moc_qvalidatedlineedit.cpp \
  moc_qvaluecombobox.cpp \
  moc_receivecoinsdialog.cpp \
  moc_receiverequestdialog.cpp \
  moc_recentrequeststablemodel.cpp \
  moc_rpcconsole.cpp \
  moc_sendcoinsdialog.cpp \
  moc_sendcoinsentry.cpp \
  moc_signverifymessagedialog.cpp \
  moc_splashscreen.cpp \
  moc_trafficgraphwidget.cpp \
  moc_transactiondesc.cpp \
  moc_transactiondescdialog.cpp \
  moc_transactionfilterproxy.cpp \
  moc_transactiontablemodel.cpp \
  moc_transactionview.cpp \
  moc_utilitydialog.cpp \
  moc_walletframe.cpp \
  moc_walletmodel.cpp \
  moc_walletview.cpp

CRYPTOTARGET_MM = \
  macdockiconhandler.mm \
  macnotificationhandler.mm

QT_MOC = \
  cryptotarget.moc \
  intro.moc \
  overviewpage.moc \
  rpcconsole.moc

QT_QRC_CPP = qrc_cryptotarget.cpp
QT_QRC = cryptotarget.qrc

PROTOBUF_CC = paymentrequest.pb.cc
PROTOBUF_H = paymentrequest.pb.h
PROTOBUF_PROTO = paymentrequest.proto

CRYPTOTARGET_QT_H = \
  addressbookpage.h \
  addresstablemodel.h \
  askpassphrasedialog.h \
  cryptotargetaddressvalidator.h \
  cryptotargetamountfield.h \
  cryptotargetgui.h \
  cryptotargetunits.h \
  clientmodel.h \
  coincontroldialog.h \
  coincontroltreewidget.h \
  csvmodelwriter.h \
  editaddressdialog.h \
  guiconstants.h \
  guiutil.h \
  intro.h \
  macdockiconhandler.h \
  macnotificationhandler.h \
  monitoreddatamapper.h \
  notificator.h \
  openuridialog.h \
  optionsdialog.h \
  optionsmodel.h \
  overviewpage.h \
  paymentrequestplus.h \
  paymentserver.h \
  qvalidatedlineedit.h \
  qvaluecombobox.h \
  receivecoinsdialog.h \
  receiverequestdialog.h \
  recentrequeststablemodel.h \
  rpcconsole.h \
  sendcoinsdialog.h \
  sendcoinsentry.h \
  signverifymessagedialog.h \
  splashscreen.h \
  trafficgraphwidget.h \
  transactiondesc.h \
  transactiondescdialog.h \
  transactionfilterproxy.h \
  transactionrecord.h \
  transactiontablemodel.h \
  transactionview.h \
  utilitydialog.h \
  walletframe.h \
  walletmodel.h \
  walletmodeltransaction.h \
  walletview.h \
  winshutdownmonitor.h

RES_ICONS = \
  res/icons/add.png \
  res/icons/address-book.png \
  res/icons/cryptotarget.ico \
  res/icons/cryptotarget.png \
  res/icons/cryptotarget_testnet.ico \
  res/icons/cryptotarget_testnet.png \
  res/icons/clock1.png \
  res/icons/clock2.png \
  res/icons/clock3.png \
  res/icons/clock4.png \
  res/icons/clock5.png \
  res/icons/configure.png \
  res/icons/connect0_16.png \
  res/icons/connect1_16.png \
  res/icons/connect2_16.png \
  res/icons/connect3_16.png \
  res/icons/connect4_16.png \
  res/icons/debugwindow.png \
  res/icons/edit.png \
  res/icons/editcopy.png \
  res/icons/editpaste.png \
  res/icons/export.png \
  res/icons/filesave.png \
  res/icons/history.png \
  res/icons/key.png \
  res/icons/lock_closed.png \
  res/icons/lock_open.png \
  res/icons/overview.png \
  res/icons/qrcode.png \
  res/icons/quit.png \
  res/icons/receive.png \
  res/icons/remove.png \
  res/icons/send.png \
  res/icons/synced.png \
  res/icons/toolbar.png \
  res/icons/toolbar_testnet.png \
  res/icons/transaction0.png \
  res/icons/transaction2.png \
  res/icons/transaction_conflicted.png \
  res/icons/tx_inout.png \
  res/icons/tx_input.png \
  res/icons/tx_output.png \
  res/icons/tx_mined.png

CRYPTOTARGET_QT_CPP = \
  cryptotarget.cpp \
  cryptotargetaddressvalidator.cpp \
  cryptotargetamountfield.cpp \
  cryptotargetgui.cpp \
  cryptotargetunits.cpp \
  clientmodel.cpp \
  csvmodelwriter.cpp \
  guiutil.cpp \
  intro.cpp \
  monitoreddatamapper.cpp \
  notificator.cpp \
  optionsdialog.cpp \
  optionsmodel.cpp \
  qvalidatedlineedit.cpp \
  qvaluecombobox.cpp \
  rpcconsole.cpp \
  splashscreen.cpp \
  trafficgraphwidget.cpp \
  utilitydialog.cpp \
  winshutdownmonitor.cpp

if ENABLE_WALLET
CRYPTOTARGET_QT_CPP += \
  addressbookpage.cpp \
  addresstablemodel.cpp \
  askpassphrasedialog.cpp \
  coincontroldialog.cpp \
  coincontroltreewidget.cpp \
  editaddressdialog.cpp \
  openuridialog.cpp \
  overviewpage.cpp \
  paymentrequestplus.cpp \
  paymentserver.cpp \
  receivecoinsdialog.cpp \
  receiverequestdialog.cpp \
  recentrequeststablemodel.cpp \
  sendcoinsdialog.cpp \
  sendcoinsentry.cpp \
  signverifymessagedialog.cpp \
  transactiondesc.cpp \
  transactiondescdialog.cpp \
  transactionfilterproxy.cpp \
  transactionrecord.cpp \
  transactiontablemodel.cpp \
  transactionview.cpp \
  walletframe.cpp \
  walletmodel.cpp \
  walletmodeltransaction.cpp \
  walletview.cpp
endif

RES_IMAGES = \
  res/images/about.png \
  res/images/splash.png \
  res/images/splash_testnet.png

RES_MOVIES = $(wildcard res/movies/spinner-*.png)

CRYPTOTARGET_RC = res/cryptotarget-qt-res.rc

libcryptotargetqt_a_CPPFLAGS = $(AM_CPPFLAGS) $(QT_INCLUDES) \
  -I$(top_srcdir)/src/qt/forms $(QT_DBUS_INCLUDES)
libcryptotargetqt_a_SOURCES = $(CRYPTOTARGET_QT_CPP) $(CRYPTOTARGET_QT_H) $(QT_FORMS_UI) \
  $(QT_QRC) $(QT_TS) $(PROTOBUF_PROTO) $(RES_ICONS) $(RES_IMAGES) $(RES_MOVIES)

nodist_libcryptotargetqt_a_SOURCES = $(QT_MOC_CPP) $(QT_MOC) $(PROTOBUF_CC) \
  $(PROTOBUF_H) $(QT_QRC_CPP)

BUILT_SOURCES = $(nodist_libcryptotargetqt_a_SOURCES)

#Generating these with a half-written protobuf header leads to wacky results.
#This makes sure it's done.
$(QT_MOC): $(PROTOBUF_H)
$(QT_MOC_CPP): $(PROTOBUF_H)

# cryptotarget-qt binary #
cryptotarget_qt_CPPFLAGS = $(AM_CPPFLAGS) $(QT_INCLUDES) \
  -I$(top_srcdir)/src/qt/forms
cryptotarget_qt_SOURCES = cryptotarget.cpp
if TARGET_DARWIN
  cryptotarget_qt_SOURCES += $(CRYPTOTARGET_MM)
endif
if TARGET_WINDOWS
  cryptotarget_qt_SOURCES += $(CRYPTOTARGET_RC)
endif
cryptotarget_qt_LDADD = libcryptotargetqt.a $(LIBCRYPTOTARGET_SERVER)
if ENABLE_WALLET
cryptotarget_qt_LDADD += $(LIBCRYPTOTARGET_WALLET)
endif
cryptotarget_qt_LDADD += $(LIBCRYPTOTARGET_CLI) $(LIBCRYPTOTARGET_COMMON) $(LIBLEVELDB) $(LIBMEMENV) \
  $(BOOST_LIBS) $(QT_LIBS) $(QT_DBUS_LIBS) $(QR_LIBS) $(PROTOBUF_LIBS) $(BDB_LIBS)
cryptotarget_qt_LDFLAGS = $(QT_LDFLAGS)

# forms/foo.h -> forms/ui_foo.h
QT_FORMS_H=$(join $(dir $(QT_FORMS_UI)),$(addprefix ui_, $(notdir $(QT_FORMS_UI:.ui=.h))))

#locale/foo.ts -> locale/foo.qm
QT_QM=$(QT_TS:.ts=.qm)

.PHONY: FORCE
.SECONDARY: $(QT_QM)

cryptotargetstrings.cpp: FORCE
	$(MAKE) -C $(top_srcdir)/src qt/cryptotargetstrings.cpp

translate: cryptotargetstrings.cpp $(QT_FORMS_UI) $(QT_FORMS_UI) $(CRYPTOTARGET_QT_CPP) $(CRYPTOTARGET_QT_H) $(CRYPTOTARGET_MM)
	@test -n $(LUPDATE) || echo "lupdate is required for updating translations"
	@QT_SELECT=$(QT_SELECT) $(LUPDATE) $^ -locations relative -no-obsolete -ts locale/cryptotarget_en.ts

$(QT_QRC_CPP): $(QT_QRC) $(QT_QM) $(QT_FORMS_H) $(RES_ICONS) $(RES_IMAGES) $(RES_MOVIES) $(PROTOBUF_H)
	@cd $(abs_srcdir); test -f $(RCC) && QT_SELECT=$(QT_SELECT) $(RCC) -name cryptotarget -o $(abs_builddir)/$@ $< || \
	  echo error: could not build $@
	$(SED) -e '/^\*\*.*Created:/d' $@ > $@.n && mv $@{.n,}
	$(SED) -e '/^\*\*.*by:/d' $@  > $@.n && mv $@{.n,}

CLEANFILES = $(BUILT_SOURCES) $(QT_QM) $(QT_FORMS_H) *.gcda *.gcno
