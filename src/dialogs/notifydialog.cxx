// generated by Fast Light User Interface Designer (fluid) version 1.0300

#include "gettext.h"
#include "notifydialog.h"
#include <config.h>
#include "notify.h"

Fl_Group *grpNotifyEvent=(Fl_Group *)0;

Fl_Choice *mnuNotifyEvent=(Fl_Choice *)0;

Fl_Light_Button *btnNotifyEnabled=(Fl_Light_Button *)0;

Fl_Input2 *inpNotifyRE=(Fl_Input2 *)0;

Fl_Group *grpNotifyFilter=(Fl_Group *)0;

Fl_Round_Button *chkNotifyFilterCall=(Fl_Round_Button *)0;

static void cb_chkNotifyFilterCall(Fl_Round_Button* o, void*) {
  if (!o->value()) {
    o->value(1);
    return;
}
inpNotifyFilterCall->show();
btnNotifyFilterDXCC->hide();
chkNotifyFilterDXCC->value(0);
}

Fl_Input2 *inpNotifyFilterCall=(Fl_Input2 *)0;

Fl_Round_Button *chkNotifyFilterDXCC=(Fl_Round_Button *)0;

static void cb_chkNotifyFilterDXCC(Fl_Round_Button* o, void*) {
  if (!o->value()) {
    o->value(1);
    return;
}
inpNotifyFilterCall->hide();
btnNotifyFilterDXCC->show();
chkNotifyFilterCall->value(0);
}

Fl_Button *btnNotifyFilterDXCC=(Fl_Button *)0;

Fl_Check_Button *chkNotifyFilterNWB=(Fl_Check_Button *)0;

Fl_Check_Button *chkNotifyFilterLOTW=(Fl_Check_Button *)0;

Fl_Check_Button *chkNotifyFilterEQSL=(Fl_Check_Button *)0;

Fl_Group *grpNotifyDup=(Fl_Group *)0;

Fl_Check_Button *chkNotifyDupIgnore=(Fl_Check_Button *)0;

Fl_Choice *mnuNotifyDupWhich=(Fl_Choice *)0;

Fl_Spinner2 *cntNotifyDupTime=(Fl_Spinner2 *)0;

Fl_Check_Button *chkNotifyDupBand=(Fl_Check_Button *)0;

Fl_Check_Button *chkNotifyDupMode=(Fl_Check_Button *)0;

Fl_Group *grpNotifyAction=(Fl_Group *)0;

Fl_Spinner2 *cntNotifyActionLimit=(Fl_Spinner2 *)0;

Fl_Input2 *inpNotifyActionDialog=(Fl_Input2 *)0;

Fl_Button *btnNotifyActionDialogDefault=(Fl_Button *)0;

Fl_Spinner2 *cntNotifyActionDialogTimeout=(Fl_Spinner2 *)0;

Fl_Input2 *inpNotifyActionRXMarker=(Fl_Input2 *)0;

Fl_Button *btnNotifyActionMarkerDefault=(Fl_Button *)0;

Fl_Input2 *inpNotifyActionMacro=(Fl_Input2 *)0;

Fl_Button *btnNotifyActionMacro=(Fl_Button *)0;

Fl_Input2 *inpNotifyActionProgram=(Fl_Input2 *)0;

Fl_Button *btnNotifyActionProgram=(Fl_Button *)0;

Fl_Button *btnNotifyAdd=(Fl_Button *)0;

Fl_Button *btnNotifyRemove=(Fl_Button *)0;

Fl_Button *btnNotifyUpdate=(Fl_Button *)0;

Fl_Button *btnNotifyTest=(Fl_Button *)0;

Fl_Button *btnNotifyClose=(Fl_Button *)0;

static void cb_btnNotifyClose(Fl_Button* o, void*) {
  o->window()->hide();
}

Table *tblNotifyList=(Table *)0;

Fl_Double_Window* make_notify_window() {
  Fl_Double_Window* w;
  { Fl_Double_Window* o = new Fl_Double_Window(500, 550, _("Notifications"));
    w = o;
    { grpNotifyEvent = new Fl_Group(2, 2, 219, 126, _("Event"));
      grpNotifyEvent->box(FL_ENGRAVED_FRAME);
      grpNotifyEvent->align(Fl_Align(FL_ALIGN_TOP_LEFT|FL_ALIGN_INSIDE));
      { mnuNotifyEvent = new Fl_Choice(10, 29, 205, 22);
        mnuNotifyEvent->down_box(FL_BORDER_BOX);
      } // Fl_Choice* mnuNotifyEvent
      { btnNotifyEnabled = new Fl_Light_Button(131, 94, 80, 23, _("Enabled"));
      } // Fl_Light_Button* btnNotifyEnabled
      { Fl_Input2* o = inpNotifyRE = new Fl_Input2(36, 61, 175, 23, _("RE:"));
        inpNotifyRE->box(FL_DOWN_BOX);
        inpNotifyRE->color(FL_BACKGROUND2_COLOR);
        inpNotifyRE->selection_color(FL_SELECTION_COLOR);
        inpNotifyRE->labeltype(FL_NORMAL_LABEL);
        inpNotifyRE->labelfont(0);
        inpNotifyRE->labelsize(14);
        inpNotifyRE->labelcolor(FL_FOREGROUND_COLOR);
        inpNotifyRE->align(Fl_Align(FL_ALIGN_LEFT));
        inpNotifyRE->when(FL_WHEN_RELEASE);
        o->labelsize(FL_NORMAL_SIZE);
      } // Fl_Input2* inpNotifyRE
      grpNotifyEvent->end();
    } // Fl_Group* grpNotifyEvent
    { grpNotifyFilter = new Fl_Group(2, 130, 219, 176, _("Filter"));
      grpNotifyFilter->box(FL_ENGRAVED_FRAME);
      grpNotifyFilter->align(Fl_Align(FL_ALIGN_TOP_LEFT|FL_ALIGN_INSIDE));
      { chkNotifyFilterCall = new Fl_Round_Button(12, 157, 80, 20, _("Callsign"));
        chkNotifyFilterCall->down_box(FL_ROUND_DOWN_BOX);
        chkNotifyFilterCall->callback((Fl_Callback*)cb_chkNotifyFilterCall);
      } // Fl_Round_Button* chkNotifyFilterCall
      { inpNotifyFilterCall = new Fl_Input2(131, 157, 80, 20);
        inpNotifyFilterCall->box(FL_DOWN_BOX);
        inpNotifyFilterCall->color(FL_BACKGROUND2_COLOR);
        inpNotifyFilterCall->selection_color(FL_SELECTION_COLOR);
        inpNotifyFilterCall->labeltype(FL_NORMAL_LABEL);
        inpNotifyFilterCall->labelfont(0);
        inpNotifyFilterCall->labelsize(14);
        inpNotifyFilterCall->labelcolor(FL_FOREGROUND_COLOR);
        inpNotifyFilterCall->align(Fl_Align(FL_ALIGN_CENTER));
        inpNotifyFilterCall->when(FL_WHEN_RELEASE);
      } // Fl_Input2* inpNotifyFilterCall
      { chkNotifyFilterDXCC = new Fl_Round_Button(12, 186, 110, 20, _("DXCC entity"));
        chkNotifyFilterDXCC->down_box(FL_ROUND_DOWN_BOX);
        chkNotifyFilterDXCC->callback((Fl_Callback*)cb_chkNotifyFilterDXCC);
      } // Fl_Round_Button* chkNotifyFilterDXCC
      { btnNotifyFilterDXCC = new Fl_Button(183, 183, 28, 23);
        btnNotifyFilterDXCC->tooltip(_("Show DXCC entities"));
      } // Fl_Button* btnNotifyFilterDXCC
      { chkNotifyFilterNWB = new Fl_Check_Button(12, 216, 155, 20, _("Not worked before"));
        chkNotifyFilterNWB->down_box(FL_DOWN_BOX);
      } // Fl_Check_Button* chkNotifyFilterNWB
      { chkNotifyFilterLOTW = new Fl_Check_Button(12, 246, 100, 20, _("LotW user"));
        chkNotifyFilterLOTW->down_box(FL_DOWN_BOX);
      } // Fl_Check_Button* chkNotifyFilterLOTW
      { chkNotifyFilterEQSL = new Fl_Check_Button(12, 276, 100, 20, _("eQSL user"));
        chkNotifyFilterEQSL->down_box(FL_DOWN_BOX);
      } // Fl_Check_Button* chkNotifyFilterEQSL
      grpNotifyFilter->end();
    } // Fl_Group* grpNotifyFilter
    { grpNotifyDup = new Fl_Group(2, 308, 219, 149, _("Duplicates"));
      grpNotifyDup->box(FL_ENGRAVED_FRAME);
      grpNotifyDup->align(Fl_Align(FL_ALIGN_TOP_LEFT|FL_ALIGN_INSIDE));
      { chkNotifyDupIgnore = new Fl_Check_Button(12, 337, 145, 20, _("Ignore duplicates"));
        chkNotifyDupIgnore->down_box(FL_DOWN_BOX);
      } // Fl_Check_Button* chkNotifyDupIgnore
      { mnuNotifyDupWhich = new Fl_Choice(33, 367, 120, 20, _("in:"));
        mnuNotifyDupWhich->down_box(FL_BORDER_BOX);
      } // Fl_Choice* mnuNotifyDupWhich
      { Fl_Spinner2* o = cntNotifyDupTime = new Fl_Spinner2(93, 397, 60, 20, _("Time (s):"));
        cntNotifyDupTime->box(FL_NO_BOX);
        cntNotifyDupTime->color(FL_BACKGROUND_COLOR);
        cntNotifyDupTime->selection_color(FL_BACKGROUND_COLOR);
        cntNotifyDupTime->labeltype(FL_NORMAL_LABEL);
        cntNotifyDupTime->labelfont(0);
        cntNotifyDupTime->labelsize(14);
        cntNotifyDupTime->labelcolor(FL_FOREGROUND_COLOR);
        cntNotifyDupTime->minimum(0);
        cntNotifyDupTime->maximum(97200);
        cntNotifyDupTime->value(600);
        cntNotifyDupTime->align(Fl_Align(FL_ALIGN_LEFT));
        cntNotifyDupTime->when(FL_WHEN_RELEASE);
        o->labelsize(FL_NORMAL_SIZE);
      } // Fl_Spinner2* cntNotifyDupTime
      { chkNotifyDupBand = new Fl_Check_Button(12, 427, 65, 20, _("Band"));
        chkNotifyDupBand->down_box(FL_DOWN_BOX);
      } // Fl_Check_Button* chkNotifyDupBand
      { chkNotifyDupMode = new Fl_Check_Button(94, 427, 60, 20, _("Mode"));
        chkNotifyDupMode->down_box(FL_DOWN_BOX);
      } // Fl_Check_Button* chkNotifyDupMode
      grpNotifyDup->end();
    } // Fl_Group* grpNotifyDup
    { grpNotifyAction = new Fl_Group(222, 2, 276, 394, _("Action"));
      grpNotifyAction->box(FL_ENGRAVED_FRAME);
      grpNotifyAction->align(Fl_Align(FL_ALIGN_TOP_LEFT|FL_ALIGN_INSIDE));
      { Fl_Spinner2* o = cntNotifyActionLimit = new Fl_Spinner2(232, 40, 52, 20, _("Trigger limit (s):"));
        cntNotifyActionLimit->tooltip(_("Minimum time between events"));
        cntNotifyActionLimit->box(FL_NO_BOX);
        cntNotifyActionLimit->color(FL_BACKGROUND_COLOR);
        cntNotifyActionLimit->selection_color(FL_BACKGROUND_COLOR);
        cntNotifyActionLimit->labeltype(FL_NORMAL_LABEL);
        cntNotifyActionLimit->labelfont(0);
        cntNotifyActionLimit->labelsize(14);
        cntNotifyActionLimit->labelcolor(FL_FOREGROUND_COLOR);
        cntNotifyActionLimit->minimum(0);
        cntNotifyActionLimit->maximum(3600);
        cntNotifyActionLimit->align(Fl_Align(FL_ALIGN_TOP_LEFT));
        cntNotifyActionLimit->when(FL_WHEN_RELEASE);
        o->labelsize(FL_NORMAL_SIZE);
      } // Fl_Spinner2* cntNotifyActionLimit
      { Fl_Input2* o = inpNotifyActionDialog = new Fl_Input2(232, 82, 218, 60, _("Show alert window:"));
        inpNotifyActionDialog->type(4);
        inpNotifyActionDialog->box(FL_DOWN_BOX);
        inpNotifyActionDialog->color(FL_BACKGROUND2_COLOR);
        inpNotifyActionDialog->selection_color(FL_SELECTION_COLOR);
        inpNotifyActionDialog->labeltype(FL_NORMAL_LABEL);
        inpNotifyActionDialog->labelfont(0);
        inpNotifyActionDialog->labelsize(14);
        inpNotifyActionDialog->labelcolor(FL_FOREGROUND_COLOR);
        inpNotifyActionDialog->align(Fl_Align(FL_ALIGN_TOP_LEFT));
        inpNotifyActionDialog->when(FL_WHEN_RELEASE);
        o->labelsize(FL_NORMAL_SIZE);
      } // Fl_Input2* inpNotifyActionDialog
      { btnNotifyActionDialogDefault = new Fl_Button(460, 100, 28, 23);
        btnNotifyActionDialogDefault->tooltip(_("Insert default text"));
      } // Fl_Button* btnNotifyActionDialogDefault
      { Fl_Spinner2* o = cntNotifyActionDialogTimeout = new Fl_Spinner2(232, 164, 52, 20, _("Hide window after (s):"));
        cntNotifyActionDialogTimeout->box(FL_NO_BOX);
        cntNotifyActionDialogTimeout->color(FL_BACKGROUND_COLOR);
        cntNotifyActionDialogTimeout->selection_color(FL_BACKGROUND_COLOR);
        cntNotifyActionDialogTimeout->labeltype(FL_NORMAL_LABEL);
        cntNotifyActionDialogTimeout->labelfont(0);
        cntNotifyActionDialogTimeout->labelsize(14);
        cntNotifyActionDialogTimeout->labelcolor(FL_FOREGROUND_COLOR);
        cntNotifyActionDialogTimeout->minimum(0);
        cntNotifyActionDialogTimeout->maximum(3600);
        cntNotifyActionDialogTimeout->value(5);
        cntNotifyActionDialogTimeout->align(Fl_Align(FL_ALIGN_TOP_LEFT));
        cntNotifyActionDialogTimeout->when(FL_WHEN_RELEASE);
        o->labelsize(FL_NORMAL_SIZE);
      } // Fl_Spinner2* cntNotifyActionDialogTimeout
      { Fl_Input2* o = inpNotifyActionRXMarker = new Fl_Input2(232, 205, 218, 60, _("Append to RX text:"));
        inpNotifyActionRXMarker->type(4);
        inpNotifyActionRXMarker->box(FL_DOWN_BOX);
        inpNotifyActionRXMarker->color(FL_BACKGROUND2_COLOR);
        inpNotifyActionRXMarker->selection_color(FL_SELECTION_COLOR);
        inpNotifyActionRXMarker->labeltype(FL_NORMAL_LABEL);
        inpNotifyActionRXMarker->labelfont(0);
        inpNotifyActionRXMarker->labelsize(14);
        inpNotifyActionRXMarker->labelcolor(FL_FOREGROUND_COLOR);
        inpNotifyActionRXMarker->align(Fl_Align(FL_ALIGN_TOP_LEFT));
        inpNotifyActionRXMarker->when(FL_WHEN_RELEASE);
        o->labelsize(FL_NORMAL_SIZE);
      } // Fl_Input2* inpNotifyActionRXMarker
      { btnNotifyActionMarkerDefault = new Fl_Button(460, 223, 28, 23);
        btnNotifyActionMarkerDefault->tooltip(_("Insert default text"));
      } // Fl_Button* btnNotifyActionMarkerDefault
      { Fl_Input2* o = inpNotifyActionMacro = new Fl_Input2(232, 287, 218, 60, _("Append to TX text:"));
        inpNotifyActionMacro->type(4);
        inpNotifyActionMacro->box(FL_DOWN_BOX);
        inpNotifyActionMacro->color(FL_BACKGROUND2_COLOR);
        inpNotifyActionMacro->selection_color(FL_SELECTION_COLOR);
        inpNotifyActionMacro->labeltype(FL_NORMAL_LABEL);
        inpNotifyActionMacro->labelfont(0);
        inpNotifyActionMacro->labelsize(14);
        inpNotifyActionMacro->labelcolor(FL_FOREGROUND_COLOR);
        inpNotifyActionMacro->align(Fl_Align(FL_ALIGN_TOP_LEFT));
        inpNotifyActionMacro->when(FL_WHEN_RELEASE);
        o->labelsize(FL_NORMAL_SIZE);
      } // Fl_Input2* inpNotifyActionMacro
      { btnNotifyActionMacro = new Fl_Button(460, 305, 28, 23);
        btnNotifyActionMacro->tooltip(_("Show macro editor"));
      } // Fl_Button* btnNotifyActionMacro
      { Fl_Input2* o = inpNotifyActionProgram = new Fl_Input2(232, 368, 218, 23, _("Run program:"));
        inpNotifyActionProgram->box(FL_DOWN_BOX);
        inpNotifyActionProgram->color(FL_BACKGROUND2_COLOR);
        inpNotifyActionProgram->selection_color(FL_SELECTION_COLOR);
        inpNotifyActionProgram->labeltype(FL_NORMAL_LABEL);
        inpNotifyActionProgram->labelfont(0);
        inpNotifyActionProgram->labelsize(14);
        inpNotifyActionProgram->labelcolor(FL_FOREGROUND_COLOR);
        inpNotifyActionProgram->align(Fl_Align(FL_ALIGN_TOP_LEFT));
        inpNotifyActionProgram->when(FL_WHEN_RELEASE);
        o->labelsize(FL_NORMAL_SIZE);
      } // Fl_Input2* inpNotifyActionProgram
      { btnNotifyActionProgram = new Fl_Button(460, 368, 28, 23);
      } // Fl_Button* btnNotifyActionProgram
      grpNotifyAction->end();
    } // Fl_Group* grpNotifyAction
    { btnNotifyAdd = new Fl_Button(223, 402, 90, 23);
    } // Fl_Button* btnNotifyAdd
    { btnNotifyRemove = new Fl_Button(316, 402, 90, 23);
    } // Fl_Button* btnNotifyRemove
    { btnNotifyUpdate = new Fl_Button(223, 431, 90, 23);
    } // Fl_Button* btnNotifyUpdate
    { btnNotifyTest = new Fl_Button(316, 431, 90, 23);
    } // Fl_Button* btnNotifyTest
    { btnNotifyClose = new Fl_Button(408, 431, 90, 23);
      btnNotifyClose->callback((Fl_Callback*)cb_btnNotifyClose);
    } // Fl_Button* btnNotifyClose
    { tblNotifyList = new Table(2, 460, 496, 88);
      tblNotifyList->box(FL_UP_FRAME);
      tblNotifyList->color(FL_BACKGROUND_COLOR);
      tblNotifyList->selection_color(FL_SELECTION_COLOR);
      tblNotifyList->labeltype(FL_NORMAL_LABEL);
      tblNotifyList->labelfont(0);
      tblNotifyList->labelsize(14);
      tblNotifyList->labelcolor(FL_FOREGROUND_COLOR);
      tblNotifyList->align(Fl_Align(FL_ALIGN_CENTER));
      tblNotifyList->when(FL_WHEN_RELEASE);
      Fl_Group::current()->resizable(tblNotifyList);
    } // Table* tblNotifyList
    o->size_range(500, 550);
    o->end();
  } // Fl_Double_Window* o
  return w;
}

Table *tblNotifyFilterDXCC=(Table *)0;

Fl_Input2 *inpNotifyDXCCSearchCountry=(Fl_Input2 *)0;

Fl_Input2 *inpNotifyDXCCSearchCallsign=(Fl_Input2 *)0;

Fl_Button *btnNotifyDXCCSelect=(Fl_Button *)0;

Fl_Button *btnNotifyDXCCDeselect=(Fl_Button *)0;

Fl_Button *btnNotifyDXCCClose=(Fl_Button *)0;

static void cb_btnNotifyDXCCClose(Fl_Button* o, void*) {
  o->window()->hide();
}

Fl_Double_Window* make_dxcc_window() {
  Fl_Double_Window* w;
  { Fl_Double_Window* o = new Fl_Double_Window(435, 450, _("DXCC entities"));
    w = o;
    { tblNotifyFilterDXCC = new Table(2, 2, 432, 370);
      tblNotifyFilterDXCC->box(FL_UP_FRAME);
      tblNotifyFilterDXCC->color(FL_BACKGROUND2_COLOR);
      tblNotifyFilterDXCC->selection_color(FL_SELECTION_COLOR);
      tblNotifyFilterDXCC->labeltype(FL_NORMAL_LABEL);
      tblNotifyFilterDXCC->labelfont(0);
      tblNotifyFilterDXCC->labelsize(14);
      tblNotifyFilterDXCC->labelcolor(FL_FOREGROUND_COLOR);
      tblNotifyFilterDXCC->align(Fl_Align(FL_ALIGN_CENTER));
      tblNotifyFilterDXCC->when(FL_WHEN_RELEASE);
      Fl_Group::current()->resizable(tblNotifyFilterDXCC);
    } // Table* tblNotifyFilterDXCC
    { Fl_Input2* o = inpNotifyDXCCSearchCountry = new Fl_Input2(104, 382, 120, 23, _("Find country:"));
      inpNotifyDXCCSearchCountry->tooltip(_("Press return to continue the search"));
      inpNotifyDXCCSearchCountry->box(FL_DOWN_BOX);
      inpNotifyDXCCSearchCountry->color(FL_BACKGROUND2_COLOR);
      inpNotifyDXCCSearchCountry->selection_color(FL_SELECTION_COLOR);
      inpNotifyDXCCSearchCountry->labeltype(FL_NORMAL_LABEL);
      inpNotifyDXCCSearchCountry->labelfont(0);
      inpNotifyDXCCSearchCountry->labelsize(14);
      inpNotifyDXCCSearchCountry->labelcolor(FL_FOREGROUND_COLOR);
      inpNotifyDXCCSearchCountry->align(Fl_Align(FL_ALIGN_LEFT));
      inpNotifyDXCCSearchCountry->when(FL_WHEN_RELEASE);
      o->labelsize(FL_NORMAL_SIZE);
    } // Fl_Input2* inpNotifyDXCCSearchCountry
    { Fl_Input2* o = inpNotifyDXCCSearchCallsign = new Fl_Input2(104, 415, 120, 23, _("Find prefix:"));
      inpNotifyDXCCSearchCallsign->box(FL_DOWN_BOX);
      inpNotifyDXCCSearchCallsign->color(FL_BACKGROUND2_COLOR);
      inpNotifyDXCCSearchCallsign->selection_color(FL_SELECTION_COLOR);
      inpNotifyDXCCSearchCallsign->labeltype(FL_NORMAL_LABEL);
      inpNotifyDXCCSearchCallsign->labelfont(0);
      inpNotifyDXCCSearchCallsign->labelsize(14);
      inpNotifyDXCCSearchCallsign->labelcolor(FL_FOREGROUND_COLOR);
      inpNotifyDXCCSearchCallsign->align(Fl_Align(FL_ALIGN_LEFT));
      inpNotifyDXCCSearchCallsign->when(FL_WHEN_RELEASE);
      o->labelsize(FL_NORMAL_SIZE);
    } // Fl_Input2* inpNotifyDXCCSearchCallsign
    { btnNotifyDXCCSelect = new Fl_Button(234, 382, 90, 23);
    } // Fl_Button* btnNotifyDXCCSelect
    { btnNotifyDXCCDeselect = new Fl_Button(234, 415, 90, 23);
    } // Fl_Button* btnNotifyDXCCDeselect
    { btnNotifyDXCCClose = new Fl_Button(334, 415, 90, 23);
      btnNotifyDXCCClose->callback((Fl_Callback*)cb_btnNotifyDXCCClose);
    } // Fl_Button* btnNotifyDXCCClose
    o->size_range(300, 400);
    o->end();
  } // Fl_Double_Window* o
  return w;
}
