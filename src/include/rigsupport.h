// ----------------------------------------------------------------------------
// Copyright (C) 2014
//              David Freese, W1HKJ
//
// This file is part of fldigi
//
// fldigi is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 3 of the License, or
// (at your option) any later version.
//
// fldigi is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
// ----------------------------------------------------------------------------

#ifndef RIG_SUPPORT_H
#define RIG_SUPPORT_H

#include <FL/Fl_Double_Window.H>

#include <string>

#include "serial.h"

#if USE_HAMLIB
	#include "hamlib.h"
#endif

#include "xmlrpcpp/XmlRpc.h"
#include "xmlrpcpp/XmlRpcValue.h"

#define DEFAULT_RIGXML_FILENAME "rig-not-assigned.xml"

extern std::string windowTitle;
extern Cserial rigio;

extern void initOptionMenus();
extern void clearList();
extern void updateSelect();
extern size_t addtoList(long val);
extern void buildlist();
extern void qso_movFreq(Fl_Widget* w, void*);
extern int	cb_qso_opMODE();
extern int  cb_qso_opBW();
extern void qso_setMode();
extern void setTitle();

extern void qso_addFreq();
extern void qso_delFreq();
extern void qso_selectFreq();
extern void qso_selectFreq(long int rfcarrier, int carrier);
extern void qso_setFreq();
extern void qso_setFreq(long int f);
extern void qso_clearList();
extern void saveFreqList();

extern bool readRigXML();
extern bool init_Xml_RigDialog();
extern bool init_NoRig_RigDialog();

#if USE_HAMLIB
extern bool init_Hamlib_RigDialog();
extern void selMode(rmode_t m);
extern std::string modeString(rmode_t m);
#endif

// xmlrpc_rig specific

extern bool connected_to_flrig;
extern void xmlrpc_rig_set_qsy(long long rfc);

using namespace XmlRpc;
using namespace std;

extern bool bws_posted;
extern bool FLRIG_bw_posted;
extern bool FLRIG_mode_posted;
extern bool modes_posted;
extern bool FLRIG_freq_posted;

extern long int FLRIG_xcvr_freq;
extern string   xcvr_name;
extern string   posted_mode;
extern string   posted_bw1;
extern string   posted_bw2;

extern XmlRpcValue modes_result;
extern XmlRpcValue bws_result;
extern XmlRpcValue FLRIG_bw_result;

extern void FLRIG_start_flrig_thread();
extern void stop_flrig_thread();
extern void reconnect_to_flrig();
extern void set_flrig_ptt(int on);
extern void set_flrig_freq(long int fr);
extern void set_flrig_mode(const char *md);
extern void set_flrig_bw(int bw1, int bw2 = 0);
extern void set_flrig_notch();
extern void FLRIG_set_flrig_ab(int n);


//------------------------------------------------------------------------------
// flrig xmlrpc client support
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------

#endif
