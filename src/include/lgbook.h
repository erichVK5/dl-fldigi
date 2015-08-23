// generated by Fast Light User Interface Designer (fluid) version 1.0303

#ifndef lgbook_h
#define lgbook_h
#include <FL/Fl.H>
#include "flinput2.h"
// Avoid 'nitems' macro collision between FreeBSD's sys/params.h and fltk's
// FL/Fl_Check_Browser.H (http://www.fltk.org/str.php?L2984)
#undef nitems
#include <FL/Fl_Check_Browser.H>
#define FLTK_nitems nitems
#undef nitems
// ^^^ Avoid 'nitems' macro collision
 extern Fl_Check_Browser *chkExportBrowser;
#include <FL/Fl_Double_Window.H>
extern Fl_Double_Window *wExport;
#include <FL/Fl_Group.H>
#include <FL/Fl_Check_Browser.H>
extern Fl_Check_Browser *chkExportBrowser;
#include <FL/Fl_Button.H>
extern Fl_Button *btnClearAll;
extern Fl_Button *btnCheckAll;
#include "calendar.h"
extern Fl_DateInput *inp_export_start_date;
extern Fl_DateInput *inp_export_stop_date;
#include <FL/Fl_Check_Button.H>
extern Fl_Check_Button *btn_export_by_date;
#include <FL/Fl_Return_Button.H>
extern Fl_Return_Button *btnOK;
extern Fl_Button *btnCancel;
extern Fl_Button *btnClearAllFields;
extern Fl_Button *btnCheckAllFields;
extern Fl_Check_Button *btnSelectCall;
extern Fl_Check_Button *btnSelectName;
extern Fl_Check_Button *btnSelectFreq;
extern Fl_Check_Button *btnSelectBand;
extern Fl_Check_Button *btnSelectMode;
extern Fl_Check_Button *btnSelectQSOdateOn;
extern Fl_Check_Button *btnSelectQSOdateOff;
extern Fl_Check_Button *btnSelectTimeON;
extern Fl_Check_Button *btnSelectTimeOFF;
extern Fl_Check_Button *btnSelectTX_pwr;
extern Fl_Check_Button *btnSelectRSTsent;
extern Fl_Check_Button *btnSelectRSTrcvd;
extern Fl_Check_Button *btnSelectQth;
extern Fl_Check_Button *btnSelectLOC;
extern Fl_Check_Button *btnSelectState;
extern Fl_Check_Button *btnSelectQSL_VIA;
extern Fl_Check_Button *btnSelectProvince;
extern Fl_Check_Button *btnSelectCountry;
extern Fl_Check_Button *btnSelectNotes;
extern Fl_Check_Button *btnSelectQSLrcvd;
extern Fl_Check_Button *btnSelectQSLsent;
extern Fl_Check_Button *btnSelectSerialIN;
extern Fl_Check_Button *btnSelectSerialOUT;
extern Fl_Check_Button *btnSelectXchgIn;
extern Fl_Check_Button *btnSelectMyXchg;
extern Fl_Check_Button *btnSelectCNTY;
extern Fl_Check_Button *btnSelectCONT;
extern Fl_Check_Button *btnSelectCQZ;
extern Fl_Check_Button *btnSelectDXCC;
extern Fl_Check_Button *btnSelectIOTA;
extern Fl_Check_Button *btnSelectITUZ;
extern Fl_Button *btnSetFieldDefaults;
extern Fl_Double_Window *dlgLogbook;
extern Fl_DateInput *inpDate_log;
extern Fl_Input2 *inpTimeOn_log;
extern Fl_Input2 *inpCall_log;
extern Fl_Input2 *inpName_log;
extern Fl_Input2 *inpRstR_log;
extern Fl_DateInput *inpQSLrcvddate_log;
extern Fl_DateInput *inpDateOff_log;
extern Fl_Input2 *inpTimeOff_log;
extern Fl_Input2 *inpFreq_log;
extern Fl_Input2 *inpMode_log;
extern Fl_Input2 *inpTX_pwr_log;
extern Fl_Input2 *inpRstS_log;
extern Fl_DateInput *inpQSLsentdate_log;
extern Fl_Input2 *inpQth_log;
extern Fl_Input2 *inpState_log;
extern Fl_Input2 *inpVE_Prov_log;
extern Fl_Input2 *inpCountry_log;
extern Fl_Input2 *inpLoc_log;
extern Fl_Input2 *inpNotes_log;
extern Fl_Input2 *inpCNTY_log;
extern Fl_Input2 *inpIOTA_log;
extern Fl_Input2 *inpCQZ_log;
extern Fl_Input2 *inpITUZ_log;
extern Fl_Input2 *inpCONT_log;
extern Fl_Input2 *inpDXCC_log;
extern Fl_Input2 *inpQSL_VIA_log;
extern Fl_Input2 *inpSerNoOut_log;
extern Fl_Input2 *inpMyXchg_log;
extern Fl_Input2 *inpSerNoIn_log;
extern Fl_Input2 *inpXchgIn_log;
extern Fl_Input2 *inpSearchString;
extern Fl_Input2 *txtNbrRecs_log;
extern void cb_btnNewSave(Fl_Button*, void*);
extern Fl_Button *bNewSave;
extern void cb_btnUpdateCancel(Fl_Button*, void*);
extern Fl_Button *bUpdateCancel;
extern void cb_btnDelete(Fl_Button*, void*);
extern Fl_Button *bDelete;
extern void cb_btnDialFreq(Fl_Button*, void*);
extern Fl_Button *bDialFreq;
extern void cb_search(Fl_Button*, void*);
extern Fl_Button *bSearchPrev;
extern Fl_Button *bSearchNext;
#include "table.h"
extern Table *wBrowser;
extern Fl_Double_Window *wCabrillo;
extern Fl_Check_Browser *chkCabBrowser;
extern Fl_Button *btnCabClearAll;
extern Fl_Button *btnCabCheckAll;
extern Fl_Return_Button *btnCabOK;
extern Fl_Button *btnCabCancel;
#include "combo.h"
extern void setContestType();
extern Fl_ComboBox *cboContest;
extern Fl_Check_Button *btnCabCall;
extern Fl_Check_Button *btnCabFreq;
extern Fl_Check_Button *btnCabMode;
extern Fl_Check_Button *btnCabQSOdate;
extern Fl_Check_Button *btnCabTimeOFF;
extern Fl_Check_Button *btnCabRSTsent;
extern Fl_Check_Button *btnCabRSTrcvd;
extern Fl_Check_Button *btnCabSerialIN;
extern Fl_Check_Button *btnCabSerialOUT;
extern Fl_Check_Button *btnCabXchgIn;
extern Fl_Check_Button *btnCabMyXchg;
extern Fl_Button *btnCabClearAllFields;
extern Fl_Button *btnCabCheckAllFields;
void create_logbook_dialogs();
#endif
