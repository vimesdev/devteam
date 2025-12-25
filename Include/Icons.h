#ifndef _ICONS_H
#define _ICONS_H
#include "GuiDefs.h"
#include <afxwin.h>
#include <tchar.h>

#pragma once


class AFX_EXT_CLASS IconData {
public:
	/// Creates icon data.
	///
	/// Rarely used directly. Instead, consider using one of the predefined icons
	/// like the [Icons] collection.
	///
	/// The [fontPackage] argument must be non-null when using a font family that
	/// is included in a package. This is used when selecting the font.
	IconData() :codePoint(0), fontFamily(""), fontPackage(L""), matchTextDirection(false) {
	}

	IconData(int _codePoint,
		LPCTSTR _fontFamily,
		bool _matchTextDirection = false,
		LPCTSTR _fontPackage = L""

	)
	{
		codePoint = _codePoint;
		fontFamily = _fontFamily;
		fontPackage = _fontPackage;
		matchTextDirection = _matchTextDirection;
	}

	/// The Unicode code point at which this icon is stored in the icon font.
	int codePoint;

	/// The font family from which the glyph for the [codePoint] will be selected.
	CString fontFamily;

	/// The name of the package from which the font family is included.
	///
	/// The name is used by the [Icon] CWidget when configuring the [TextStyle] so
	/// that the given [fontFamily] is obtained from the appropriate asset.
	///
	/// See also:
	///
	///  * [TextStyle], which describes how to use fonts from other packages.
	CString fontPackage;
	bool matchTextDirection;
	/// Whether this icon should be automatically mirrored in right-to-left
	/// environments.
	///
	/// The [Icon] CWidget respects this value by mirroring the icon when the
	/// [Directionality] is [TextDirection.rtl].
	virtual bool operator ==(const IconData other) {
		return codePoint == other.codePoint
			&& fontFamily == other.fontFamily
			&& fontPackage == other.fontPackage
			&& matchTextDirection == other.matchTextDirection;
	}
	IconData& operator =(const IconData& other) {
		codePoint = other.codePoint;
		fontFamily = other.fontFamily;
		fontPackage = other.fontPackage;
		matchTextDirection = other.matchTextDirection;
		return *this;
	}

	operator LPCTSTR() const
	{
		return this->str();
	}
	CString str() const {
		CString str;
		str.Format(_T("%c"), codePoint);
		return str;
	}

};



namespace icons {
	// Generated code: do not hand-edit.
	// See https://github.com/flutter/flutter/wiki/Updating-Material-Design-Fonts
	// BEGIN GENERATED

	/// <i class="material-icons md-36">360</i> &#x2014; material icon named "360".
	static IconData threesixty = IconData(0xe577, L"MaterialIcons");

	/// <i class="material-icons md-36">3d_rotation</i> &#x2014; material icon named "3d rotation".
	static IconData threed_rotation = IconData(0xe84d, L"MaterialIcons");

	/// <i class="material-icons md-36">4k</i> &#x2014; material icon named "4k".
	static IconData four_k = IconData(0xe072, L"MaterialIcons");

	/// <i class="material-icons md-36">ac_unit</i> &#x2014; material icon named "ac unit".
	static IconData ac_unit = IconData(0xeb3b, L"MaterialIcons");

	/// <i class="material-icons md-36">access_alarm</i> &#x2014; material icon named "access alarm".
	static IconData access_alarm = IconData(0xe190, L"MaterialIcons");

	/// <i class="material-icons md-36">access_alarms</i> &#x2014; material icon named "access alarms".
	static IconData access_alarms = IconData(0xe191, L"MaterialIcons");

	/// <i class="material-icons md-36">access_time</i> &#x2014; material icon named "access time".
	static IconData access_time = IconData(0xe192, L"MaterialIcons");

	/// <i class="material-icons md-36">accessibility</i> &#x2014; material icon named "accessibility".
	static IconData accessibility = IconData(0xe84e, L"MaterialIcons");

	/// <i class="material-icons md-36">accessibility_new</i> &#x2014; material icon named "accessibility new".
	static IconData accessibility_new = IconData(0xe92c, L"MaterialIcons");

	/// <i class="material-icons md-36">accessible</i> &#x2014; material icon named "accessible".
	static IconData accessible = IconData(0xe914, L"MaterialIcons");

	/// <i class="material-icons md-36">accessible_forward</i> &#x2014; material icon named "accessible forward".
	static IconData accessible_forward = IconData(0xe934, L"MaterialIcons");

	/// <i class="material-icons md-36">account_balance</i> &#x2014; material icon named "account balance".
	static IconData account_balance = IconData(0xe84f, L"MaterialIcons");

	/// <i class="material-icons md-36">account_balance_wallet</i> &#x2014; material icon named "account balance wallet".
	static IconData account_balance_wallet = IconData(0xe850, L"MaterialIcons");

	/// <i class="material-icons md-36">account_box</i> &#x2014; material icon named "account box".
	static IconData account_box = IconData(0xe851, L"MaterialIcons");

	/// <i class="material-icons md-36">account_circle</i> &#x2014; material icon named "account circle".
	static IconData account_circle = IconData(0xe853, L"MaterialIcons");

	/// <i class="material-icons md-36">adb</i> &#x2014; material icon named "adb".
	static IconData adb = IconData(0xe60e, L"MaterialIcons");

	/// <i class="material-icons md-36">add</i> &#x2014; material icon named "add".
	static IconData add = IconData(0xe145, L"MaterialIcons");

	/// <i class="material-icons md-36">add_a_photo</i> &#x2014; material icon named "add a photo".
	static IconData add_a_photo = IconData(0xe439, L"MaterialIcons");

	/// <i class="material-icons md-36">add_alarm</i> &#x2014; material icon named "add alarm".
	static IconData add_alarm = IconData(0xe193, L"MaterialIcons");

	/// <i class="material-icons md-36">add_alert</i> &#x2014; material icon named "add alert".
	static IconData add_alert = IconData(0xe003, L"MaterialIcons");

	/// <i class="material-icons md-36">add_box</i> &#x2014; material icon named "add box".
	static IconData add_box = IconData(0xe146, L"MaterialIcons");

	/// <i class="material-icons md-36">add_call</i> &#x2014; material icon named "add call".
	static IconData add_call = IconData(0xe0e8, L"MaterialIcons");

	/// <i class="material-icons md-36">add_circle</i> &#x2014; material icon named "add circle".
	static IconData add_circle = IconData(0xe147, L"MaterialIcons");

	/// <i class="material-icons md-36">add_circle_outline</i> &#x2014; material icon named "add circle outline".
	static IconData add_circle_outline = IconData(0xe148, L"MaterialIcons");

	/// <i class="material-icons md-36">add_comment</i> &#x2014; material icon named "add comment".
	static IconData add_comment = IconData(0xe266, L"MaterialIcons");

	/// <i class="material-icons md-36">add_location</i> &#x2014; material icon named "add location".
	static IconData add_location = IconData(0xe567, L"MaterialIcons");

	/// <i class="material-icons md-36">add_photo_alternate</i> &#x2014; material icon named "add photo alternate".
	static IconData add_photo_alternate = IconData(0xe43e, L"MaterialIcons");

	/// <i class="material-icons md-36">add_shopping_cart</i> &#x2014; material icon named "add shopping cart".
	static IconData add_shopping_cart = IconData(0xe854, L"MaterialIcons");

	/// <i class="material-icons md-36">add_to_home_screen</i> &#x2014; material icon named "add to home screen".
	static IconData add_to_home_screen = IconData(0xe1fe, L"MaterialIcons");

	/// <i class="material-icons md-36">add_to_photos</i> &#x2014; material icon named "add to photos".
	static IconData add_to_photos = IconData(0xe39d, L"MaterialIcons");

	/// <i class="material-icons md-36">add_to_queue</i> &#x2014; material icon named "add to queue".
	static IconData add_to_queue = IconData(0xe05c, L"MaterialIcons");

	/// <i class="material-icons md-36">adjust</i> &#x2014; material icon named "adjust".
	static IconData adjust = IconData(0xe39e, L"MaterialIcons");

	/// <i class="material-icons md-36">airline_seat_flat</i> &#x2014; material icon named "airline seat flat".
	static IconData airline_seat_flat = IconData(0xe630, L"MaterialIcons");

	/// <i class="material-icons md-36">airline_seat_flat_angled</i> &#x2014; material icon named "airline seat flat angled".
	static IconData airline_seat_flat_angled = IconData(0xe631, L"MaterialIcons");

	/// <i class="material-icons md-36">airline_seat_individual_suite</i> &#x2014; material icon named "airline seat individual suite".
	static IconData airline_seat_individual_suite = IconData(0xe632, L"MaterialIcons");

	/// <i class="material-icons md-36">airline_seat_legroom_extra</i> &#x2014; material icon named "airline seat legroom extra".
	static IconData airline_seat_legroom_extra = IconData(0xe633, L"MaterialIcons");

	/// <i class="material-icons md-36">airline_seat_legroom_normal</i> &#x2014; material icon named "airline seat legroom normal".
	static IconData airline_seat_legroom_normal = IconData(0xe634, L"MaterialIcons");

	/// <i class="material-icons md-36">airline_seat_legroom_reduced</i> &#x2014; material icon named "airline seat legroom reduced".
	static IconData airline_seat_legroom_reduced = IconData(0xe635, L"MaterialIcons");

	/// <i class="material-icons md-36">airline_seat_recline_extra</i> &#x2014; material icon named "airline seat recline extra".
	static IconData airline_seat_recline_extra = IconData(0xe636, L"MaterialIcons");

	/// <i class="material-icons md-36">airline_seat_recline_normal</i> &#x2014; material icon named "airline seat recline normal".
	static IconData airline_seat_recline_normal = IconData(0xe637, L"MaterialIcons");

	/// <i class="material-icons md-36">airplanemode_active</i> &#x2014; material icon named "airplanemode active".
	static IconData airplanemode_active = IconData(0xe195, L"MaterialIcons");

	/// <i class="material-icons md-36">airplanemode_inactive</i> &#x2014; material icon named "airplanemode inactive".
	static IconData airplanemode_inactive = IconData(0xe194, L"MaterialIcons");

	/// <i class="material-icons md-36">airplay</i> &#x2014; material icon named "airplay".
	static IconData airplay = IconData(0xe055, L"MaterialIcons");

	/// <i class="material-icons md-36">airport_shuttle</i> &#x2014; material icon named "airport shuttle".
	static IconData airport_shuttle = IconData(0xeb3c, L"MaterialIcons");

	/// <i class="material-icons md-36">alarm</i> &#x2014; material icon named "alarm".
	static IconData alarm = IconData(0xe855, L"MaterialIcons");

	/// <i class="material-icons md-36">alarm_add</i> &#x2014; material icon named "alarm add".
	static IconData alarm_add = IconData(0xe856, L"MaterialIcons");

	/// <i class="material-icons md-36">alarm_off</i> &#x2014; material icon named "alarm off".
	static IconData alarm_off = IconData(0xe857, L"MaterialIcons");

	/// <i class="material-icons md-36">alarm_on</i> &#x2014; material icon named "alarm on".
	static IconData alarm_on = IconData(0xe858, L"MaterialIcons");

	/// <i class="material-icons md-36">album</i> &#x2014; material icon named "album".
	static IconData album = IconData(0xe019, L"MaterialIcons");

	/// <i class="material-icons md-36">all_inclusive</i> &#x2014; material icon named "all inclusive".
	static IconData all_inclusive = IconData(0xeb3d, L"MaterialIcons");

	/// <i class="material-icons md-36">all_out</i> &#x2014; material icon named "all out".
	static IconData all_out = IconData(0xe90b, L"MaterialIcons");

	/// <i class="material-icons md-36">alternate_email</i> &#x2014; material icon named "alternate email".
	static IconData alternate_email = IconData(0xe0e6, L"MaterialIcons");

	/// <i class="material-icons md-36">android</i> &#x2014; material icon named "android".
	static IconData android = IconData(0xe859, L"MaterialIcons");

	/// <i class="material-icons md-36">announcement</i> &#x2014; material icon named "announcement".
	static IconData announcement = IconData(0xe85a, L"MaterialIcons");

	/// <i class="material-icons md-36">apps</i> &#x2014; material icon named "apps".
	static IconData apps = IconData(0xe5c3, L"MaterialIcons");

	/// <i class="material-icons md-36">archive</i> &#x2014; material icon named "archive".
	static IconData archive = IconData(0xe149, L"MaterialIcons");

	/// <i class="material-icons md-36">arrow_back</i> &#x2014; material icon named "arrow back".
	static IconData arrow_back = IconData(0xe5c4, L"MaterialIcons", true);

	/// <i class="material-icons md-36">arrow_back_ios</i> &#x2014; material icon named "arrow back ios".
	static IconData arrow_back_ios = IconData(0xe5e0, L"MaterialIcons", true);

	/// <i class="material-icons md-36">arrow_downward</i> &#x2014; material icon named "arrow downward".
	static IconData arrow_downward = IconData(0xe5db, L"MaterialIcons");

	/// <i class="material-icons md-36">arrow_drop_down</i> &#x2014; material icon named "arrow drop down".
	static IconData arrow_drop_down = IconData(0xe5c5, L"MaterialIcons");

	/// <i class="material-icons md-36">arrow_drop_down_circle</i> &#x2014; material icon named "arrow drop down circle".
	static IconData arrow_drop_down_circle = IconData(0xe5c6, L"MaterialIcons");

	/// <i class="material-icons md-36">arrow_drop_up</i> &#x2014; material icon named "arrow drop up".
	static IconData arrow_drop_up = IconData(0xe5c7, L"MaterialIcons");

	/// <i class="material-icons md-36">arrow_forward</i> &#x2014; material icon named "arrow forward".
	static IconData arrow_forward = IconData(0xe5c8, L"MaterialIcons", true);

	/// <i class="material-icons md-36">arrow_forward_ios</i> &#x2014; material icon named "arrow forward ios".
	static IconData arrow_forward_ios = IconData(0xe5e1, L"MaterialIcons", true);

	/// <i class="material-icons md-36">arrow_left</i> &#x2014; material icon named "arrow left".
	static IconData arrow_left = IconData(0xe5de, L"MaterialIcons", true);

	/// <i class="material-icons md-36">arrow_right</i> &#x2014; material icon named "arrow right".
	static IconData arrow_right = IconData(0xe5df, L"MaterialIcons", true);

	/// <i class="material-icons md-36">arrow_upward</i> &#x2014; material icon named "arrow upward".
	static IconData arrow_upward = IconData(0xe5d8, L"MaterialIcons");

	/// <i class="material-icons md-36">art_track</i> &#x2014; material icon named "art track".
	static IconData art_track = IconData(0xe060, L"MaterialIcons");

	/// <i class="material-icons md-36">aspect_ratio</i> &#x2014; material icon named "aspect ratio".
	static IconData aspect_ratio = IconData(0xe85b, L"MaterialIcons");

	/// <i class="material-icons md-36">assessment</i> &#x2014; material icon named "assessment".
	static IconData assessment = IconData(0xe85c, L"MaterialIcons");

	/// <i class="material-icons md-36">assignment</i> &#x2014; material icon named "assignment".
	static IconData assignment = IconData(0xe85d, L"MaterialIcons", true);

	/// <i class="material-icons md-36">assignment_ind</i> &#x2014; material icon named "assignment ind".
	static IconData assignment_ind = IconData(0xe85e, L"MaterialIcons");

	/// <i class="material-icons md-36">assignment_late</i> &#x2014; material icon named "assignment late".
	static IconData assignment_late = IconData(0xe85f, L"MaterialIcons");

	/// <i class="material-icons md-36">assignment_return</i> &#x2014; material icon named "assignment return".
	static IconData assignment_return = IconData(0xe860, L"MaterialIcons", true);

	/// <i class="material-icons md-36">assignment_returned</i> &#x2014; material icon named "assignment returned".
	static IconData assignment_returned = IconData(0xe861, L"MaterialIcons");

	/// <i class="material-icons md-36">assignment_turned_in</i> &#x2014; material icon named "assignment turned in".
	static IconData assignment_turned_in = IconData(0xe862, L"MaterialIcons");

	/// <i class="material-icons md-36">assistant</i> &#x2014; material icon named "assistant".
	static IconData assistant = IconData(0xe39f, L"MaterialIcons");

	/// <i class="material-icons md-36">assistant_photo</i> &#x2014; material icon named "assistant photo".
	static IconData assistant_photo = IconData(0xe3a0, L"MaterialIcons");

	/// <i class="material-icons md-36">atm</i> &#x2014; material icon named "atm".
	static IconData atm = IconData(0xe573, L"MaterialIcons");

	/// <i class="material-icons md-36">attach_file</i> &#x2014; material icon named "attach file".
	static IconData attach_file = IconData(0xe226, L"MaterialIcons");

	/// <i class="material-icons md-36">attach_money</i> &#x2014; material icon named "attach money".
	static IconData attach_money = IconData(0xe227, L"MaterialIcons");

	/// <i class="material-icons md-36">attachment</i> &#x2014; material icon named "attachment".
	static IconData attachment = IconData(0xe2bc, L"MaterialIcons");

	/// <i class="material-icons md-36">audiotrack</i> &#x2014; material icon named "audiotrack".
	static IconData audiotrack = IconData(0xe3a1, L"MaterialIcons");

	/// <i class="material-icons md-36">autorenew</i> &#x2014; material icon named "autorenew".
	static IconData autorenew = IconData(0xe863, L"MaterialIcons");

	/// <i class="material-icons md-36">av_timer</i> &#x2014; material icon named "av timer".
	static IconData av_timer = IconData(0xe01b, L"MaterialIcons");

	/// <i class="material-icons md-36">backspace</i> &#x2014; material icon named "backspace".
	static IconData backspace = IconData(0xe14a, L"MaterialIcons", true);

	/// <i class="material-icons md-36">backup</i> &#x2014; material icon named "backup".
	static IconData backup = IconData(0xe864, L"MaterialIcons");

	/// <i class="material-icons md-36">battery_alert</i> &#x2014; material icon named "battery alert".
	static IconData battery_alert = IconData(0xe19c, L"MaterialIcons");

	/// <i class="material-icons md-36">battery_charging_full</i> &#x2014; material icon named "battery charging full".
	static IconData battery_charging_full = IconData(0xe1a3, L"MaterialIcons");

	/// <i class="material-icons md-36">battery_full</i> &#x2014; material icon named "battery full".
	static IconData battery_full = IconData(0xe1a4, L"MaterialIcons");

	/// <i class="material-icons md-36">battery_std</i> &#x2014; material icon named "battery std".
	static IconData battery_std = IconData(0xe1a5, L"MaterialIcons");

	/// <i class="material-icons md-36">battery_unknown</i> &#x2014; material icon named "battery unknown".
	static IconData battery_unknown = IconData(0xe1a6, L"MaterialIcons", true);

	/// <i class="material-icons md-36">beach_access</i> &#x2014; material icon named "beach access".
	static IconData beach_access = IconData(0xeb3e, L"MaterialIcons");

	/// <i class="material-icons md-36">beenhere</i> &#x2014; material icon named "beenhere".
	static IconData beenhere = IconData(0xe52d, L"MaterialIcons");

	/// <i class="material-icons md-36">block</i> &#x2014; material icon named "block".
	static IconData block = IconData(0xe14b, L"MaterialIcons");

	/// <i class="material-icons md-36">bluetooth</i> &#x2014; material icon named "bluetooth".
	static IconData bluetooth = IconData(0xe1a7, L"MaterialIcons");

	/// <i class="material-icons md-36">bluetooth_audio</i> &#x2014; material icon named "bluetooth audio".
	static IconData bluetooth_audio = IconData(0xe60f, L"MaterialIcons");

	/// <i class="material-icons md-36">bluetooth_connected</i> &#x2014; material icon named "bluetooth connected".
	static IconData bluetooth_connected = IconData(0xe1a8, L"MaterialIcons");

	/// <i class="material-icons md-36">bluetooth_disabled</i> &#x2014; material icon named "bluetooth disabled".
	static IconData bluetooth_disabled = IconData(0xe1a9, L"MaterialIcons");

	/// <i class="material-icons md-36">bluetooth_searching</i> &#x2014; material icon named "bluetooth searching".
	static IconData bluetooth_searching = IconData(0xe1aa, L"MaterialIcons");

	/// <i class="material-icons md-36">blur_circular</i> &#x2014; material icon named "blur circular".
	static IconData blur_circular = IconData(0xe3a2, L"MaterialIcons");

	/// <i class="material-icons md-36">blur_linear</i> &#x2014; material icon named "blur linear".
	static IconData blur_linear = IconData(0xe3a3, L"MaterialIcons");

	/// <i class="material-icons md-36">blur_off</i> &#x2014; material icon named "blur off".
	static IconData blur_off = IconData(0xe3a4, L"MaterialIcons");

	/// <i class="material-icons md-36">blur_on</i> &#x2014; material icon named "blur on".
	static IconData blur_on = IconData(0xe3a5, L"MaterialIcons");

	/// <i class="material-icons md-36">book</i> &#x2014; material icon named "book".
	static IconData book = IconData(0xe865, L"MaterialIcons");

	/// <i class="material-icons md-36">bookmark</i> &#x2014; material icon named "bookmark".
	static IconData bookmark = IconData(0xe866, L"MaterialIcons");

	/// <i class="material-icons md-36">bookmark_border</i> &#x2014; material icon named "bookmark border".
	static IconData bookmark_border = IconData(0xe867, L"MaterialIcons");

	/// <i class="material-icons md-36">border_all</i> &#x2014; material icon named "border all".
	static IconData border_all = IconData(0xe228, L"MaterialIcons");

	/// <i class="material-icons md-36">border_bottom</i> &#x2014; material icon named "border bottom".
	static IconData border_bottom = IconData(0xe229, L"MaterialIcons");

	/// <i class="material-icons md-36">border_clear</i> &#x2014; material icon named "border clear".
	static IconData border_clear = IconData(0xe22a, L"MaterialIcons");

	/// <i class="material-icons md-36">border_color</i> &#x2014; material icon named "border color".
	static IconData border_color = IconData(0xe22b, L"MaterialIcons");

	/// <i class="material-icons md-36">border_horizontal</i> &#x2014; material icon named "border horizontal".
	static IconData border_horizontal = IconData(0xe22c, L"MaterialIcons");

	/// <i class="material-icons md-36">border_inner</i> &#x2014; material icon named "border inner".
	static IconData border_inner = IconData(0xe22d, L"MaterialIcons");

	/// <i class="material-icons md-36">border_left</i> &#x2014; material icon named "border left".
	static IconData border_left = IconData(0xe22e, L"MaterialIcons");

	/// <i class="material-icons md-36">border_outer</i> &#x2014; material icon named "border outer".
	static IconData border_outer = IconData(0xe22f, L"MaterialIcons");

	/// <i class="material-icons md-36">border_right</i> &#x2014; material icon named "border right".
	static IconData border_right = IconData(0xe230, L"MaterialIcons");

	/// <i class="material-icons md-36">border_style</i> &#x2014; material icon named "border style".
	static IconData border_style = IconData(0xe231, L"MaterialIcons");

	/// <i class="material-icons md-36">border_top</i> &#x2014; material icon named "border top".
	static IconData border_top = IconData(0xe232, L"MaterialIcons");

	/// <i class="material-icons md-36">border_vertical</i> &#x2014; material icon named "border vertical".
	static IconData border_vertical = IconData(0xe233, L"MaterialIcons");

	/// <i class="material-icons md-36">branding_watermark</i> &#x2014; material icon named "branding watermark".
	static IconData branding_watermark = IconData(0xe06b, L"MaterialIcons");

	/// <i class="material-icons md-36">brightness_1</i> &#x2014; material icon named "brightness 1".
	static IconData brightness_1 = IconData(0xe3a6, L"MaterialIcons");

	/// <i class="material-icons md-36">brightness_2</i> &#x2014; material icon named "brightness 2".
	static IconData brightness_2 = IconData(0xe3a7, L"MaterialIcons");

	/// <i class="material-icons md-36">brightness_3</i> &#x2014; material icon named "brightness 3".
	static IconData brightness_3 = IconData(0xe3a8, L"MaterialIcons");

	/// <i class="material-icons md-36">brightness_4</i> &#x2014; material icon named "brightness 4".
	static IconData brightness_4 = IconData(0xe3a9, L"MaterialIcons");

	/// <i class="material-icons md-36">brightness_5</i> &#x2014; material icon named "brightness 5".
	static IconData brightness_5 = IconData(0xe3aa, L"MaterialIcons");

	/// <i class="material-icons md-36">brightness_6</i> &#x2014; material icon named "brightness 6".
	static IconData brightness_6 = IconData(0xe3ab, L"MaterialIcons");

	/// <i class="material-icons md-36">brightness_7</i> &#x2014; material icon named "brightness 7".
	static IconData brightness_7 = IconData(0xe3ac, L"MaterialIcons");

	/// <i class="material-icons md-36">brightness_auto</i> &#x2014; material icon named "brightness auto".
	static IconData brightness_auto = IconData(0xe1ab, L"MaterialIcons");

	/// <i class="material-icons md-36">brightness_high</i> &#x2014; material icon named "brightness high".
	static IconData brightness_high = IconData(0xe1ac, L"MaterialIcons");

	/// <i class="material-icons md-36">brightness_low</i> &#x2014; material icon named "brightness low".
	static IconData brightness_low = IconData(0xe1ad, L"MaterialIcons");

	/// <i class="material-icons md-36">brightness_medium</i> &#x2014; material icon named "brightness medium".
	static IconData brightness_medium = IconData(0xe1ae, L"MaterialIcons");

	/// <i class="material-icons md-36">broken_image</i> &#x2014; material icon named "broken image".
	static IconData broken_image = IconData(0xe3ad, L"MaterialIcons");

	/// <i class="material-icons md-36">brush</i> &#x2014; material icon named "brush".
	static IconData brush = IconData(0xe3ae, L"MaterialIcons");

	/// <i class="material-icons md-36">bubble_chart</i> &#x2014; material icon named "bubble chart".
	static IconData bubble_chart = IconData(0xe6dd, L"MaterialIcons");

	/// <i class="material-icons md-36">bug_report</i> &#x2014; material icon named "bug report".
	static IconData bug_report = IconData(0xe868, L"MaterialIcons");

	/// <i class="material-icons md-36">build</i> &#x2014; material icon named "build".
	static IconData build = IconData(0xe869, L"MaterialIcons");

	/// <i class="material-icons md-36">burst_mode</i> &#x2014; material icon named "burst mode".
	static IconData burst_mode = IconData(0xe43c, L"MaterialIcons");

	/// <i class="material-icons md-36">business</i> &#x2014; material icon named "business".
	static IconData business = IconData(0xe0af, L"MaterialIcons");

	/// <i class="material-icons md-36">business_center</i> &#x2014; material icon named "business center".
	static IconData business_center = IconData(0xeb3f, L"MaterialIcons");

	/// <i class="material-icons md-36">cached</i> &#x2014; material icon named "cached".
	static IconData cached = IconData(0xe86a, L"MaterialIcons");

	/// <i class="material-icons md-36">cake</i> &#x2014; material icon named "cake".
	static IconData cake = IconData(0xe7e9, L"MaterialIcons");

	/// <i class="material-icons md-36">calendar_today</i> &#x2014; material icon named "calendar today".
	static IconData calendar_today = IconData(0xe935, L"MaterialIcons");

	/// <i class="material-icons md-36">calendar_view_day</i> &#x2014; material icon named "calendar view day".
	static IconData calendar_view_day = IconData(0xe936, L"MaterialIcons");

	/// <i class="material-icons md-36">call</i> &#x2014; material icon named "call".
	static IconData call = IconData(0xe0b0, L"MaterialIcons");

	/// <i class="material-icons md-36">call_end</i> &#x2014; material icon named "call end".
	static IconData call_end = IconData(0xe0b1, L"MaterialIcons");

	/// <i class="material-icons md-36">call_made</i> &#x2014; material icon named "call made".
	static IconData call_made = IconData(0xe0b2, L"MaterialIcons", true);

	/// <i class="material-icons md-36">call_merge</i> &#x2014; material icon named "call merge".
	static IconData call_merge = IconData(0xe0b3, L"MaterialIcons", true);

	/// <i class="material-icons md-36">call_missed</i> &#x2014; material icon named "call missed".
	static IconData call_missed = IconData(0xe0b4, L"MaterialIcons", true);

	/// <i class="material-icons md-36">call_missed_outgoing</i> &#x2014; material icon named "call missed outgoing".
	static IconData call_missed_outgoing = IconData(0xe0e4, L"MaterialIcons", true);

	/// <i class="material-icons md-36">call_received</i> &#x2014; material icon named "call received".
	static IconData call_received = IconData(0xe0b5, L"MaterialIcons", true);

	/// <i class="material-icons md-36">call_split</i> &#x2014; material icon named "call split".
	static IconData call_split = IconData(0xe0b6, L"MaterialIcons", true);

	/// <i class="material-icons md-36">call_to_action</i> &#x2014; material icon named "call to action".
	static IconData call_to_action = IconData(0xe06c, L"MaterialIcons");

	/// <i class="material-icons md-36">camera</i> &#x2014; material icon named "camera".
	static IconData camera = IconData(0xe3af, L"MaterialIcons");

	/// <i class="material-icons md-36">camera_alt</i> &#x2014; material icon named "camera alt".
	static IconData camera_alt = IconData(0xe3b0, L"MaterialIcons");

	/// <i class="material-icons md-36">camera_enhance</i> &#x2014; material icon named "camera enhance".
	static IconData camera_enhance = IconData(0xe8fc, L"MaterialIcons");

	/// <i class="material-icons md-36">camera_front</i> &#x2014; material icon named "camera front".
	static IconData camera_front = IconData(0xe3b1, L"MaterialIcons");

	/// <i class="material-icons md-36">camera_rear</i> &#x2014; material icon named "camera rear".
	static IconData camera_rear = IconData(0xe3b2, L"MaterialIcons");

	/// <i class="material-icons md-36">camera_roll</i> &#x2014; material icon named "camera roll".
	static IconData camera_roll = IconData(0xe3b3, L"MaterialIcons");

	/// <i class="material-icons md-36">cancel</i> &#x2014; material icon named "cancel".
	static IconData cancel = IconData(0xe5c9, L"MaterialIcons");

	/// <i class="material-icons md-36">card_giftcard</i> &#x2014; material icon named "card giftcard".
	static IconData card_giftcard = IconData(0xe8f6, L"MaterialIcons");

	/// <i class="material-icons md-36">card_membership</i> &#x2014; material icon named "card membership".
	static IconData card_membership = IconData(0xe8f7, L"MaterialIcons");

	/// <i class="material-icons md-36">card_travel</i> &#x2014; material icon named "card travel".
	static IconData card_travel = IconData(0xe8f8, L"MaterialIcons");

	/// <i class="material-icons md-36">casino</i> &#x2014; material icon named "casino".
	static IconData casino = IconData(0xeb40, L"MaterialIcons");

	/// <i class="material-icons md-36">cast</i> &#x2014; material icon named "cast".
	static IconData cast = IconData(0xe307, L"MaterialIcons");

	/// <i class="material-icons md-36">cast_connected</i> &#x2014; material icon named "cast connected".
	static IconData cast_connected = IconData(0xe308, L"MaterialIcons");

	/// <i class="material-icons md-36">category</i> &#x2014; material icon named "category".
	static IconData category = IconData(0xe574, L"MaterialIcons");

	/// <i class="material-icons md-36">center_focus_strong</i> &#x2014; material icon named "center focus strong".
	static IconData center_focus_strong = IconData(0xe3b4, L"MaterialIcons");

	/// <i class="material-icons md-36">center_focus_weak</i> &#x2014; material icon named "center focus weak".
	static IconData center_focus_weak = IconData(0xe3b5, L"MaterialIcons");

	/// <i class="material-icons md-36">change_history</i> &#x2014; material icon named "change history".
	static IconData change_history = IconData(0xe86b, L"MaterialIcons");

	/// <i class="material-icons md-36">chat</i> &#x2014; material icon named "chat".
	static IconData chat = IconData(0xe0b7, L"MaterialIcons");

	/// <i class="material-icons md-36">chat_bubble</i> &#x2014; material icon named "chat bubble".
	static IconData chat_bubble = IconData(0xe0ca, L"MaterialIcons");

	/// <i class="material-icons md-36">chat_bubble_outline</i> &#x2014; material icon named "chat bubble outline".
	static IconData chat_bubble_outline = IconData(0xe0cb, L"MaterialIcons");

	/// <i class="material-icons md-36">check</i> &#x2014; material icon named "check".
	static IconData check = IconData(0xe5ca, L"MaterialIcons");

	/// <i class="material-icons md-36">check_box</i> &#x2014; material icon named "check box".
	static IconData check_box = IconData(0xe834, L"MaterialIcons");

	/// <i class="material-icons md-36">check_box_outline_blank</i> &#x2014; material icon named "check box outline blank".
	static IconData check_box_outline_blank = IconData(0xe835, L"MaterialIcons");

	/// <i class="material-icons md-36">check_circle</i> &#x2014; material icon named "check circle".
	static IconData check_circle = IconData(0xe86c, L"MaterialIcons");

	/// <i class="material-icons md-36">check_circle_outline</i> &#x2014; material icon named "check circle outline".
	static IconData check_circle_outline = IconData(0xe92d, L"MaterialIcons");

	/// <i class="material-icons md-36">chevron_left</i> &#x2014; material icon named "chevron left".
	static IconData chevron_left = IconData(0xe5cb, L"MaterialIcons", true);

	/// <i class="material-icons md-36">chevron_right</i> &#x2014; material icon named "chevron right".
	static IconData chevron_right = IconData(0xe5cc, L"MaterialIcons", true);

	/// <i class="material-icons md-36">child_care</i> &#x2014; material icon named "child care".
	static IconData child_care = IconData(0xeb41, L"MaterialIcons");

	/// <i class="material-icons md-36">child_friendly</i> &#x2014; material icon named "child friendly".
	static IconData child_friendly = IconData(0xeb42, L"MaterialIcons");

	/// <i class="material-icons md-36">chrome_reader_mode</i> &#x2014; material icon named "chrome reader mode".
	static IconData chrome_reader_mode = IconData(0xe86d, L"MaterialIcons", true);

	/// <i class="material-icons md-36">class</i> &#x2014; material icon named "class".
	static IconData class_ = IconData(0xe86e, L"MaterialIcons");

	/// <i class="material-icons md-36">clear</i> &#x2014; material icon named "clear".
	static IconData clear = IconData(0xe14c, L"MaterialIcons");

	/// <i class="material-icons md-36">clear_all</i> &#x2014; material icon named "clear all".
	static IconData clear_all = IconData(0xe0b8, L"MaterialIcons");

	/// <i class="material-icons md-36">close</i> &#x2014; material icon named "close".
	static IconData close = IconData(0xe5cd, L"MaterialIcons");

	/// <i class="material-icons md-36">closed_caption</i> &#x2014; material icon named "closed caption".
	static IconData closed_caption = IconData(0xe01c, L"MaterialIcons");

	/// <i class="material-icons md-36">cloud</i> &#x2014; material icon named "cloud".
	static IconData cloud = IconData(0xe2bd, L"MaterialIcons");

	/// <i class="material-icons md-36">cloud_circle</i> &#x2014; material icon named "cloud circle".
	static IconData cloud_circle = IconData(0xe2be, L"MaterialIcons");

	/// <i class="material-icons md-36">cloud_done</i> &#x2014; material icon named "cloud done".
	static IconData cloud_done = IconData(0xe2bf, L"MaterialIcons");

	/// <i class="material-icons md-36">cloud_download</i> &#x2014; material icon named "cloud download".
	static IconData cloud_download = IconData(0xe2c0, L"MaterialIcons");

	/// <i class="material-icons md-36">cloud_off</i> &#x2014; material icon named "cloud off".
	static IconData cloud_off = IconData(0xe2c1, L"MaterialIcons");

	/// <i class="material-icons md-36">cloud_queue</i> &#x2014; material icon named "cloud queue".
	static IconData cloud_queue = IconData(0xe2c2, L"MaterialIcons");

	/// <i class="material-icons md-36">cloud_upload</i> &#x2014; material icon named "cloud upload".
	static IconData cloud_upload = IconData(0xe2c3, L"MaterialIcons");

	/// <i class="material-icons md-36">code</i> &#x2014; material icon named "code".
	static IconData code = IconData(0xe86f, L"MaterialIcons");

	/// <i class="material-icons md-36">collections</i> &#x2014; material icon named "collections".
	static IconData collections = IconData(0xe3b6, L"MaterialIcons");

	/// <i class="material-icons md-36">collections_bookmark</i> &#x2014; material icon named "collections bookmark".
	static IconData collections_bookmark = IconData(0xe431, L"MaterialIcons");

	/// <i class="material-icons md-36">color_lens</i> &#x2014; material icon named "color lens".
	static IconData color_lens = IconData(0xe3b7, L"MaterialIcons");

	/// <i class="material-icons md-36">colorize</i> &#x2014; material icon named "colorize".
	static IconData colorize = IconData(0xe3b8, L"MaterialIcons");

	/// <i class="material-icons md-36">comment</i> &#x2014; material icon named "comment".
	static IconData comment = IconData(0xe0b9, L"MaterialIcons");

	/// <i class="material-icons md-36">compare</i> &#x2014; material icon named "compare".
	static IconData compare = IconData(0xe3b9, L"MaterialIcons");

	/// <i class="material-icons md-36">compare_arrows</i> &#x2014; material icon named "compare arrows".
	static IconData compare_arrows = IconData(0xe915, L"MaterialIcons");

	/// <i class="material-icons md-36">computer</i> &#x2014; material icon named "computer".
	static IconData computer = IconData(0xe30a, L"MaterialIcons");

	/// <i class="material-icons md-36">confirmation_number</i> &#x2014; material icon named "confirmation number".
	static IconData confirmation_number = IconData(0xe638, L"MaterialIcons");

	/// <i class="material-icons md-36">contact_mail</i> &#x2014; material icon named "contact mail".
	static IconData contact_mail = IconData(0xe0d0, L"MaterialIcons");

	/// <i class="material-icons md-36">contact_phone</i> &#x2014; material icon named "contact phone".
	static IconData contact_phone = IconData(0xe0cf, L"MaterialIcons");

	/// <i class="material-icons md-36">contacts</i> &#x2014; material icon named "contacts".
	static IconData contacts = IconData(0xe0ba, L"MaterialIcons");

	/// <i class="material-icons md-36">content_copy</i> &#x2014; material icon named "content copy".
	static IconData content_copy = IconData(0xe14d, L"MaterialIcons");

	/// <i class="material-icons md-36">content_cut</i> &#x2014; material icon named "content cut".
	static IconData content_cut = IconData(0xe14e, L"MaterialIcons");

	/// <i class="material-icons md-36">content_paste</i> &#x2014; material icon named "content paste".
	static IconData content_paste = IconData(0xe14f, L"MaterialIcons");

	/// <i class="material-icons md-36">control_point</i> &#x2014; material icon named "control point".
	static IconData control_point = IconData(0xe3ba, L"MaterialIcons");

	/// <i class="material-icons md-36">control_point_duplicate</i> &#x2014; material icon named "control point duplicate".
	static IconData control_point_duplicate = IconData(0xe3bb, L"MaterialIcons");

	/// <i class="material-icons md-36">copyright</i> &#x2014; material icon named "copyright".
	static IconData copyright = IconData(0xe90c, L"MaterialIcons");

	/// <i class="material-icons md-36">create</i> &#x2014; material icon named "create".
	static IconData create = IconData(0xe150, L"MaterialIcons");

	/// <i class="material-icons md-36">create_new_folder</i> &#x2014; material icon named "create new folder".
	static IconData create_new_folder = IconData(0xe2cc, L"MaterialIcons");

	/// <i class="material-icons md-36">credit_card</i> &#x2014; material icon named "credit card".
	static IconData credit_card = IconData(0xe870, L"MaterialIcons");

	/// <i class="material-icons md-36">crop</i> &#x2014; material icon named "crop".
	static IconData crop = IconData(0xe3be, L"MaterialIcons");

	/// <i class="material-icons md-36">crop_16_9</i> &#x2014; material icon named "crop 16 9".
	static IconData crop_16_9 = IconData(0xe3bc, L"MaterialIcons");

	/// <i class="material-icons md-36">crop_3_2</i> &#x2014; material icon named "crop 3 2".
	static IconData crop_3_2 = IconData(0xe3bd, L"MaterialIcons");

	/// <i class="material-icons md-36">crop_5_4</i> &#x2014; material icon named "crop 5 4".
	static IconData crop_5_4 = IconData(0xe3bf, L"MaterialIcons");

	/// <i class="material-icons md-36">crop_7_5</i> &#x2014; material icon named "crop 7 5".
	static IconData crop_7_5 = IconData(0xe3c0, L"MaterialIcons");

	/// <i class="material-icons md-36">crop_din</i> &#x2014; material icon named "crop din".
	static IconData crop_din = IconData(0xe3c1, L"MaterialIcons");

	/// <i class="material-icons md-36">crop_free</i> &#x2014; material icon named "crop free".
	static IconData crop_free = IconData(0xe3c2, L"MaterialIcons");

	/// <i class="material-icons md-36">crop_landscape</i> &#x2014; material icon named "crop landscape".
	static IconData crop_landscape = IconData(0xe3c3, L"MaterialIcons");

	/// <i class="material-icons md-36">crop_original</i> &#x2014; material icon named "crop original".
	static IconData crop_original = IconData(0xe3c4, L"MaterialIcons");

	/// <i class="material-icons md-36">crop_portrait</i> &#x2014; material icon named "crop portrait".
	static IconData crop_portrait = IconData(0xe3c5, L"MaterialIcons");

	/// <i class="material-icons md-36">crop_rotate</i> &#x2014; material icon named "crop rotate".
	static IconData crop_rotate = IconData(0xe437, L"MaterialIcons");

	/// <i class="material-icons md-36">crop_square</i> &#x2014; material icon named "crop square".
	static IconData crop_square = IconData(0xe3c6, L"MaterialIcons");

	/// <i class="material-icons md-36">dashboard</i> &#x2014; material icon named "dashboard".
	static IconData dashboard = IconData(0xe871, L"MaterialIcons");

	/// <i class="material-icons md-36">data_usage</i> &#x2014; material icon named "data usage".
	static IconData data_usage = IconData(0xe1af, L"MaterialIcons");

	/// <i class="material-icons md-36">date_range</i> &#x2014; material icon named "date range".
	static IconData date_range = IconData(0xe916, L"MaterialIcons");

	/// <i class="material-icons md-36">dehaze</i> &#x2014; material icon named "dehaze".
	static IconData dehaze = IconData(0xe3c7, L"MaterialIcons");

	/// <i class="material-icons md-36">delete</i> &#x2014; material icon named "delete".
	static IconData delete_box = IconData(0xe872, L"MaterialIcons");

	/// <i class="material-icons md-36">delete_forever</i> &#x2014; material icon named "delete forever".
	static IconData delete_forever = IconData(0xe92b, L"MaterialIcons");

	/// <i class="material-icons md-36">delete_outline</i> &#x2014; material icon named "delete outline".
	static IconData delete_outline = IconData(0xe92e, L"MaterialIcons");

	/// <i class="material-icons md-36">delete_sweep</i> &#x2014; material icon named "delete sweep".
	static IconData delete_sweep = IconData(0xe16c, L"MaterialIcons");

	/// <i class="material-icons md-36">departure_board</i> &#x2014; material icon named "departure board".
	static IconData departure_board = IconData(0xe576, L"MaterialIcons");

	/// <i class="material-icons md-36">description</i> &#x2014; material icon named "description".
	static IconData description = IconData(0xe873, L"MaterialIcons");

	/// <i class="material-icons md-36">desktop_mac</i> &#x2014; material icon named "desktop mac".
	static IconData desktop_mac = IconData(0xe30b, L"MaterialIcons");

	/// <i class="material-icons md-36">desktop_windows</i> &#x2014; material icon named "desktop windows".
	static IconData desktop_windows = IconData(0xe30c, L"MaterialIcons");

	/// <i class="material-icons md-36">details</i> &#x2014; material icon named "details".
	static IconData details = IconData(0xe3c8, L"MaterialIcons");

	/// <i class="material-icons md-36">developer_board</i> &#x2014; material icon named "developer board".
	static IconData developer_board = IconData(0xe30d, L"MaterialIcons");

	/// <i class="material-icons md-36">developer_mode</i> &#x2014; material icon named "developer mode".
	static IconData developer_mode = IconData(0xe1b0, L"MaterialIcons");

	/// <i class="material-icons md-36">device_hub</i> &#x2014; material icon named "device hub".
	static IconData device_hub = IconData(0xe335, L"MaterialIcons");

	/// <i class="material-icons md-36">device_unknown</i> &#x2014; material icon named "device unknown".
	static IconData device_unknown = IconData(0xe339, L"MaterialIcons", true);

	/// <i class="material-icons md-36">devices</i> &#x2014; material icon named "devices".
	static IconData devices = IconData(0xe1b1, L"MaterialIcons");

	/// <i class="material-icons md-36">devices_other</i> &#x2014; material icon named "devices other".
	static IconData devices_other = IconData(0xe337, L"MaterialIcons");

	/// <i class="material-icons md-36">dialer_sip</i> &#x2014; material icon named "dialer sip".
	static IconData dialer_sip = IconData(0xe0bb, L"MaterialIcons");

	/// <i class="material-icons md-36">dialpad</i> &#x2014; material icon named "dialpad".
	static IconData dialpad = IconData(0xe0bc, L"MaterialIcons");

	/// <i class="material-icons md-36">directions</i> &#x2014; material icon named "directions".
	static IconData directions = IconData(0xe52e, L"MaterialIcons");

	/// <i class="material-icons md-36">directions_bike</i> &#x2014; material icon named "directions bike".
	static IconData directions_bike = IconData(0xe52f, L"MaterialIcons");

	/// <i class="material-icons md-36">directions_boat</i> &#x2014; material icon named "directions boat".
	static IconData directions_boat = IconData(0xe532, L"MaterialIcons");

	/// <i class="material-icons md-36">directions_bus</i> &#x2014; material icon named "directions bus".
	static IconData directions_bus = IconData(0xe530, L"MaterialIcons");

	/// <i class="material-icons md-36">directions_car</i> &#x2014; material icon named "directions car".
	static IconData directions_car = IconData(0xe531, L"MaterialIcons");

	/// <i class="material-icons md-36">directions_railway</i> &#x2014; material icon named "directions railway".
	static IconData directions_railway = IconData(0xe534, L"MaterialIcons");

	/// <i class="material-icons md-36">directions_run</i> &#x2014; material icon named "directions run".
	static IconData directions_run = IconData(0xe566, L"MaterialIcons");

	/// <i class="material-icons md-36">directions_subway</i> &#x2014; material icon named "directions subway".
	static IconData directions_subway = IconData(0xe533, L"MaterialIcons");

	/// <i class="material-icons md-36">directions_transit</i> &#x2014; material icon named "directions transit".
	static IconData directions_transit = IconData(0xe535, L"MaterialIcons");

	/// <i class="material-icons md-36">directions_walk</i> &#x2014; material icon named "directions walk".
	static IconData directions_walk = IconData(0xe536, L"MaterialIcons");

	/// <i class="material-icons md-36">disc_full</i> &#x2014; material icon named "disc full".
	static IconData disc_full = IconData(0xe610, L"MaterialIcons");

	/// <i class="material-icons md-36">dns</i> &#x2014; material icon named "dns".
	static IconData dns = IconData(0xe875, L"MaterialIcons");

	/// <i class="material-icons md-36">do_not_disturb</i> &#x2014; material icon named "do not disturb".
	static IconData do_not_disturb = IconData(0xe612, L"MaterialIcons");

	/// <i class="material-icons md-36">do_not_disturb_alt</i> &#x2014; material icon named "do not disturb alt".
	static IconData do_not_disturb_alt = IconData(0xe611, L"MaterialIcons");

	/// <i class="material-icons md-36">do_not_disturb_off</i> &#x2014; material icon named "do not disturb off".
	static IconData do_not_disturb_off = IconData(0xe643, L"MaterialIcons");

	/// <i class="material-icons md-36">do_not_disturb_on</i> &#x2014; material icon named "do not disturb on".
	static IconData do_not_disturb_on = IconData(0xe644, L"MaterialIcons");

	/// <i class="material-icons md-36">dock</i> &#x2014; material icon named "dock".
	static IconData dock = IconData(0xe30e, L"MaterialIcons");

	/// <i class="material-icons md-36">domain</i> &#x2014; material icon named "domain".
	static IconData domain = IconData(0xe7ee, L"MaterialIcons");

	/// <i class="material-icons md-36">done</i> &#x2014; material icon named "done".
	static IconData done = IconData(0xe876, L"MaterialIcons");

	/// <i class="material-icons md-36">done_all</i> &#x2014; material icon named "done all".
	static IconData done_all = IconData(0xe877, L"MaterialIcons");

	/// <i class="material-icons md-36">done_outline</i> &#x2014; material icon named "done outline".
	static IconData done_outline = IconData(0xe92f, L"MaterialIcons");

	/// <i class="material-icons md-36">donut_large</i> &#x2014; material icon named "donut large".
	static IconData donut_large = IconData(0xe917, L"MaterialIcons");

	/// <i class="material-icons md-36">donut_small</i> &#x2014; material icon named "donut small".
	static IconData donut_small = IconData(0xe918, L"MaterialIcons");

	/// <i class="material-icons md-36">drafts</i> &#x2014; material icon named "drafts".
	static IconData drafts = IconData(0xe151, L"MaterialIcons");

	/// <i class="material-icons md-36">drag_handle</i> &#x2014; material icon named "drag handle".
	static IconData drag_handle = IconData(0xe25d, L"MaterialIcons");

	/// <i class="material-icons md-36">drive_eta</i> &#x2014; material icon named "drive eta".
	static IconData drive_eta = IconData(0xe613, L"MaterialIcons");

	/// <i class="material-icons md-36">dvr</i> &#x2014; material icon named "dvr".
	static IconData dvr = IconData(0xe1b2, L"MaterialIcons", true);

	/// <i class="material-icons md-36">edit</i> &#x2014; material icon named "edit".
	static IconData edit = IconData(0xe3c9, L"MaterialIcons");

	/// <i class="material-icons md-36">edit_attributes</i> &#x2014; material icon named "edit attributes".
	static IconData edit_attributes = IconData(0xe578, L"MaterialIcons");

	/// <i class="material-icons md-36">edit_location</i> &#x2014; material icon named "edit location".
	static IconData edit_location = IconData(0xe568, L"MaterialIcons");

	/// <i class="material-icons md-36">eject</i> &#x2014; material icon named "eject".
	static IconData eject = IconData(0xe8fb, L"MaterialIcons");

	/// <i class="material-icons md-36">email</i> &#x2014; material icon named "email".
	static IconData email = IconData(0xe0be, L"MaterialIcons");

	/// <i class="material-icons md-36">enhanced_encryption</i> &#x2014; material icon named "enhanced encryption".
	static IconData enhanced_encryption = IconData(0xe63f, L"MaterialIcons");

	/// <i class="material-icons md-36">equalizer</i> &#x2014; material icon named "equalizer".
	static IconData equalizer = IconData(0xe01d, L"MaterialIcons");

	/// <i class="material-icons md-36">error</i> &#x2014; material icon named "error".
	static IconData error = IconData(0xe000, L"MaterialIcons");

	/// <i class="material-icons md-36">error_outline</i> &#x2014; material icon named "error outline".
	static IconData error_outline = IconData(0xe001, L"MaterialIcons");

	/// <i class="material-icons md-36">euro_symbol</i> &#x2014; material icon named "euro symbol".
	static IconData euro_symbol = IconData(0xe926, L"MaterialIcons");

	/// <i class="material-icons md-36">ev_station</i> &#x2014; material icon named "ev station".
	static IconData ev_station = IconData(0xe56d, L"MaterialIcons");

	/// <i class="material-icons md-36">event</i> &#x2014; material icon named "event".
	static IconData event = IconData(0xe878, L"MaterialIcons");

	/// <i class="material-icons md-36">event_available</i> &#x2014; material icon named "event available".
	static IconData event_available = IconData(0xe614, L"MaterialIcons");

	/// <i class="material-icons md-36">event_busy</i> &#x2014; material icon named "event busy".
	static IconData event_busy = IconData(0xe615, L"MaterialIcons");

	/// <i class="material-icons md-36">event_note</i> &#x2014; material icon named "event note".
	static IconData event_note = IconData(0xe616, L"MaterialIcons", true);

	/// <i class="material-icons md-36">event_seat</i> &#x2014; material icon named "event seat".
	static IconData event_seat = IconData(0xe903, L"MaterialIcons");

	/// <i class="material-icons md-36">exit_to_app</i> &#x2014; material icon named "exit to app".
	static IconData exit_to_app = IconData(0xe879, L"MaterialIcons");

	/// <i class="material-icons md-36">expand_less</i> &#x2014; material icon named "expand less".
	static IconData expand_less = IconData(0xe5ce, L"MaterialIcons");

	/// <i class="material-icons md-36">expand_more</i> &#x2014; material icon named "expand more".
	static IconData expand_more = IconData(0xe5cf, L"MaterialIcons");

	/// <i class="material-icons md-36">explicit</i> &#x2014; material icon named "explicit".
	static IconData explicit_icon = IconData(0xe01e, L"MaterialIcons");

	/// <i class="material-icons md-36">explore</i> &#x2014; material icon named "explore".
	static IconData explore = IconData(0xe87a, L"MaterialIcons");

	/// <i class="material-icons md-36">exposure</i> &#x2014; material icon named "exposure".
	static IconData exposure = IconData(0xe3ca, L"MaterialIcons");

	/// <i class="material-icons md-36">exposure_neg_1</i> &#x2014; material icon named "exposure neg 1".
	static IconData exposure_neg_1 = IconData(0xe3cb, L"MaterialIcons");

	/// <i class="material-icons md-36">exposure_neg_2</i> &#x2014; material icon named "exposure neg 2".
	static IconData exposure_neg_2 = IconData(0xe3cc, L"MaterialIcons");

	/// <i class="material-icons md-36">exposure_plus_1</i> &#x2014; material icon named "exposure plus 1".
	static IconData exposure_plus_1 = IconData(0xe3cd, L"MaterialIcons");

	/// <i class="material-icons md-36">exposure_plus_2</i> &#x2014; material icon named "exposure plus 2".
	static IconData exposure_plus_2 = IconData(0xe3ce, L"MaterialIcons");

	/// <i class="material-icons md-36">exposure_zero</i> &#x2014; material icon named "exposure zero".
	static IconData exposure_zero = IconData(0xe3cf, L"MaterialIcons");

	/// <i class="material-icons md-36">extension</i> &#x2014; material icon named "extension".
	static IconData extension = IconData(0xe87b, L"MaterialIcons");

	/// <i class="material-icons md-36">face</i> &#x2014; material icon named "face".
	static IconData face = IconData(0xe87c, L"MaterialIcons");

	/// <i class="material-icons md-36">fast_forward</i> &#x2014; material icon named "fast forward".
	static IconData fast_forward = IconData(0xe01f, L"MaterialIcons");

	/// <i class="material-icons md-36">fast_rewind</i> &#x2014; material icon named "fast rewind".
	static IconData fast_rewind = IconData(0xe020, L"MaterialIcons");

	/// <i class="material-icons md-36">fastfood</i> &#x2014; material icon named "fastfood".
	static IconData fastfood = IconData(0xe57a, L"MaterialIcons");

	/// <i class="material-icons md-36">favorite</i> &#x2014; material icon named "favorite".
	static IconData favorite = IconData(0xe87d, L"MaterialIcons");

	/// <i class="material-icons md-36">favorite_border</i> &#x2014; material icon named "favorite border".
	static IconData favorite_border = IconData(0xe87e, L"MaterialIcons");

	/// <i class="material-icons md-36">featured_play_list</i> &#x2014; material icon named "featured play list".
	static IconData featured_play_list = IconData(0xe06d, L"MaterialIcons", true);

	/// <i class="material-icons md-36">featured_video</i> &#x2014; material icon named "featured video".
	static IconData featured_video = IconData(0xe06e, L"MaterialIcons", true);

	/// <i class="material-icons md-36">feedback</i> &#x2014; material icon named "feedback".
	static IconData feedback = IconData(0xe87f, L"MaterialIcons");

	/// <i class="material-icons md-36">fiber_dvr</i> &#x2014; material icon named "fiber dvr".
	static IconData fiber_dvr = IconData(0xe05d, L"MaterialIcons");

	/// <i class="material-icons md-36">fiber_manual_record</i> &#x2014; material icon named "fiber manual record".
	static IconData fiber_manual_record = IconData(0xe061, L"MaterialIcons");

	/// <i class="material-icons md-36">fiber_new</i> &#x2014; material icon named "fiber new".
	static IconData fiber_new = IconData(0xe05e, L"MaterialIcons");

	/// <i class="material-icons md-36">fiber_pin</i> &#x2014; material icon named "fiber pin".
	static IconData fiber_pin = IconData(0xe06a, L"MaterialIcons");

	/// <i class="material-icons md-36">fiber_smart_record</i> &#x2014; material icon named "fiber smart record".
	static IconData fiber_smart_record = IconData(0xe062, L"MaterialIcons");

	/// <i class="material-icons md-36">file_download</i> &#x2014; material icon named "file download".
	static IconData file_download = IconData(0xe2c4, L"MaterialIcons");

	/// <i class="material-icons md-36">file_upload</i> &#x2014; material icon named "file upload".
	static IconData file_upload = IconData(0xe2c6, L"MaterialIcons");

	/// <i class="material-icons md-36">filter</i> &#x2014; material icon named "filter".
	static IconData filter = IconData(0xe3d3, L"MaterialIcons");

	/// <i class="material-icons md-36">filter_1</i> &#x2014; material icon named "filter 1".
	static IconData filter_1 = IconData(0xe3d0, L"MaterialIcons");

	/// <i class="material-icons md-36">filter_2</i> &#x2014; material icon named "filter 2".
	static IconData filter_2 = IconData(0xe3d1, L"MaterialIcons");

	/// <i class="material-icons md-36">filter_3</i> &#x2014; material icon named "filter 3".
	static IconData filter_3 = IconData(0xe3d2, L"MaterialIcons");

	/// <i class="material-icons md-36">filter_4</i> &#x2014; material icon named "filter 4".
	static IconData filter_4 = IconData(0xe3d4, L"MaterialIcons");

	/// <i class="material-icons md-36">filter_5</i> &#x2014; material icon named "filter 5".
	static IconData filter_5 = IconData(0xe3d5, L"MaterialIcons");

	/// <i class="material-icons md-36">filter_6</i> &#x2014; material icon named "filter 6".
	static IconData filter_6 = IconData(0xe3d6, L"MaterialIcons");

	/// <i class="material-icons md-36">filter_7</i> &#x2014; material icon named "filter 7".
	static IconData filter_7 = IconData(0xe3d7, L"MaterialIcons");

	/// <i class="material-icons md-36">filter_8</i> &#x2014; material icon named "filter 8".
	static IconData filter_8 = IconData(0xe3d8, L"MaterialIcons");

	/// <i class="material-icons md-36">filter_9</i> &#x2014; material icon named "filter 9".
	static IconData filter_9 = IconData(0xe3d9, L"MaterialIcons");

	/// <i class="material-icons md-36">filter_9_plus</i> &#x2014; material icon named "filter 9 plus".
	static IconData filter_9_plus = IconData(0xe3da, L"MaterialIcons");

	/// <i class="material-icons md-36">filter_b_and_w</i> &#x2014; material icon named "filter b and w".
	static IconData filter_b_and_w = IconData(0xe3db, L"MaterialIcons");

	/// <i class="material-icons md-36">filter_center_focus</i> &#x2014; material icon named "filter center focus".
	static IconData filter_center_focus = IconData(0xe3dc, L"MaterialIcons");

	/// <i class="material-icons md-36">filter_drama</i> &#x2014; material icon named "filter drama".
	static IconData filter_drama = IconData(0xe3dd, L"MaterialIcons");

	/// <i class="material-icons md-36">filter_frames</i> &#x2014; material icon named "filter frames".
	static IconData filter_frames = IconData(0xe3de, L"MaterialIcons");

	/// <i class="material-icons md-36">filter_hdr</i> &#x2014; material icon named "filter hdr".
	static IconData filter_hdr = IconData(0xe3df, L"MaterialIcons");

	/// <i class="material-icons md-36">filter_list</i> &#x2014; material icon named "filter list".
	static IconData filter_list = IconData(0xe152, L"MaterialIcons");

	/// <i class="material-icons md-36">filter_none</i> &#x2014; material icon named "filter none".
	static IconData filter_none = IconData(0xe3e0, L"MaterialIcons");

	/// <i class="material-icons md-36">filter_tilt_shift</i> &#x2014; material icon named "filter tilt shift".
	static IconData filter_tilt_shift = IconData(0xe3e2, L"MaterialIcons");

	/// <i class="material-icons md-36">filter_vintage</i> &#x2014; material icon named "filter vintage".
	static IconData filter_vintage = IconData(0xe3e3, L"MaterialIcons");

	/// <i class="material-icons md-36">find_in_page</i> &#x2014; material icon named "find in page".
	static IconData find_in_page = IconData(0xe880, L"MaterialIcons");

	/// <i class="material-icons md-36">find_replace</i> &#x2014; material icon named "find replace".
	static IconData find_replace = IconData(0xe881, L"MaterialIcons");

	/// <i class="material-icons md-36">fingerprint</i> &#x2014; material icon named "fingerprint".
	static IconData fingerprint = IconData(0xe90d, L"MaterialIcons");

	/// <i class="material-icons md-36">first_page</i> &#x2014; material icon named "first page".
	static IconData first_page = IconData(0xe5dc, L"MaterialIcons", true);

	/// <i class="material-icons md-36">fitness_center</i> &#x2014; material icon named "fitness center".
	static IconData fitness_center = IconData(0xeb43, L"MaterialIcons");

	/// <i class="material-icons md-36">flag</i> &#x2014; material icon named "flag".
	static IconData flag = IconData(0xe153, L"MaterialIcons");

	/// <i class="material-icons md-36">flare</i> &#x2014; material icon named "flare".
	static IconData flare = IconData(0xe3e4, L"MaterialIcons");

	/// <i class="material-icons md-36">flash_auto</i> &#x2014; material icon named "flash auto".
	static IconData flash_auto = IconData(0xe3e5, L"MaterialIcons");

	/// <i class="material-icons md-36">flash_off</i> &#x2014; material icon named "flash off".
	static IconData flash_off = IconData(0xe3e6, L"MaterialIcons");

	/// <i class="material-icons md-36">flash_on</i> &#x2014; material icon named "flash on".
	static IconData flash_on = IconData(0xe3e7, L"MaterialIcons");

	/// <i class="material-icons md-36">flight</i> &#x2014; material icon named "flight".
	static IconData flight = IconData(0xe539, L"MaterialIcons");

	/// <i class="material-icons md-36">flight_land</i> &#x2014; material icon named "flight land".
	static IconData flight_land = IconData(0xe904, L"MaterialIcons", true);

	/// <i class="material-icons md-36">flight_takeoff</i> &#x2014; material icon named "flight takeoff".
	static IconData flight_takeoff = IconData(0xe905, L"MaterialIcons", true);

	/// <i class="material-icons md-36">flip</i> &#x2014; material icon named "flip".
	static IconData flip = IconData(0xe3e8, L"MaterialIcons");

	/// <i class="material-icons md-36">flip_to_back</i> &#x2014; material icon named "flip to back".
	static IconData flip_to_back = IconData(0xe882, L"MaterialIcons");

	/// <i class="material-icons md-36">flip_to_front</i> &#x2014; material icon named "flip to front".
	static IconData flip_to_front = IconData(0xe883, L"MaterialIcons");

	/// <i class="material-icons md-36">folder</i> &#x2014; material icon named "folder".
	static IconData folder = IconData(0xe2c7, L"MaterialIcons");

	/// <i class="material-icons md-36">folder_open</i> &#x2014; material icon named "folder open".
	static IconData folder_open = IconData(0xe2c8, L"MaterialIcons");

	/// <i class="material-icons md-36">folder_shared</i> &#x2014; material icon named "folder shared".
	static IconData folder_shared = IconData(0xe2c9, L"MaterialIcons");

	/// <i class="material-icons md-36">folder_special</i> &#x2014; material icon named "folder special".
	static IconData folder_special = IconData(0xe617, L"MaterialIcons");

	/// <i class="material-icons md-36">font_download</i> &#x2014; material icon named "font download".
	static IconData font_download = IconData(0xe167, L"MaterialIcons");

	/// <i class="material-icons md-36">format_align_center</i> &#x2014; material icon named "format align center".
	static IconData format_align_center = IconData(0xe234, L"MaterialIcons");

	/// <i class="material-icons md-36">format_align_justify</i> &#x2014; material icon named "format align justify".
	static IconData format_align_justify = IconData(0xe235, L"MaterialIcons");

	/// <i class="material-icons md-36">format_align_left</i> &#x2014; material icon named "format align left".
	static IconData format_align_left = IconData(0xe236, L"MaterialIcons");

	/// <i class="material-icons md-36">format_align_right</i> &#x2014; material icon named "format align right".
	static IconData format_align_right = IconData(0xe237, L"MaterialIcons");

	/// <i class="material-icons md-36">format_bold</i> &#x2014; material icon named "format bold".
	static IconData format_bold = IconData(0xe238, L"MaterialIcons");

	/// <i class="material-icons md-36">format_clear</i> &#x2014; material icon named "format clear".
	static IconData format_clear = IconData(0xe239, L"MaterialIcons");

	/// <i class="material-icons md-36">format_color_fill</i> &#x2014; material icon named "format color fill".
	static IconData format_color_fill = IconData(0xe23a, L"MaterialIcons");

	/// <i class="material-icons md-36">format_color_reset</i> &#x2014; material icon named "format color reset".
	static IconData format_color_reset = IconData(0xe23b, L"MaterialIcons");

	/// <i class="material-icons md-36">format_color_text</i> &#x2014; material icon named "format color text".
	static IconData format_color_text = IconData(0xe23c, L"MaterialIcons");

	/// <i class="material-icons md-36">format_indent_decrease</i> &#x2014; material icon named "format indent decrease".
	static IconData format_indent_decrease = IconData(0xe23d, L"MaterialIcons", true);

	/// <i class="material-icons md-36">format_indent_increase</i> &#x2014; material icon named "format indent increase".
	static IconData format_indent_increase = IconData(0xe23e, L"MaterialIcons", true);

	/// <i class="material-icons md-36">format_italic</i> &#x2014; material icon named "format italic".
	static IconData format_italic = IconData(0xe23f, L"MaterialIcons");

	/// <i class="material-icons md-36">format_line_spacing</i> &#x2014; material icon named "format line spacing".
	static IconData format_line_spacing = IconData(0xe240, L"MaterialIcons");

	/// <i class="material-icons md-36">format_list_bulleted</i> &#x2014; material icon named "format list bulleted".
	static IconData format_list_bulleted = IconData(0xe241, L"MaterialIcons", true);

	/// <i class="material-icons md-36">format_list_numbered</i> &#x2014; material icon named "format list numbered".
	static IconData format_list_numbered = IconData(0xe242, L"MaterialIcons");

	/// <i class="material-icons md-36">format_list_numbered_rtl</i> &#x2014; material icon named "format list numbered rtl".
	static IconData format_list_numbered_rtl = IconData(0xe267, L"MaterialIcons");

	/// <i class="material-icons md-36">format_paint</i> &#x2014; material icon named "format paint".
	static IconData format_paint = IconData(0xe243, L"MaterialIcons");

	/// <i class="material-icons md-36">format_quote</i> &#x2014; material icon named "format quote".
	static IconData format_quote = IconData(0xe244, L"MaterialIcons");

	/// <i class="material-icons md-36">format_shapes</i> &#x2014; material icon named "format shapes".
	static IconData format_shapes = IconData(0xe25e, L"MaterialIcons");

	/// <i class="material-icons md-36">format_size</i> &#x2014; material icon named "format size".
	static IconData format_size = IconData(0xe245, L"MaterialIcons");

	/// <i class="material-icons md-36">format_strikethrough</i> &#x2014; material icon named "format strikethrough".
	static IconData format_strikethrough = IconData(0xe246, L"MaterialIcons");

	/// <i class="material-icons md-36">format_textdirection_l_to_r</i> &#x2014; material icon named "format textdirection l to r".
	static IconData format_textdirection_l_to_r = IconData(0xe247, L"MaterialIcons");

	/// <i class="material-icons md-36">format_textdirection_r_to_l</i> &#x2014; material icon named "format textdirection r to l".
	static IconData format_textdirection_r_to_l = IconData(0xe248, L"MaterialIcons");

	/// <i class="material-icons md-36">format_underlined</i> &#x2014; material icon named "format underlined".
	static IconData format_underlined = IconData(0xe249, L"MaterialIcons");

	/// <i class="material-icons md-36">forum</i> &#x2014; material icon named "forum".
	static IconData forum = IconData(0xe0bf, L"MaterialIcons");

	/// <i class="material-icons md-36">forward</i> &#x2014; material icon named "forward".
	static IconData forward = IconData(0xe154, L"MaterialIcons", true);

	/// <i class="material-icons md-36">forward_10</i> &#x2014; material icon named "forward 10".
	static IconData forward_10 = IconData(0xe056, L"MaterialIcons");

	/// <i class="material-icons md-36">forward_30</i> &#x2014; material icon named "forward 30".
	static IconData forward_30 = IconData(0xe057, L"MaterialIcons");

	/// <i class="material-icons md-36">forward_5</i> &#x2014; material icon named "forward 5".
	static IconData forward_5 = IconData(0xe058, L"MaterialIcons");

	/// <i class="material-icons md-36">free_breakfast</i> &#x2014; material icon named "free breakfast".
	static IconData free_breakfast = IconData(0xeb44, L"MaterialIcons");

	/// <i class="material-icons md-36">fullscreen</i> &#x2014; material icon named "fullscreen".
	static IconData fullscreen = IconData(0xe5d0, L"MaterialIcons");

	/// <i class="material-icons md-36">fullscreen_exit</i> &#x2014; material icon named "fullscreen exit".
	static IconData fullscreen_exit = IconData(0xe5d1, L"MaterialIcons");

	/// <i class="material-icons md-36">functions</i> &#x2014; material icon named "functions".
	static IconData functions = IconData(0xe24a, L"MaterialIcons", true);

	/// <i class="material-icons md-36">g_translate</i> &#x2014; material icon named "g translate".
	static IconData g_translate = IconData(0xe927, L"MaterialIcons");

	/// <i class="material-icons md-36">gamepad</i> &#x2014; material icon named "gamepad".
	static IconData gamepad = IconData(0xe30f, L"MaterialIcons");

	/// <i class="material-icons md-36">games</i> &#x2014; material icon named "games".
	static IconData games = IconData(0xe021, L"MaterialIcons");

	/// <i class="material-icons md-36">gavel</i> &#x2014; material icon named "gavel".
	static IconData gavel = IconData(0xe90e, L"MaterialIcons");

	/// <i class="material-icons md-36">gesture</i> &#x2014; material icon named "gesture".
	static IconData gesture = IconData(0xe155, L"MaterialIcons");

	/// <i class="material-icons md-36">get_app</i> &#x2014; material icon named "get app".
	static IconData get_app = IconData(0xe884, L"MaterialIcons");

	/// <i class="material-icons md-36">gif</i> &#x2014; material icon named "gif".
	static IconData gif = IconData(0xe908, L"MaterialIcons");

	/// <i class="material-icons md-36">golf_course</i> &#x2014; material icon named "golf course".
	static IconData golf_course = IconData(0xeb45, L"MaterialIcons");

	/// <i class="material-icons md-36">gps_fixed</i> &#x2014; material icon named "gps fixed".
	static IconData gps_fixed = IconData(0xe1b3, L"MaterialIcons");

	/// <i class="material-icons md-36">gps_not_fixed</i> &#x2014; material icon named "gps not fixed".
	static IconData gps_not_fixed = IconData(0xe1b4, L"MaterialIcons");

	/// <i class="material-icons md-36">gps_off</i> &#x2014; material icon named "gps off".
	static IconData gps_off = IconData(0xe1b5, L"MaterialIcons");

	/// <i class="material-icons md-36">grade</i> &#x2014; material icon named "grade".
	static IconData grade = IconData(0xe885, L"MaterialIcons");

	/// <i class="material-icons md-36">gradient</i> &#x2014; material icon named "gradient".
	static IconData gradient = IconData(0xe3e9, L"MaterialIcons");

	/// <i class="material-icons md-36">grain</i> &#x2014; material icon named "grain".
	static IconData grain = IconData(0xe3ea, L"MaterialIcons");

	/// <i class="material-icons md-36">graphic_eq</i> &#x2014; material icon named "graphic eq".
	static IconData graphic_eq = IconData(0xe1b8, L"MaterialIcons");

	/// <i class="material-icons md-36">grid_off</i> &#x2014; material icon named "grid off".
	static IconData grid_off = IconData(0xe3eb, L"MaterialIcons");

	/// <i class="material-icons md-36">grid_on</i> &#x2014; material icon named "grid on".
	static IconData grid_on = IconData(0xe3ec, L"MaterialIcons");

	/// <i class="material-icons md-36">group</i> &#x2014; material icon named "group".
	static IconData group = IconData(0xe7ef, L"MaterialIcons");

	/// <i class="material-icons md-36">group_add</i> &#x2014; material icon named "group add".
	static IconData group_add = IconData(0xe7f0, L"MaterialIcons");

	/// <i class="material-icons md-36">group_work</i> &#x2014; material icon named "group work".
	static IconData group_work = IconData(0xe886, L"MaterialIcons");

	/// <i class="material-icons md-36">hd</i> &#x2014; material icon named "hd".
	static IconData hd = IconData(0xe052, L"MaterialIcons");

	/// <i class="material-icons md-36">hdr_off</i> &#x2014; material icon named "hdr off".
	static IconData hdr_off = IconData(0xe3ed, L"MaterialIcons");

	/// <i class="material-icons md-36">hdr_on</i> &#x2014; material icon named "hdr on".
	static IconData hdr_on = IconData(0xe3ee, L"MaterialIcons");

	/// <i class="material-icons md-36">hdr_strong</i> &#x2014; material icon named "hdr strong".
	static IconData hdr_strong = IconData(0xe3f1, L"MaterialIcons");

	/// <i class="material-icons md-36">hdr_weak</i> &#x2014; material icon named "hdr weak".
	static IconData hdr_weak = IconData(0xe3f2, L"MaterialIcons");

	/// <i class="material-icons md-36">headset</i> &#x2014; material icon named "headset".
	static IconData headset = IconData(0xe310, L"MaterialIcons");

	/// <i class="material-icons md-36">headset_mic</i> &#x2014; material icon named "headset mic".
	static IconData headset_mic = IconData(0xe311, L"MaterialIcons");

	/// <i class="material-icons md-36">headset_off</i> &#x2014; material icon named "headset off".
	static IconData headset_off = IconData(0xe33a, L"MaterialIcons");

	/// <i class="material-icons md-36">healing</i> &#x2014; material icon named "healing".
	static IconData healing = IconData(0xe3f3, L"MaterialIcons");

	/// <i class="material-icons md-36">hearing</i> &#x2014; material icon named "hearing".
	static IconData hearing = IconData(0xe023, L"MaterialIcons");

	/// <i class="material-icons md-36">help</i> &#x2014; material icon named "help".
	static IconData help = IconData(0xe887, L"MaterialIcons", true);

	/// <i class="material-icons md-36">help_outline</i> &#x2014; material icon named "help outline".
	static IconData help_outline = IconData(0xe8fd, L"MaterialIcons", true);

	/// <i class="material-icons md-36">high_quality</i> &#x2014; material icon named "high quality".
	static IconData high_quality = IconData(0xe024, L"MaterialIcons");

	/// <i class="material-icons md-36">highlight</i> &#x2014; material icon named "highlight".
	static IconData highlight = IconData(0xe25f, L"MaterialIcons");

	/// <i class="material-icons md-36">highlight_off</i> &#x2014; material icon named "highlight off".
	static IconData highlight_off = IconData(0xe888, L"MaterialIcons");

	/// <i class="material-icons md-36">history</i> &#x2014; material icon named "history".
	static IconData history = IconData(0xe889, L"MaterialIcons");

	/// <i class="material-icons md-36">home</i> &#x2014; material icon named "home".
	static IconData home = IconData(0xe88a, L"MaterialIcons");

	/// <i class="material-icons md-36">hot_tub</i> &#x2014; material icon named "hot tub".
	static IconData hot_tub = IconData(0xeb46, L"MaterialIcons");

	/// <i class="material-icons md-36">hotel</i> &#x2014; material icon named "hotel".
	static IconData hotel = IconData(0xe53a, L"MaterialIcons");

	/// <i class="material-icons md-36">hourglass_empty</i> &#x2014; material icon named "hourglass empty".
	static IconData hourglass_empty = IconData(0xe88b, L"MaterialIcons");

	/// <i class="material-icons md-36">hourglass_full</i> &#x2014; material icon named "hourglass full".
	static IconData hourglass_full = IconData(0xe88c, L"MaterialIcons");

	/// <i class="material-icons md-36">http</i> &#x2014; material icon named "http".
	static IconData http = IconData(0xe902, L"MaterialIcons");

	/// <i class="material-icons md-36">https</i> &#x2014; material icon named "https".
	static IconData https = IconData(0xe88d, L"MaterialIcons");

	/// <i class="material-icons md-36">image</i> &#x2014; material icon named "image".
	static IconData image = IconData(0xe3f4, L"MaterialIcons");

	/// <i class="material-icons md-36">image_aspect_ratio</i> &#x2014; material icon named "image aspect ratio".
	static IconData image_aspect_ratio = IconData(0xe3f5, L"MaterialIcons");

	/// <i class="material-icons md-36">import_contacts</i> &#x2014; material icon named "import contacts".
	static IconData import_contacts = IconData(0xe0e0, L"MaterialIcons");

	/// <i class="material-icons md-36">import_export</i> &#x2014; material icon named "import export".
	static IconData import_export = IconData(0xe0c3, L"MaterialIcons");

	/// <i class="material-icons md-36">important_devices</i> &#x2014; material icon named "important devices".
	static IconData important_devices = IconData(0xe912, L"MaterialIcons");

	/// <i class="material-icons md-36">inbox</i> &#x2014; material icon named "inbox".
	static IconData inbox = IconData(0xe156, L"MaterialIcons");

	/// <i class="material-icons md-36">indeterminate_check_box</i> &#x2014; material icon named "indeterminate check box".
	static IconData indeterminate_check_box = IconData(0xe909, L"MaterialIcons");

	/// <i class="material-icons md-36">info</i> &#x2014; material icon named "info".
	static IconData info = IconData(0xe88e, L"MaterialIcons");

	/// <i class="material-icons md-36">info_outline</i> &#x2014; material icon named "info outline".
	static IconData info_outline = IconData(0xe88f, L"MaterialIcons");

	/// <i class="material-icons md-36">input</i> &#x2014; material icon named "input".
	static IconData input = IconData(0xe890, L"MaterialIcons", true);

	/// <i class="material-icons md-36">insert_chart</i> &#x2014; material icon named "insert chart".
	static IconData insert_chart = IconData(0xe24b, L"MaterialIcons");

	/// <i class="material-icons md-36">insert_comment</i> &#x2014; material icon named "insert comment".
	static IconData insert_comment = IconData(0xe24c, L"MaterialIcons");

	/// <i class="material-icons md-36">insert_drive_file</i> &#x2014; material icon named "insert drive file".
	static IconData insert_drive_file = IconData(0xe24d, L"MaterialIcons");

	/// <i class="material-icons md-36">insert_emoticon</i> &#x2014; material icon named "insert emoticon".
	static IconData insert_emoticon = IconData(0xe24e, L"MaterialIcons");

	/// <i class="material-icons md-36">insert_invitation</i> &#x2014; material icon named "insert invitation".
	static IconData insert_invitation = IconData(0xe24f, L"MaterialIcons");

	/// <i class="material-icons md-36">insert_link</i> &#x2014; material icon named "insert link".
	static IconData insert_link = IconData(0xe250, L"MaterialIcons");

	/// <i class="material-icons md-36">insert_photo</i> &#x2014; material icon named "insert photo".
	static IconData insert_photo = IconData(0xe251, L"MaterialIcons");

	/// <i class="material-icons md-36">invert_colors</i> &#x2014; material icon named "invert colors".
	static IconData invert_colors = IconData(0xe891, L"MaterialIcons");

	/// <i class="material-icons md-36">invert_colors_off</i> &#x2014; material icon named "invert colors off".
	static IconData invert_colors_off = IconData(0xe0c4, L"MaterialIcons");

	/// <i class="material-icons md-36">iso</i> &#x2014; material icon named "iso".
	static IconData iso = IconData(0xe3f6, L"MaterialIcons");

	/// <i class="material-icons md-36">keyboard</i> &#x2014; material icon named "keyboard".
	static IconData keyboard = IconData(0xe312, L"MaterialIcons");

	/// <i class="material-icons md-36">keyboard_arrow_down</i> &#x2014; material icon named "keyboard arrow down".
	static IconData keyboard_arrow_down = IconData(0xe313, L"MaterialIcons");

	/// <i class="material-icons md-36">keyboard_arrow_left</i> &#x2014; material icon named "keyboard arrow left".
	static IconData keyboard_arrow_left = IconData(0xe314, L"MaterialIcons");

	/// <i class="material-icons md-36">keyboard_arrow_right</i> &#x2014; material icon named "keyboard arrow right".
	static IconData keyboard_arrow_right = IconData(0xe315, L"MaterialIcons");

	/// <i class="material-icons md-36">keyboard_arrow_up</i> &#x2014; material icon named "keyboard arrow up".
	static IconData keyboard_arrow_up = IconData(0xe316, L"MaterialIcons");

	/// <i class="material-icons md-36">keyboard_backspace</i> &#x2014; material icon named "keyboard backspace".
	static IconData keyboard_backspace = IconData(0xe317, L"MaterialIcons", true);

	/// <i class="material-icons md-36">keyboard_capslock</i> &#x2014; material icon named "keyboard capslock".
	static IconData keyboard_capslock = IconData(0xe318, L"MaterialIcons");

	/// <i class="material-icons md-36">keyboard_hide</i> &#x2014; material icon named "keyboard hide".
	static IconData keyboard_hide = IconData(0xe31a, L"MaterialIcons");

	/// <i class="material-icons md-36">keyboard_return</i> &#x2014; material icon named "keyboard return".
	static IconData keyboard_return = IconData(0xe31b, L"MaterialIcons");

	/// <i class="material-icons md-36">keyboard_tab</i> &#x2014; material icon named "keyboard tab".
	static IconData keyboard_tab = IconData(0xe31c, L"MaterialIcons", true);

	/// <i class="material-icons md-36">keyboard_voice</i> &#x2014; material icon named "keyboard voice".
	static IconData keyboard_voice = IconData(0xe31d, L"MaterialIcons");

	/// <i class="material-icons md-36">kitchen</i> &#x2014; material icon named "kitchen".
	static IconData kitchen = IconData(0xeb47, L"MaterialIcons");

	/// <i class="material-icons md-36">label</i> &#x2014; material icon named "label".
	static IconData label = IconData(0xe892, L"MaterialIcons", true);

	/// <i class="material-icons md-36">label_important</i> &#x2014; material icon named "label important".
	static IconData label_important = IconData(0xe937, L"MaterialIcons", true);

	/// <i class="material-icons md-36">label_outline</i> &#x2014; material icon named "label outline".
	static IconData label_outline = IconData(0xe893, L"MaterialIcons", true);

	/// <i class="material-icons md-36">landscape</i> &#x2014; material icon named "landscape".
	static IconData landscape = IconData(0xe3f7, L"MaterialIcons");

	/// <i class="material-icons md-36">language</i> &#x2014; material icon named "language".
	static IconData language = IconData(0xe894, L"MaterialIcons");

	/// <i class="material-icons md-36">laptop</i> &#x2014; material icon named "laptop".
	static IconData laptop = IconData(0xe31e, L"MaterialIcons");

	/// <i class="material-icons md-36">laptop_chromebook</i> &#x2014; material icon named "laptop chromebook".
	static IconData laptop_chromebook = IconData(0xe31f, L"MaterialIcons");

	/// <i class="material-icons md-36">laptop_mac</i> &#x2014; material icon named "laptop mac".
	static IconData laptop_mac = IconData(0xe320, L"MaterialIcons");

	/// <i class="material-icons md-36">laptop_windows</i> &#x2014; material icon named "laptop windows".
	static IconData laptop_windows = IconData(0xe321, L"MaterialIcons");

	/// <i class="material-icons md-36">last_page</i> &#x2014; material icon named "last page".
	static IconData last_page = IconData(0xe5dd, L"MaterialIcons", true);

	/// <i class="material-icons md-36">launch</i> &#x2014; material icon named "launch".
	static IconData launch = IconData(0xe895, L"MaterialIcons", true);

	/// <i class="material-icons md-36">layers</i> &#x2014; material icon named "layers".
	static IconData layers = IconData(0xe53b, L"MaterialIcons");

	/// <i class="material-icons md-36">layers_clear</i> &#x2014; material icon named "layers clear".
	static IconData layers_clear = IconData(0xe53c, L"MaterialIcons");

	/// <i class="material-icons md-36">leak_add</i> &#x2014; material icon named "leak add".
	static IconData leak_add = IconData(0xe3f8, L"MaterialIcons");

	/// <i class="material-icons md-36">leak_remove</i> &#x2014; material icon named "leak remove".
	static IconData leak_remove = IconData(0xe3f9, L"MaterialIcons");

	/// <i class="material-icons md-36">lens</i> &#x2014; material icon named "lens".
	static IconData lens = IconData(0xe3fa, L"MaterialIcons");

	/// <i class="material-icons md-36">library_add</i> &#x2014; material icon named "library add".
	static IconData library_add = IconData(0xe02e, L"MaterialIcons");

	/// <i class="material-icons md-36">library_books</i> &#x2014; material icon named "library books".
	static IconData library_books = IconData(0xe02f, L"MaterialIcons");

	/// <i class="material-icons md-36">library_music</i> &#x2014; material icon named "library music".
	static IconData library_music = IconData(0xe030, L"MaterialIcons");

	/// <i class="material-icons md-36">lightbulb_outline</i> &#x2014; material icon named "lightbulb outline".
	static IconData lightbulb_outline = IconData(0xe90f, L"MaterialIcons");

	/// <i class="material-icons md-36">line_style</i> &#x2014; material icon named "line style".
	static IconData line_style = IconData(0xe919, L"MaterialIcons");

	/// <i class="material-icons md-36">line_weight</i> &#x2014; material icon named "line weight".
	static IconData line_weight = IconData(0xe91a, L"MaterialIcons");

	/// <i class="material-icons md-36">linear_scale</i> &#x2014; material icon named "linear scale".
	static IconData linear_scale = IconData(0xe260, L"MaterialIcons");

	/// <i class="material-icons md-36">link</i> &#x2014; material icon named "link".
	static IconData link = IconData(0xe157, L"MaterialIcons");

	/// <i class="material-icons md-36">link_off</i> &#x2014; material icon named "link off".
	static IconData link_off = IconData(0xe16f, L"MaterialIcons");

	/// <i class="material-icons md-36">linked_camera</i> &#x2014; material icon named "linked camera".
	static IconData linked_camera = IconData(0xe438, L"MaterialIcons");

	/// <i class="material-icons md-36">list</i> &#x2014; material icon named "list".
	static IconData list = IconData(0xe896, L"MaterialIcons", true);

	/// <i class="material-icons md-36">live_help</i> &#x2014; material icon named "live help".
	static IconData live_help = IconData(0xe0c6, L"MaterialIcons", true);

	/// <i class="material-icons md-36">live_tv</i> &#x2014; material icon named "live tv".
	static IconData live_tv = IconData(0xe639, L"MaterialIcons");

	/// <i class="material-icons md-36">local_activity</i> &#x2014; material icon named "local activity".
	static IconData local_activity = IconData(0xe53f, L"MaterialIcons");

	/// <i class="material-icons md-36">local_airport</i> &#x2014; material icon named "local airport".
	static IconData local_airport = IconData(0xe53d, L"MaterialIcons");

	/// <i class="material-icons md-36">local_atm</i> &#x2014; material icon named "local atm".
	static IconData local_atm = IconData(0xe53e, L"MaterialIcons");

	/// <i class="material-icons md-36">local_bar</i> &#x2014; material icon named "local bar".
	static IconData local_bar = IconData(0xe540, L"MaterialIcons");

	/// <i class="material-icons md-36">local_cafe</i> &#x2014; material icon named "local cafe".
	static IconData local_cafe = IconData(0xe541, L"MaterialIcons");

	/// <i class="material-icons md-36">local_car_wash</i> &#x2014; material icon named "local car wash".
	static IconData local_car_wash = IconData(0xe542, L"MaterialIcons");

	/// <i class="material-icons md-36">local_convenience_store</i> &#x2014; material icon named "local convenience store".
	static IconData local_convenience_store = IconData(0xe543, L"MaterialIcons");

	/// <i class="material-icons md-36">local_dining</i> &#x2014; material icon named "local dining".
	static IconData local_dining = IconData(0xe556, L"MaterialIcons");

	/// <i class="material-icons md-36">local_drink</i> &#x2014; material icon named "local drink".
	static IconData local_drink = IconData(0xe544, L"MaterialIcons");

	/// <i class="material-icons md-36">local_florist</i> &#x2014; material icon named "local florist".
	static IconData local_florist = IconData(0xe545, L"MaterialIcons");

	/// <i class="material-icons md-36">local_gas_station</i> &#x2014; material icon named "local gas station".
	static IconData local_gas_station = IconData(0xe546, L"MaterialIcons");

	/// <i class="material-icons md-36">local_grocery_store</i> &#x2014; material icon named "local grocery store".
	static IconData local_grocery_store = IconData(0xe547, L"MaterialIcons");

	/// <i class="material-icons md-36">local_hospital</i> &#x2014; material icon named "local hospital".
	static IconData local_hospital = IconData(0xe548, L"MaterialIcons");

	/// <i class="material-icons md-36">local_hotel</i> &#x2014; material icon named "local hotel".
	static IconData local_hotel = IconData(0xe549, L"MaterialIcons");

	/// <i class="material-icons md-36">local_laundry_service</i> &#x2014; material icon named "local laundry service".
	static IconData local_laundry_service = IconData(0xe54a, L"MaterialIcons");

	/// <i class="material-icons md-36">local_library</i> &#x2014; material icon named "local library".
	static IconData local_library = IconData(0xe54b, L"MaterialIcons");

	/// <i class="material-icons md-36">local_mall</i> &#x2014; material icon named "local mall".
	static IconData local_mall = IconData(0xe54c, L"MaterialIcons");

	/// <i class="material-icons md-36">local_movies</i> &#x2014; material icon named "local movies".
	static IconData local_movies = IconData(0xe54d, L"MaterialIcons");

	/// <i class="material-icons md-36">local_offer</i> &#x2014; material icon named "local offer".
	static IconData local_offer = IconData(0xe54e, L"MaterialIcons");

	/// <i class="material-icons md-36">local_parking</i> &#x2014; material icon named "local parking".
	static IconData local_parking = IconData(0xe54f, L"MaterialIcons");

	/// <i class="material-icons md-36">local_pharmacy</i> &#x2014; material icon named "local pharmacy".
	static IconData local_pharmacy = IconData(0xe550, L"MaterialIcons");

	/// <i class="material-icons md-36">local_phone</i> &#x2014; material icon named "local phone".
	static IconData local_phone = IconData(0xe551, L"MaterialIcons");

	/// <i class="material-icons md-36">local_pizza</i> &#x2014; material icon named "local pizza".
	static IconData local_pizza = IconData(0xe552, L"MaterialIcons");

	/// <i class="material-icons md-36">local_play</i> &#x2014; material icon named "local play".
	static IconData local_play = IconData(0xe553, L"MaterialIcons");

	/// <i class="material-icons md-36">local_post_office</i> &#x2014; material icon named "local post office".
	static IconData local_post_office = IconData(0xe554, L"MaterialIcons");

	/// <i class="material-icons md-36">local_printshop</i> &#x2014; material icon named "local printshop".
	static IconData local_printshop = IconData(0xe555, L"MaterialIcons");

	/// <i class="material-icons md-36">local_see</i> &#x2014; material icon named "local see".
	static IconData local_see = IconData(0xe557, L"MaterialIcons");

	/// <i class="material-icons md-36">local_shipping</i> &#x2014; material icon named "local shipping".
	static IconData local_shipping = IconData(0xe558, L"MaterialIcons");

	/// <i class="material-icons md-36">local_taxi</i> &#x2014; material icon named "local taxi".
	static IconData local_taxi = IconData(0xe559, L"MaterialIcons");

	/// <i class="material-icons md-36">location_city</i> &#x2014; material icon named "location city".
	static IconData location_city = IconData(0xe7f1, L"MaterialIcons");

	/// <i class="material-icons md-36">location_disabled</i> &#x2014; material icon named "location disabled".
	static IconData location_disabled = IconData(0xe1b6, L"MaterialIcons");

	/// <i class="material-icons md-36">location_off</i> &#x2014; material icon named "location off".
	static IconData location_off = IconData(0xe0c7, L"MaterialIcons");

	/// <i class="material-icons md-36">location_on</i> &#x2014; material icon named "location on".
	static IconData location_on = IconData(0xe0c8, L"MaterialIcons");

	/// <i class="material-icons md-36">location_searching</i> &#x2014; material icon named "location searching".
	static IconData location_searching = IconData(0xe1b7, L"MaterialIcons");

	/// <i class="material-icons md-36">lock</i> &#x2014; material icon named "lock".
	static IconData lock = IconData(0xe897, L"MaterialIcons");

	/// <i class="material-icons md-36">lock_open</i> &#x2014; material icon named "lock open".
	static IconData lock_open = IconData(0xe898, L"MaterialIcons");

	/// <i class="material-icons md-36">lock_outline</i> &#x2014; material icon named "lock outline".
	static IconData lock_outline = IconData(0xe899, L"MaterialIcons");

	/// <i class="material-icons md-36">looks</i> &#x2014; material icon named "looks".
	static IconData looks = IconData(0xe3fc, L"MaterialIcons");

	/// <i class="material-icons md-36">looks_3</i> &#x2014; material icon named "looks 3".
	static IconData looks_3 = IconData(0xe3fb, L"MaterialIcons");

	/// <i class="material-icons md-36">looks_4</i> &#x2014; material icon named "looks 4".
	static IconData looks_4 = IconData(0xe3fd, L"MaterialIcons");

	/// <i class="material-icons md-36">looks_5</i> &#x2014; material icon named "looks 5".
	static IconData looks_5 = IconData(0xe3fe, L"MaterialIcons");

	/// <i class="material-icons md-36">looks_6</i> &#x2014; material icon named "looks 6".
	static IconData looks_6 = IconData(0xe3ff, L"MaterialIcons");

	/// <i class="material-icons md-36">looks_one</i> &#x2014; material icon named "looks one".
	static IconData looks_one = IconData(0xe400, L"MaterialIcons");

	/// <i class="material-icons md-36">looks_two</i> &#x2014; material icon named "looks two".
	static IconData looks_two = IconData(0xe401, L"MaterialIcons");

	/// <i class="material-icons md-36">loop</i> &#x2014; material icon named "loop".
	static IconData loop = IconData(0xe028, L"MaterialIcons");

	/// <i class="material-icons md-36">loupe</i> &#x2014; material icon named "loupe".
	static IconData loupe = IconData(0xe402, L"MaterialIcons");

	/// <i class="material-icons md-36">low_priority</i> &#x2014; material icon named "low priority".
	static IconData low_priority = IconData(0xe16d, L"MaterialIcons");

	/// <i class="material-icons md-36">loyalty</i> &#x2014; material icon named "loyalty".
	static IconData loyalty = IconData(0xe89a, L"MaterialIcons");

	/// <i class="material-icons md-36">mail</i> &#x2014; material icon named "mail".
	static IconData mail = IconData(0xe158, L"MaterialIcons");

	/// <i class="material-icons md-36">mail_outline</i> &#x2014; material icon named "mail outline".
	static IconData mail_outline = IconData(0xe0e1, L"MaterialIcons");

	/// <i class="material-icons md-36">map</i> &#x2014; material icon named "map".
	static IconData map = IconData(0xe55b, L"MaterialIcons");

	/// <i class="material-icons md-36">markunread</i> &#x2014; material icon named "markunread".
	static IconData markunread = IconData(0xe159, L"MaterialIcons");

	/// <i class="material-icons md-36">markunread_mailbox</i> &#x2014; material icon named "markunread mailbox".
	static IconData markunread_mailbox = IconData(0xe89b, L"MaterialIcons");

	/// <i class="material-icons md-36">maximize</i> &#x2014; material icon named "maximize".
	static IconData maximize = IconData(0xe930, L"MaterialIcons");

	/// <i class="material-icons md-36">memory</i> &#x2014; material icon named "memory".
	static IconData memory = IconData(0xe322, L"MaterialIcons");

	/// <i class="material-icons md-36">menu</i> &#x2014; material icon named "menu".
	static IconData menu = IconData(0xe5d2, L"MaterialIcons");

	/// <i class="material-icons md-36">merge_type</i> &#x2014; material icon named "merge type".
	static IconData merge_type = IconData(0xe252, L"MaterialIcons");

	/// <i class="material-icons md-36">message</i> &#x2014; material icon named "message".
	static IconData message = IconData(0xe0c9, L"MaterialIcons");

	/// <i class="material-icons md-36">mic</i> &#x2014; material icon named "mic".
	static IconData mic = IconData(0xe029, L"MaterialIcons");

	/// <i class="material-icons md-36">mic_none</i> &#x2014; material icon named "mic none".
	static IconData mic_none = IconData(0xe02a, L"MaterialIcons");

	/// <i class="material-icons md-36">mic_off</i> &#x2014; material icon named "mic off".
	static IconData mic_off = IconData(0xe02b, L"MaterialIcons");

	/// <i class="material-icons md-36">minimize</i> &#x2014; material icon named "minimize".
	static IconData minimize = IconData(0xe931, L"MaterialIcons");

	/// <i class="material-icons md-36">missed_video_call</i> &#x2014; material icon named "missed video call".
	static IconData missed_video_call = IconData(0xe073, L"MaterialIcons");

	/// <i class="material-icons md-36">mms</i> &#x2014; material icon named "mms".
	static IconData mms = IconData(0xe618, L"MaterialIcons");

	/// <i class="material-icons md-36">mobile_screen_share</i> &#x2014; material icon named "mobile screen share".
	static IconData mobile_screen_share = IconData(0xe0e7, L"MaterialIcons", true);

	/// <i class="material-icons md-36">mode_comment</i> &#x2014; material icon named "mode comment".
	static IconData mode_comment = IconData(0xe253, L"MaterialIcons");

	/// <i class="material-icons md-36">mode_edit</i> &#x2014; material icon named "mode edit".
	static IconData mode_edit = IconData(0xe254, L"MaterialIcons");

	/// <i class="material-icons md-36">monetization_on</i> &#x2014; material icon named "monetization on".
	static IconData monetization_on = IconData(0xe263, L"MaterialIcons");

	/// <i class="material-icons md-36">money_off</i> &#x2014; material icon named "money off".
	static IconData money_off = IconData(0xe25c, L"MaterialIcons");

	/// <i class="material-icons md-36">monochrome_photos</i> &#x2014; material icon named "monochrome photos".
	static IconData monochrome_photos = IconData(0xe403, L"MaterialIcons");

	/// <i class="material-icons md-36">mood</i> &#x2014; material icon named "mood".
	static IconData mood = IconData(0xe7f2, L"MaterialIcons");

	/// <i class="material-icons md-36">mood_bad</i> &#x2014; material icon named "mood bad".
	static IconData mood_bad = IconData(0xe7f3, L"MaterialIcons");

	/// <i class="material-icons md-36">more</i> &#x2014; material icon named "more".
	static IconData more = IconData(0xe619, L"MaterialIcons");

	/// <i class="material-icons md-36">more_horiz</i> &#x2014; material icon named "more horiz".
	static IconData more_horiz = IconData(0xe5d3, L"MaterialIcons");

	/// <i class="material-icons md-36">more_vert</i> &#x2014; material icon named "more vert".
	static IconData more_vert = IconData(0xe5d4, L"MaterialIcons");

	/// <i class="material-icons md-36">motorcycle</i> &#x2014; material icon named "motorcycle".
	static IconData motorcycle = IconData(0xe91b, L"MaterialIcons");

	/// <i class="material-icons md-36">mouse</i> &#x2014; material icon named "mouse".
	static IconData mouse = IconData(0xe323, L"MaterialIcons");

	/// <i class="material-icons md-36">move_to_inbox</i> &#x2014; material icon named "move to inbox".
	static IconData move_to_inbox = IconData(0xe168, L"MaterialIcons");

	/// <i class="material-icons md-36">movie</i> &#x2014; material icon named "movie".
	static IconData movie = IconData(0xe02c, L"MaterialIcons");

	/// <i class="material-icons md-36">movie_creation</i> &#x2014; material icon named "movie creation".
	static IconData movie_creation = IconData(0xe404, L"MaterialIcons");

	/// <i class="material-icons md-36">movie_filter</i> &#x2014; material icon named "movie filter".
	static IconData movie_filter = IconData(0xe43a, L"MaterialIcons");

	/// <i class="material-icons md-36">multiline_chart</i> &#x2014; material icon named "multiline chart".
	static IconData multiline_chart = IconData(0xe6df, L"MaterialIcons", true);

	/// <i class="material-icons md-36">music_note</i> &#x2014; material icon named "music note".
	static IconData music_note = IconData(0xe405, L"MaterialIcons");

	/// <i class="material-icons md-36">music_video</i> &#x2014; material icon named "music video".
	static IconData music_video = IconData(0xe063, L"MaterialIcons");

	/// <i class="material-icons md-36">my_location</i> &#x2014; material icon named "my location".
	static IconData my_location = IconData(0xe55c, L"MaterialIcons");

	/// <i class="material-icons md-36">nature</i> &#x2014; material icon named "nature".
	static IconData nature = IconData(0xe406, L"MaterialIcons");

	/// <i class="material-icons md-36">nature_people</i> &#x2014; material icon named "nature people".
	static IconData nature_people = IconData(0xe407, L"MaterialIcons");

	/// <i class="material-icons md-36">navigate_before</i> &#x2014; material icon named "navigate before".
	static IconData navigate_before = IconData(0xe408, L"MaterialIcons", true);

	/// <i class="material-icons md-36">navigate_next</i> &#x2014; material icon named "navigate next".
	static IconData navigate_next = IconData(0xe409, L"MaterialIcons", true);

	/// <i class="material-icons md-36">navigation</i> &#x2014; material icon named "navigation".
	static IconData navigation = IconData(0xe55d, L"MaterialIcons");

	/// <i class="material-icons md-36">near_me</i> &#x2014; material icon named "near me".
	static IconData near_me = IconData(0xe569, L"MaterialIcons");

	/// <i class="material-icons md-36">network_cell</i> &#x2014; material icon named "network cell".
	static IconData network_cell = IconData(0xe1b9, L"MaterialIcons");

	/// <i class="material-icons md-36">network_check</i> &#x2014; material icon named "network check".
	static IconData network_check = IconData(0xe640, L"MaterialIcons");

	/// <i class="material-icons md-36">network_locked</i> &#x2014; material icon named "network locked".
	static IconData network_locked = IconData(0xe61a, L"MaterialIcons");

	/// <i class="material-icons md-36">network_wifi</i> &#x2014; material icon named "network wifi".
	static IconData network_wifi = IconData(0xe1ba, L"MaterialIcons");

	/// <i class="material-icons md-36">new_releases</i> &#x2014; material icon named "new releases".
	static IconData new_releases = IconData(0xe031, L"MaterialIcons");

	/// <i class="material-icons md-36">next_week</i> &#x2014; material icon named "next week".
	static IconData next_week = IconData(0xe16a, L"MaterialIcons", true);

	/// <i class="material-icons md-36">nfc</i> &#x2014; material icon named "nfc".
	static IconData nfc = IconData(0xe1bb, L"MaterialIcons");

	/// <i class="material-icons md-36">no_encryption</i> &#x2014; material icon named "no encryption".
	static IconData no_encryption = IconData(0xe641, L"MaterialIcons");

	/// <i class="material-icons md-36">no_sim</i> &#x2014; material icon named "no sim".
	static IconData no_sim = IconData(0xe0cc, L"MaterialIcons");

	/// <i class="material-icons md-36">not_interested</i> &#x2014; material icon named "not interested".
	static IconData not_interested = IconData(0xe033, L"MaterialIcons");

	/// <i class="material-icons md-36">not_listed_location</i> &#x2014; material icon named "not listed location".
	static IconData not_listed_location = IconData(0xe575, L"MaterialIcons");

	/// <i class="material-icons md-36">note</i> &#x2014; material icon named "note".
	static IconData note = IconData(0xe06f, L"MaterialIcons", true);

	/// <i class="material-icons md-36">note_add</i> &#x2014; material icon named "note add".
	static IconData note_add = IconData(0xe89c, L"MaterialIcons");

	/// <i class="material-icons md-36">notification_important</i> &#x2014; material icon named "notification important".
	static IconData notification_important = IconData(0xe004, L"MaterialIcons");

	/// <i class="material-icons md-36">notifications</i> &#x2014; material icon named "notifications".
	static IconData notifications = IconData(0xe7f4, L"MaterialIcons");

	/// <i class="material-icons md-36">notifications_active</i> &#x2014; material icon named "notifications active".
	static IconData notifications_active = IconData(0xe7f7, L"MaterialIcons");

	/// <i class="material-icons md-36">notifications_none</i> &#x2014; material icon named "notifications none".
	static IconData notifications_none = IconData(0xe7f5, L"MaterialIcons");

	/// <i class="material-icons md-36">notifications_off</i> &#x2014; material icon named "notifications off".
	static IconData notifications_off = IconData(0xe7f6, L"MaterialIcons");

	/// <i class="material-icons md-36">notifications_paused</i> &#x2014; material icon named "notifications paused".
	static IconData notifications_paused = IconData(0xe7f8, L"MaterialIcons");

	/// <i class="material-icons md-36">offline_bolt</i> &#x2014; material icon named "offline bolt".
	static IconData offline_bolt = IconData(0xe932, L"MaterialIcons");

	/// <i class="material-icons md-36">offline_pin</i> &#x2014; material icon named "offline pin".
	static IconData offline_pin = IconData(0xe90a, L"MaterialIcons");

	/// <i class="material-icons md-36">ondemand_video</i> &#x2014; material icon named "ondemand video".
	static IconData ondemand_video = IconData(0xe63a, L"MaterialIcons");

	/// <i class="material-icons md-36">opacity</i> &#x2014; material icon named "opacity".
	static IconData opacity = IconData(0xe91c, L"MaterialIcons");

	/// <i class="material-icons md-36">open_in_browser</i> &#x2014; material icon named "open in browser".
	static IconData open_in_browser = IconData(0xe89d, L"MaterialIcons");

	/// <i class="material-icons md-36">open_in_new</i> &#x2014; material icon named "open in new".
	static IconData open_in_new = IconData(0xe89e, L"MaterialIcons", true);

	/// <i class="material-icons md-36">open_with</i> &#x2014; material icon named "open with".
	static IconData open_with = IconData(0xe89f, L"MaterialIcons");

	/// <i class="material-icons md-36">outlined_flag</i> &#x2014; material icon named "outlined flag".
	static IconData outlined_flag = IconData(0xe16e, L"MaterialIcons");

	/// <i class="material-icons md-36">pages</i> &#x2014; material icon named "pages".
	static IconData pages = IconData(0xe7f9, L"MaterialIcons");

	/// <i class="material-icons md-36">pageview</i> &#x2014; material icon named "pageview".
	static IconData pageview = IconData(0xe8a0, L"MaterialIcons");

	/// <i class="material-icons md-36">palette</i> &#x2014; material icon named "palette".
	static IconData palette = IconData(0xe40a, L"MaterialIcons");

	/// <i class="material-icons md-36">pan_tool</i> &#x2014; material icon named "pan tool".
	static IconData pan_tool = IconData(0xe925, L"MaterialIcons");

	/// <i class="material-icons md-36">panorama</i> &#x2014; material icon named "panorama".
	static IconData panorama = IconData(0xe40b, L"MaterialIcons");

	/// <i class="material-icons md-36">panorama_fish_eye</i> &#x2014; material icon named "panorama fish eye".
	static IconData panorama_fish_eye = IconData(0xe40c, L"MaterialIcons");

	/// <i class="material-icons md-36">panorama_horizontal</i> &#x2014; material icon named "panorama horizontal".
	static IconData panorama_horizontal = IconData(0xe40d, L"MaterialIcons");

	/// <i class="material-icons md-36">panorama_vertical</i> &#x2014; material icon named "panorama vertical".
	static IconData panorama_vertical = IconData(0xe40e, L"MaterialIcons");

	/// <i class="material-icons md-36">panorama_wide_angle</i> &#x2014; material icon named "panorama wide angle".
	static IconData panorama_wide_angle = IconData(0xe40f, L"MaterialIcons");

	/// <i class="material-icons md-36">party_mode</i> &#x2014; material icon named "party mode".
	static IconData party_mode = IconData(0xe7fa, L"MaterialIcons");

	/// <i class="material-icons md-36">pause</i> &#x2014; material icon named "pause".
	static IconData pause = IconData(0xe034, L"MaterialIcons");

	/// <i class="material-icons md-36">pause_circle_filled</i> &#x2014; material icon named "pause circle filled".
	static IconData pause_circle_filled = IconData(0xe035, L"MaterialIcons");

	/// <i class="material-icons md-36">pause_circle_outline</i> &#x2014; material icon named "pause circle outline".
	static IconData pause_circle_outline = IconData(0xe036, L"MaterialIcons");

	/// <i class="material-icons md-36">payment</i> &#x2014; material icon named "payment".
	static IconData payment = IconData(0xe8a1, L"MaterialIcons");

	/// <i class="material-icons md-36">people</i> &#x2014; material icon named "people".
	static IconData people = IconData(0xe7fb, L"MaterialIcons");

	/// <i class="material-icons md-36">people_outline</i> &#x2014; material icon named "people outline".
	static IconData people_outline = IconData(0xe7fc, L"MaterialIcons");

	/// <i class="material-icons md-36">perm_camera_mic</i> &#x2014; material icon named "perm camera mic".
	static IconData perm_camera_mic = IconData(0xe8a2, L"MaterialIcons");

	/// <i class="material-icons md-36">perm_contact_calendar</i> &#x2014; material icon named "perm contact calendar".
	static IconData perm_contact_calendar = IconData(0xe8a3, L"MaterialIcons");

	/// <i class="material-icons md-36">perm_data_setting</i> &#x2014; material icon named "perm data setting".
	static IconData perm_data_setting = IconData(0xe8a4, L"MaterialIcons");

	/// <i class="material-icons md-36">perm_device_information</i> &#x2014; material icon named "perm device information".
	static IconData perm_device_information = IconData(0xe8a5, L"MaterialIcons");

	/// <i class="material-icons md-36">perm_identity</i> &#x2014; material icon named "perm identity".
	static IconData perm_identity = IconData(0xe8a6, L"MaterialIcons");

	/// <i class="material-icons md-36">perm_media</i> &#x2014; material icon named "perm media".
	static IconData perm_media = IconData(0xe8a7, L"MaterialIcons");

	/// <i class="material-icons md-36">perm_phone_msg</i> &#x2014; material icon named "perm phone msg".
	static IconData perm_phone_msg = IconData(0xe8a8, L"MaterialIcons");

	/// <i class="material-icons md-36">perm_scan_wifi</i> &#x2014; material icon named "perm scan wifi".
	static IconData perm_scan_wifi = IconData(0xe8a9, L"MaterialIcons");

	/// <i class="material-icons md-36">person</i> &#x2014; material icon named "person".
	static IconData person = IconData(0xe7fd, L"MaterialIcons");

	/// <i class="material-icons md-36">person_add</i> &#x2014; material icon named "person add".
	static IconData person_add = IconData(0xe7fe, L"MaterialIcons");

	/// <i class="material-icons md-36">person_outline</i> &#x2014; material icon named "person outline".
	static IconData person_outline = IconData(0xe7ff, L"MaterialIcons");

	/// <i class="material-icons md-36">person_pin</i> &#x2014; material icon named "person pin".
	static IconData person_pin = IconData(0xe55a, L"MaterialIcons");

	/// <i class="material-icons md-36">person_pin_circle</i> &#x2014; material icon named "person pin circle".
	static IconData person_pin_circle = IconData(0xe56a, L"MaterialIcons");

	/// <i class="material-icons md-36">personal_video</i> &#x2014; material icon named "personal video".
	static IconData personal_video = IconData(0xe63b, L"MaterialIcons");

	/// <i class="material-icons md-36">pets</i> &#x2014; material icon named "pets".
	static IconData pets = IconData(0xe91d, L"MaterialIcons");

	/// <i class="material-icons md-36">phone</i> &#x2014; material icon named "phone".
	static IconData phone = IconData(0xe0cd, L"MaterialIcons");

	/// <i class="material-icons md-36">phone_android</i> &#x2014; material icon named "phone android".
	static IconData phone_android = IconData(0xe324, L"MaterialIcons");

	/// <i class="material-icons md-36">phone_bluetooth_speaker</i> &#x2014; material icon named "phone bluetooth speaker".
	static IconData phone_bluetooth_speaker = IconData(0xe61b, L"MaterialIcons");

	/// <i class="material-icons md-36">phone_forwarded</i> &#x2014; material icon named "phone forwarded".
	static IconData phone_forwarded = IconData(0xe61c, L"MaterialIcons");

	/// <i class="material-icons md-36">phone_in_talk</i> &#x2014; material icon named "phone in talk".
	static IconData phone_in_talk = IconData(0xe61d, L"MaterialIcons");

	/// <i class="material-icons md-36">phone_iphone</i> &#x2014; material icon named "phone iphone".
	static IconData phone_iphone = IconData(0xe325, L"MaterialIcons");

	/// <i class="material-icons md-36">phone_locked</i> &#x2014; material icon named "phone locked".
	static IconData phone_locked = IconData(0xe61e, L"MaterialIcons");

	/// <i class="material-icons md-36">phone_missed</i> &#x2014; material icon named "phone missed".
	static IconData phone_missed = IconData(0xe61f, L"MaterialIcons");

	/// <i class="material-icons md-36">phone_paused</i> &#x2014; material icon named "phone paused".
	static IconData phone_paused = IconData(0xe620, L"MaterialIcons");

	/// <i class="material-icons md-36">phonelink</i> &#x2014; material icon named "phonelink".
	static IconData phonelink = IconData(0xe326, L"MaterialIcons");

	/// <i class="material-icons md-36">phonelink_erase</i> &#x2014; material icon named "phonelink erase".
	static IconData phonelink_erase = IconData(0xe0db, L"MaterialIcons");

	/// <i class="material-icons md-36">phonelink_lock</i> &#x2014; material icon named "phonelink lock".
	static IconData phonelink_lock = IconData(0xe0dc, L"MaterialIcons");

	/// <i class="material-icons md-36">phonelink_off</i> &#x2014; material icon named "phonelink off".
	static IconData phonelink_off = IconData(0xe327, L"MaterialIcons");

	/// <i class="material-icons md-36">phonelink_ring</i> &#x2014; material icon named "phonelink ring".
	static IconData phonelink_ring = IconData(0xe0dd, L"MaterialIcons");

	/// <i class="material-icons md-36">phonelink_setup</i> &#x2014; material icon named "phonelink setup".
	static IconData phonelink_setup = IconData(0xe0de, L"MaterialIcons");

	/// <i class="material-icons md-36">photo</i> &#x2014; material icon named "photo".
	static IconData photo = IconData(0xe410, L"MaterialIcons");

	/// <i class="material-icons md-36">photo_album</i> &#x2014; material icon named "photo album".
	static IconData photo_album = IconData(0xe411, L"MaterialIcons");

	/// <i class="material-icons md-36">photo_camera</i> &#x2014; material icon named "photo camera".
	static IconData photo_camera = IconData(0xe412, L"MaterialIcons");

	/// <i class="material-icons md-36">photo_filter</i> &#x2014; material icon named "photo filter".
	static IconData photo_filter = IconData(0xe43b, L"MaterialIcons");

	/// <i class="material-icons md-36">photo_library</i> &#x2014; material icon named "photo library".
	static IconData photo_library = IconData(0xe413, L"MaterialIcons");

	/// <i class="material-icons md-36">photo_size_select_actual</i> &#x2014; material icon named "photo size select actual".
	static IconData photo_size_select_actual = IconData(0xe432, L"MaterialIcons");

	/// <i class="material-icons md-36">photo_size_select_large</i> &#x2014; material icon named "photo size select large".
	static IconData photo_size_select_large = IconData(0xe433, L"MaterialIcons");

	/// <i class="material-icons md-36">photo_size_select_small</i> &#x2014; material icon named "photo size select small".
	static IconData photo_size_select_small = IconData(0xe434, L"MaterialIcons");

	/// <i class="material-icons md-36">picture_as_pdf</i> &#x2014; material icon named "picture as pdf".
	static IconData picture_as_pdf = IconData(0xe415, L"MaterialIcons");

	/// <i class="material-icons md-36">picture_in_picture</i> &#x2014; material icon named "picture in picture".
	static IconData picture_in_picture = IconData(0xe8aa, L"MaterialIcons");

	/// <i class="material-icons md-36">picture_in_picture_alt</i> &#x2014; material icon named "picture in picture alt".
	static IconData picture_in_picture_alt = IconData(0xe911, L"MaterialIcons");

	/// <i class="material-icons md-36">pie_chart</i> &#x2014; material icon named "pie chart".
	static IconData pie_chart = IconData(0xe6c4, L"MaterialIcons");

	/// <i class="material-icons md-36">pie_chart_outlined</i> &#x2014; material icon named "pie chart outlined".
	static IconData pie_chart_outlined = IconData(0xe6c5, L"MaterialIcons");

	/// <i class="material-icons md-36">pin_drop</i> &#x2014; material icon named "pin drop".
	static IconData pin_drop = IconData(0xe55e, L"MaterialIcons");

	/// <i class="material-icons md-36">place</i> &#x2014; material icon named "place".
	static IconData place = IconData(0xe55f, L"MaterialIcons");

	/// <i class="material-icons md-36">play_arrow</i> &#x2014; material icon named "play arrow".
	static IconData play_arrow = IconData(0xe037, L"MaterialIcons");

	/// <i class="material-icons md-36">play_circle_filled</i> &#x2014; material icon named "play circle filled".
	static IconData play_circle_filled = IconData(0xe038, L"MaterialIcons");

	/// <i class="material-icons md-36">play_circle_outline</i> &#x2014; material icon named "play circle outline".
	static IconData play_circle_outline = IconData(0xe039, L"MaterialIcons");

	/// <i class="material-icons md-36">play_for_work</i> &#x2014; material icon named "play for work".
	static IconData play_for_work = IconData(0xe906, L"MaterialIcons");

	/// <i class="material-icons md-36">playlist_add</i> &#x2014; material icon named "playlist add".
	static IconData playlist_add = IconData(0xe03b, L"MaterialIcons", true);

	/// <i class="material-icons md-36">playlist_add_check</i> &#x2014; material icon named "playlist add check".
	static IconData playlist_add_check = IconData(0xe065, L"MaterialIcons");

	/// <i class="material-icons md-36">playlist_play</i> &#x2014; material icon named "playlist play".
	static IconData playlist_play = IconData(0xe05f, L"MaterialIcons");

	/// <i class="material-icons md-36">plus_one</i> &#x2014; material icon named "plus one".
	static IconData plus_one = IconData(0xe800, L"MaterialIcons");

	/// <i class="material-icons md-36">poll</i> &#x2014; material icon named "poll".
	static IconData poll = IconData(0xe801, L"MaterialIcons");

	/// <i class="material-icons md-36">polymer</i> &#x2014; material icon named "polymer".
	static IconData polymer = IconData(0xe8ab, L"MaterialIcons");

	/// <i class="material-icons md-36">pool</i> &#x2014; material icon named "pool".
	static IconData pool = IconData(0xeb48, L"MaterialIcons");

	/// <i class="material-icons md-36">portable_wifi_off</i> &#x2014; material icon named "portable wifi off".
	static IconData portable_wifi_off = IconData(0xe0ce, L"MaterialIcons");

	/// <i class="material-icons md-36">portrait</i> &#x2014; material icon named "portrait".
	static IconData portrait = IconData(0xe416, L"MaterialIcons");

	/// <i class="material-icons md-36">power</i> &#x2014; material icon named "power".
	static IconData power = IconData(0xe63c, L"MaterialIcons");

	/// <i class="material-icons md-36">power_input</i> &#x2014; material icon named "power input".
	static IconData power_input = IconData(0xe336, L"MaterialIcons");

	/// <i class="material-icons md-36">power_settings_new</i> &#x2014; material icon named "power settings new".
	static IconData power_settings_new = IconData(0xe8ac, L"MaterialIcons");

	/// <i class="material-icons md-36">pregnant_woman</i> &#x2014; material icon named "pregnant woman".
	static IconData pregnant_woman = IconData(0xe91e, L"MaterialIcons");

	/// <i class="material-icons md-36">present_to_all</i> &#x2014; material icon named "present to all".
	static IconData present_to_all = IconData(0xe0df, L"MaterialIcons");

	/// <i class="material-icons md-36">print</i> &#x2014; material icon named "print".
	static IconData print = IconData(0xe8ad, L"MaterialIcons");

	/// <i class="material-icons md-36">priority_high</i> &#x2014; material icon named "priority high".
	static IconData priority_high = IconData(0xe645, L"MaterialIcons");

	/// <i class="material-icons md-36">public</i> &#x2014; material icon named "public".
	static IconData public_icon = IconData(0xe80b, L"MaterialIcons");

	/// <i class="material-icons md-36">publish</i> &#x2014; material icon named "publish".
	static IconData publish = IconData(0xe255, L"MaterialIcons");

	/// <i class="material-icons md-36">query_builder</i> &#x2014; material icon named "query builder".
	static IconData query_builder = IconData(0xe8ae, L"MaterialIcons");

	/// <i class="material-icons md-36">question_answer</i> &#x2014; material icon named "question answer".
	static IconData question_answer = IconData(0xe8af, L"MaterialIcons");

	/// <i class="material-icons md-36">queue</i> &#x2014; material icon named "queue".
	static IconData queue = IconData(0xe03c, L"MaterialIcons");

	/// <i class="material-icons md-36">queue_music</i> &#x2014; material icon named "queue music".
	static IconData queue_music = IconData(0xe03d, L"MaterialIcons", true);

	/// <i class="material-icons md-36">queue_play_next</i> &#x2014; material icon named "queue play next".
	static IconData queue_play_next = IconData(0xe066, L"MaterialIcons");

	/// <i class="material-icons md-36">radio</i> &#x2014; material icon named "radio".
	static IconData radio = IconData(0xe03e, L"MaterialIcons");

	/// <i class="material-icons md-36">radio_button_checked</i> &#x2014; material icon named "radio button checked".
	static IconData radio_button_checked = IconData(0xe837, L"MaterialIcons");

	/// <i class="material-icons md-36">radio_button_unchecked</i> &#x2014; material icon named "radio button unchecked".
	static IconData radio_button_unchecked = IconData(0xe836, L"MaterialIcons");

	/// <i class="material-icons md-36">rate_review</i> &#x2014; material icon named "rate review".
	static IconData rate_review = IconData(0xe560, L"MaterialIcons");

	/// <i class="material-icons md-36">receipt</i> &#x2014; material icon named "receipt".
	static IconData receipt = IconData(0xe8b0, L"MaterialIcons");

	/// <i class="material-icons md-36">recent_actors</i> &#x2014; material icon named "recent actors".
	static IconData recent_actors = IconData(0xe03f, L"MaterialIcons");

	/// <i class="material-icons md-36">record_voice_over</i> &#x2014; material icon named "record voice over".
	static IconData record_voice_over = IconData(0xe91f, L"MaterialIcons");

	/// <i class="material-icons md-36">redeem</i> &#x2014; material icon named "redeem".
	static IconData redeem = IconData(0xe8b1, L"MaterialIcons");

	/// <i class="material-icons md-36">redo</i> &#x2014; material icon named "redo".
	static IconData redo = IconData(0xe15a, L"MaterialIcons", true);

	/// <i class="material-icons md-36">refresh</i> &#x2014; material icon named "refresh".
	static IconData refresh = IconData(0xe5d5, L"MaterialIcons");

	/// <i class="material-icons md-36">remove</i> &#x2014; material icon named "remove".
	static IconData remove = IconData(0xe15b, L"MaterialIcons");

	/// <i class="material-icons md-36">remove_circle</i> &#x2014; material icon named "remove circle".
	static IconData remove_circle = IconData(0xe15c, L"MaterialIcons");

	/// <i class="material-icons md-36">remove_circle_outline</i> &#x2014; material icon named "remove circle outline".
	static IconData remove_circle_outline = IconData(0xe15d, L"MaterialIcons");

	/// <i class="material-icons md-36">remove_from_queue</i> &#x2014; material icon named "remove from queue".
	static IconData remove_from_queue = IconData(0xe067, L"MaterialIcons");

	/// <i class="material-icons md-36">remove_red_eye</i> &#x2014; material icon named "remove red eye".
	static IconData remove_red_eye = IconData(0xe417, L"MaterialIcons");

	/// <i class="material-icons md-36">remove_shopping_cart</i> &#x2014; material icon named "remove shopping cart".
	static IconData remove_shopping_cart = IconData(0xe928, L"MaterialIcons");

	/// <i class="material-icons md-36">reorder</i> &#x2014; material icon named "reorder".
	static IconData reorder = IconData(0xe8fe, L"MaterialIcons");

	/// <i class="material-icons md-36">repeat</i> &#x2014; material icon named "repeat".
	static IconData repeat = IconData(0xe040, L"MaterialIcons");

	/// <i class="material-icons md-36">repeat_one</i> &#x2014; material icon named "repeat one".
	static IconData repeat_one = IconData(0xe041, L"MaterialIcons");

	/// <i class="material-icons md-36">replay</i> &#x2014; material icon named "replay".
	static IconData replay = IconData(0xe042, L"MaterialIcons");

	/// <i class="material-icons md-36">replay_10</i> &#x2014; material icon named "replay 10".
	static IconData replay_10 = IconData(0xe059, L"MaterialIcons");

	/// <i class="material-icons md-36">replay_30</i> &#x2014; material icon named "replay 30".
	static IconData replay_30 = IconData(0xe05a, L"MaterialIcons");

	/// <i class="material-icons md-36">replay_5</i> &#x2014; material icon named "replay 5".
	static IconData replay_5 = IconData(0xe05b, L"MaterialIcons");

	/// <i class="material-icons md-36">reply</i> &#x2014; material icon named "reply".
	static IconData reply = IconData(0xe15e, L"MaterialIcons", true);

	/// <i class="material-icons md-36">reply_all</i> &#x2014; material icon named "reply all".
	static IconData reply_all = IconData(0xe15f, L"MaterialIcons", true);

	/// <i class="material-icons md-36">report</i> &#x2014; material icon named "report".
	static IconData report = IconData(0xe160, L"MaterialIcons");

	/// <i class="material-icons md-36">report_off</i> &#x2014; material icon named "report off".
	static IconData report_off = IconData(0xe170, L"MaterialIcons");

	/// <i class="material-icons md-36">report_problem</i> &#x2014; material icon named "report problem".
	static IconData report_problem = IconData(0xe8b2, L"MaterialIcons");

	/// <i class="material-icons md-36">restaurant</i> &#x2014; material icon named "restaurant".
	static IconData restaurant = IconData(0xe56c, L"MaterialIcons");

	/// <i class="material-icons md-36">restaurant_menu</i> &#x2014; material icon named "restaurant menu".
	static IconData restaurant_menu = IconData(0xe561, L"MaterialIcons");

	/// <i class="material-icons md-36">restore</i> &#x2014; material icon named "restore".
	static IconData restore = IconData(0xe8b3, L"MaterialIcons");

	/// <i class="material-icons md-36">restore_from_trash</i> &#x2014; material icon named "restore from trash".
	static IconData restore_from_trash = IconData(0xe938, L"MaterialIcons");

	/// <i class="material-icons md-36">restore_page</i> &#x2014; material icon named "restore page".
	static IconData restore_page = IconData(0xe929, L"MaterialIcons");

	/// <i class="material-icons md-36">ring_volume</i> &#x2014; material icon named "ring volume".
	static IconData ring_volume = IconData(0xe0d1, L"MaterialIcons");

	/// <i class="material-icons md-36">room</i> &#x2014; material icon named "room".
	static IconData room = IconData(0xe8b4, L"MaterialIcons");

	/// <i class="material-icons md-36">room_service</i> &#x2014; material icon named "room service".
	static IconData room_service = IconData(0xeb49, L"MaterialIcons");

	/// <i class="material-icons md-36">rotate_90_degrees_ccw</i> &#x2014; material icon named "rotate 90 degrees ccw".
	static IconData rotate_90_degrees_ccw = IconData(0xe418, L"MaterialIcons");

	/// <i class="material-icons md-36">rotate_left</i> &#x2014; material icon named "rotate left".
	static IconData rotate_left = IconData(0xe419, L"MaterialIcons");

	/// <i class="material-icons md-36">rotate_right</i> &#x2014; material icon named "rotate right".
	static IconData rotate_right = IconData(0xe41a, L"MaterialIcons");

	/// <i class="material-icons md-36">rounded_corner</i> &#x2014; material icon named "rounded corner".
	static IconData rounded_corner = IconData(0xe920, L"MaterialIcons");

	/// <i class="material-icons md-36">router</i> &#x2014; material icon named "router".
	static IconData router = IconData(0xe328, L"MaterialIcons");

	/// <i class="material-icons md-36">rowing</i> &#x2014; material icon named "rowing".
	static IconData rowing = IconData(0xe921, L"MaterialIcons");

	/// <i class="material-icons md-36">rss_feed</i> &#x2014; material icon named "rss feed".
	static IconData rss_feed = IconData(0xe0e5, L"MaterialIcons");

	/// <i class="material-icons md-36">rv_hookup</i> &#x2014; material icon named "rv hookup".
	static IconData rv_hookup = IconData(0xe642, L"MaterialIcons");

	/// <i class="material-icons md-36">satellite</i> &#x2014; material icon named "satellite".
	static IconData satellite = IconData(0xe562, L"MaterialIcons");

	/// <i class="material-icons md-36">save</i> &#x2014; material icon named "save".
	static IconData save = IconData(0xe161, L"MaterialIcons");

	/// <i class="material-icons md-36">save_alt</i> &#x2014; material icon named "save alt".
	static IconData save_alt = IconData(0xe171, L"MaterialIcons");

	/// <i class="material-icons md-36">scanner</i> &#x2014; material icon named "scanner".
	static IconData scanner = IconData(0xe329, L"MaterialIcons");

	/// <i class="material-icons md-36">scatter_plot</i> &#x2014; material icon named "scatter plot".
	static IconData scatter_plot = IconData(0xe268, L"MaterialIcons");

	/// <i class="material-icons md-36">schedule</i> &#x2014; material icon named "schedule".
	static IconData schedule = IconData(0xe8b5, L"MaterialIcons");

	/// <i class="material-icons md-36">school</i> &#x2014; material icon named "school".
	static IconData school = IconData(0xe80c, L"MaterialIcons");

	/// <i class="material-icons md-36">score</i> &#x2014; material icon named "score".
	static IconData score = IconData(0xe269, L"MaterialIcons");

	/// <i class="material-icons md-36">screen_lock_landscape</i> &#x2014; material icon named "screen lock landscape".
	static IconData screen_lock_landscape = IconData(0xe1be, L"MaterialIcons");

	/// <i class="material-icons md-36">screen_lock_portrait</i> &#x2014; material icon named "screen lock portrait".
	static IconData screen_lock_portrait = IconData(0xe1bf, L"MaterialIcons");

	/// <i class="material-icons md-36">screen_lock_rotation</i> &#x2014; material icon named "screen lock rotation".
	static IconData screen_lock_rotation = IconData(0xe1c0, L"MaterialIcons");

	/// <i class="material-icons md-36">screen_rotation</i> &#x2014; material icon named "screen rotation".
	static IconData screen_rotation = IconData(0xe1c1, L"MaterialIcons");

	/// <i class="material-icons md-36">screen_share</i> &#x2014; material icon named "screen share".
	static IconData screen_share = IconData(0xe0e2, L"MaterialIcons", true);

	/// <i class="material-icons md-36">sd_card</i> &#x2014; material icon named "sd card".
	static IconData sd_card = IconData(0xe623, L"MaterialIcons");

	/// <i class="material-icons md-36">sd_storage</i> &#x2014; material icon named "sd storage".
	static IconData sd_storage = IconData(0xe1c2, L"MaterialIcons");

	/// <i class="material-icons md-36">search</i> &#x2014; material icon named "search".
	static IconData search = IconData(0xe8b6, L"MaterialIcons");

	/// <i class="material-icons md-36">security</i> &#x2014; material icon named "security".
	static IconData security = IconData(0xe32a, L"MaterialIcons");

	/// <i class="material-icons md-36">select_all</i> &#x2014; material icon named "select all".
	static IconData select_all = IconData(0xe162, L"MaterialIcons");

	/// <i class="material-icons md-36">send</i> &#x2014; material icon named "send".
	static IconData send = IconData(0xe163, L"MaterialIcons", true);

	/// <i class="material-icons md-36">sentiment_dissatisfied</i> &#x2014; material icon named "sentiment dissatisfied".
	static IconData sentiment_dissatisfied = IconData(0xe811, L"MaterialIcons");

	/// <i class="material-icons md-36">sentiment_neutral</i> &#x2014; material icon named "sentiment neutral".
	static IconData sentiment_neutral = IconData(0xe812, L"MaterialIcons");

	/// <i class="material-icons md-36">sentiment_satisfied</i> &#x2014; material icon named "sentiment satisfied".
	static IconData sentiment_satisfied = IconData(0xe813, L"MaterialIcons");

	/// <i class="material-icons md-36">sentiment_very_dissatisfied</i> &#x2014; material icon named "sentiment very dissatisfied".
	static IconData sentiment_very_dissatisfied = IconData(0xe814, L"MaterialIcons");

	/// <i class="material-icons md-36">sentiment_very_satisfied</i> &#x2014; material icon named "sentiment very satisfied".
	static IconData sentiment_very_satisfied = IconData(0xe815, L"MaterialIcons");

	/// <i class="material-icons md-36">settings</i> &#x2014; material icon named "settings".
	static IconData settings = IconData(0xe8b8, L"MaterialIcons");

	/// <i class="material-icons md-36">settings_applications</i> &#x2014; material icon named "settings applications".
	static IconData settings_applications = IconData(0xe8b9, L"MaterialIcons");

	/// <i class="material-icons md-36">settings_backup_restore</i> &#x2014; material icon named "settings backup restore".
	static IconData settings_backup_restore = IconData(0xe8ba, L"MaterialIcons");

	/// <i class="material-icons md-36">settings_bluetooth</i> &#x2014; material icon named "settings bluetooth".
	static IconData settings_bluetooth = IconData(0xe8bb, L"MaterialIcons");

	/// <i class="material-icons md-36">settings_brightness</i> &#x2014; material icon named "settings brightness".
	static IconData settings_brightness = IconData(0xe8bd, L"MaterialIcons");

	/// <i class="material-icons md-36">settings_cell</i> &#x2014; material icon named "settings cell".
	static IconData settings_cell = IconData(0xe8bc, L"MaterialIcons");

	/// <i class="material-icons md-36">settings_ethernet</i> &#x2014; material icon named "settings ethernet".
	static IconData settings_ethernet = IconData(0xe8be, L"MaterialIcons");

	/// <i class="material-icons md-36">settings_input_antenna</i> &#x2014; material icon named "settings input antenna".
	static IconData settings_input_antenna = IconData(0xe8bf, L"MaterialIcons");

	/// <i class="material-icons md-36">settings_input_component</i> &#x2014; material icon named "settings input component".
	static IconData settings_input_component = IconData(0xe8c0, L"MaterialIcons");

	/// <i class="material-icons md-36">settings_input_composite</i> &#x2014; material icon named "settings input composite".
	static IconData settings_input_composite = IconData(0xe8c1, L"MaterialIcons");

	/// <i class="material-icons md-36">settings_input_hdmi</i> &#x2014; material icon named "settings input hdmi".
	static IconData settings_input_hdmi = IconData(0xe8c2, L"MaterialIcons");

	/// <i class="material-icons md-36">settings_input_svideo</i> &#x2014; material icon named "settings input svideo".
	static IconData settings_input_svideo = IconData(0xe8c3, L"MaterialIcons");

	/// <i class="material-icons md-36">settings_overscan</i> &#x2014; material icon named "settings overscan".
	static IconData settings_overscan = IconData(0xe8c4, L"MaterialIcons");

	/// <i class="material-icons md-36">settings_phone</i> &#x2014; material icon named "settings phone".
	static IconData settings_phone = IconData(0xe8c5, L"MaterialIcons");

	/// <i class="material-icons md-36">settings_power</i> &#x2014; material icon named "settings power".
	static IconData settings_power = IconData(0xe8c6, L"MaterialIcons");

	/// <i class="material-icons md-36">settings_remote</i> &#x2014; material icon named "settings remote".
	static IconData settings_remote = IconData(0xe8c7, L"MaterialIcons");

	/// <i class="material-icons md-36">settings_system_daydream</i> &#x2014; material icon named "settings system daydream".
	static IconData settings_system_daydream = IconData(0xe1c3, L"MaterialIcons");

	/// <i class="material-icons md-36">settings_voice</i> &#x2014; material icon named "settings voice".
	static IconData settings_voice = IconData(0xe8c8, L"MaterialIcons");

	/// <i class="material-icons md-36">share</i> &#x2014; material icon named "share".
	static IconData share = IconData(0xe80d, L"MaterialIcons");

	/// <i class="material-icons md-36">shop</i> &#x2014; material icon named "shop".
	static IconData shop = IconData(0xe8c9, L"MaterialIcons");

	/// <i class="material-icons md-36">shop_two</i> &#x2014; material icon named "shop two".
	static IconData shop_two = IconData(0xe8ca, L"MaterialIcons");

	/// <i class="material-icons md-36">shopping_basket</i> &#x2014; material icon named "shopping basket".
	static IconData shopping_basket = IconData(0xe8cb, L"MaterialIcons");

	/// <i class="material-icons md-36">shopping_cart</i> &#x2014; material icon named "shopping cart".
	static IconData shopping_cart = IconData(0xe8cc, L"MaterialIcons");

	/// <i class="material-icons md-36">short_text</i> &#x2014; material icon named "short text".
	static IconData short_text = IconData(0xe261, L"MaterialIcons", true);

	/// <i class="material-icons md-36">show_chart</i> &#x2014; material icon named "show chart".
	static IconData show_chart = IconData(0xe6e1, L"MaterialIcons", true);

	/// <i class="material-icons md-36">shuffle</i> &#x2014; material icon named "shuffle".
	static IconData shuffle = IconData(0xe043, L"MaterialIcons");

	/// <i class="material-icons md-36">shutter_speed</i> &#x2014; material icon named "shutter speed".
	static IconData shutter_speed = IconData(0xe43d, L"MaterialIcons");

	/// <i class="material-icons md-36">signal_cellular_4_bar</i> &#x2014; material icon named "signal cellular 4 bar".
	static IconData signal_cellular_4_bar = IconData(0xe1c8, L"MaterialIcons");

	/// <i class="material-icons md-36">signal_cellular_connected_no_internet_4_bar</i> &#x2014; material icon named "signal cellular connected no internet 4 bar".
	static IconData signal_cellular_connected_no_internet_4_bar = IconData(0xe1cd, L"MaterialIcons");

	/// <i class="material-icons md-36">signal_cellular_no_sim</i> &#x2014; material icon named "signal cellular no sim".
	static IconData signal_cellular_no_sim = IconData(0xe1ce, L"MaterialIcons");

	/// <i class="material-icons md-36">signal_cellular_null</i> &#x2014; material icon named "signal cellular null".
	static IconData signal_cellular_null = IconData(0xe1cf, L"MaterialIcons");

	/// <i class="material-icons md-36">signal_cellular_off</i> &#x2014; material icon named "signal cellular off".
	static IconData signal_cellular_off = IconData(0xe1d0, L"MaterialIcons");

	/// <i class="material-icons md-36">signal_wifi_4_bar</i> &#x2014; material icon named "signal wifi 4 bar".
	static IconData signal_wifi_4_bar = IconData(0xe1d8, L"MaterialIcons");

	/// <i class="material-icons md-36">signal_wifi_4_bar_lock</i> &#x2014; material icon named "signal wifi 4 bar lock".
	static IconData signal_wifi_4_bar_lock = IconData(0xe1d9, L"MaterialIcons");

	/// <i class="material-icons md-36">signal_wifi_off</i> &#x2014; material icon named "signal wifi off".
	static IconData signal_wifi_off = IconData(0xe1da, L"MaterialIcons");

	/// <i class="material-icons md-36">sim_card</i> &#x2014; material icon named "sim card".
	static IconData sim_card = IconData(0xe32b, L"MaterialIcons");

	/// <i class="material-icons md-36">sim_card_alert</i> &#x2014; material icon named "sim card alert".
	static IconData sim_card_alert = IconData(0xe624, L"MaterialIcons");

	/// <i class="material-icons md-36">skip_next</i> &#x2014; material icon named "skip next".
	static IconData skip_next = IconData(0xe044, L"MaterialIcons");

	/// <i class="material-icons md-36">skip_previous</i> &#x2014; material icon named "skip previous".
	static IconData skip_previous = IconData(0xe045, L"MaterialIcons");

	/// <i class="material-icons md-36">slideshow</i> &#x2014; material icon named "slideshow".
	static IconData slideshow = IconData(0xe41b, L"MaterialIcons");

	/// <i class="material-icons md-36">slow_motion_video</i> &#x2014; material icon named "slow motion video".
	static IconData slow_motion_video = IconData(0xe068, L"MaterialIcons");

	/// <i class="material-icons md-36">smartphone</i> &#x2014; material icon named "smartphone".
	static IconData smartphone = IconData(0xe32c, L"MaterialIcons");

	/// <i class="material-icons md-36">smoke_free</i> &#x2014; material icon named "smoke free".
	static IconData smoke_free = IconData(0xeb4a, L"MaterialIcons");

	/// <i class="material-icons md-36">smoking_rooms</i> &#x2014; material icon named "smoking rooms".
	static IconData smoking_rooms = IconData(0xeb4b, L"MaterialIcons");

	/// <i class="material-icons md-36">sms</i> &#x2014; material icon named "sms".
	static IconData sms = IconData(0xe625, L"MaterialIcons");

	/// <i class="material-icons md-36">sms_failed</i> &#x2014; material icon named "sms failed".
	static IconData sms_failed = IconData(0xe626, L"MaterialIcons");

	/// <i class="material-icons md-36">snooze</i> &#x2014; material icon named "snooze".
	static IconData snooze = IconData(0xe046, L"MaterialIcons");

	/// <i class="material-icons md-36">sort</i> &#x2014; material icon named "sort".
	static IconData sort = IconData(0xe164, L"MaterialIcons", true);

	/// <i class="material-icons md-36">sort_by_alpha</i> &#x2014; material icon named "sort by alpha".
	static IconData sort_by_alpha = IconData(0xe053, L"MaterialIcons");

	/// <i class="material-icons md-36">spa</i> &#x2014; material icon named "spa".
	static IconData spa = IconData(0xeb4c, L"MaterialIcons");

	/// <i class="material-icons md-36">space_bar</i> &#x2014; material icon named "space bar".
	static IconData space_bar = IconData(0xe256, L"MaterialIcons");

	/// <i class="material-icons md-36">speaker</i> &#x2014; material icon named "speaker".
	static IconData speaker = IconData(0xe32d, L"MaterialIcons");

	/// <i class="material-icons md-36">speaker_group</i> &#x2014; material icon named "speaker group".
	static IconData speaker_group = IconData(0xe32e, L"MaterialIcons");

	/// <i class="material-icons md-36">speaker_notes</i> &#x2014; material icon named "speaker notes".
	static IconData speaker_notes = IconData(0xe8cd, L"MaterialIcons");

	/// <i class="material-icons md-36">speaker_notes_off</i> &#x2014; material icon named "speaker notes off".
	static IconData speaker_notes_off = IconData(0xe92a, L"MaterialIcons");

	/// <i class="material-icons md-36">speaker_phone</i> &#x2014; material icon named "speaker phone".
	static IconData speaker_phone = IconData(0xe0d2, L"MaterialIcons");

	/// <i class="material-icons md-36">spellcheck</i> &#x2014; material icon named "spellcheck".
	static IconData spellcheck = IconData(0xe8ce, L"MaterialIcons");

	/// <i class="material-icons md-36">star</i> &#x2014; material icon named "star".
	static IconData star = IconData(0xe838, L"MaterialIcons");

	/// <i class="material-icons md-36">star_border</i> &#x2014; material icon named "star border".
	static IconData star_border = IconData(0xe83a, L"MaterialIcons");

	/// <i class="material-icons md-36">star_half</i> &#x2014; material icon named "star half".
	static IconData star_half = IconData(0xe839, L"MaterialIcons", true);

	/// <i class="material-icons md-36">stars</i> &#x2014; material icon named "stars".
	static IconData stars = IconData(0xe8d0, L"MaterialIcons");

	/// <i class="material-icons md-36">stay_current_landscape</i> &#x2014; material icon named "stay current landscape".
	static IconData stay_current_landscape = IconData(0xe0d3, L"MaterialIcons");

	/// <i class="material-icons md-36">stay_current_portrait</i> &#x2014; material icon named "stay current portrait".
	static IconData stay_current_portrait = IconData(0xe0d4, L"MaterialIcons");

	/// <i class="material-icons md-36">stay_primary_landscape</i> &#x2014; material icon named "stay primary landscape".
	static IconData stay_primary_landscape = IconData(0xe0d5, L"MaterialIcons");

	/// <i class="material-icons md-36">stay_primary_portrait</i> &#x2014; material icon named "stay primary portrait".
	static IconData stay_primary_portrait = IconData(0xe0d6, L"MaterialIcons");

	/// <i class="material-icons md-36">stop</i> &#x2014; material icon named "stop".
	static IconData stop = IconData(0xe047, L"MaterialIcons");

	/// <i class="material-icons md-36">stop_screen_share</i> &#x2014; material icon named "stop screen share".
	static IconData stop_screen_share = IconData(0xe0e3, L"MaterialIcons");

	/// <i class="material-icons md-36">storage</i> &#x2014; material icon named "storage".
	static IconData storage = IconData(0xe1db, L"MaterialIcons");

	/// <i class="material-icons md-36">store</i> &#x2014; material icon named "store".
	static IconData store = IconData(0xe8d1, L"MaterialIcons");

	/// <i class="material-icons md-36">store_mall_directory</i> &#x2014; material icon named "store mall directory".
	static IconData store_mall_directory = IconData(0xe563, L"MaterialIcons");

	/// <i class="material-icons md-36">straighten</i> &#x2014; material icon named "straighten".
	static IconData straighten = IconData(0xe41c, L"MaterialIcons");

	/// <i class="material-icons md-36">streetview</i> &#x2014; material icon named "streetview".
	static IconData streetview = IconData(0xe56e, L"MaterialIcons");

	/// <i class="material-icons md-36">strikethrough_s</i> &#x2014; material icon named "strikethrough s".
	static IconData strikethrough_s = IconData(0xe257, L"MaterialIcons");

	/// <i class="material-icons md-36">style</i> &#x2014; material icon named "style".
	static IconData style = IconData(0xe41d, L"MaterialIcons");

	/// <i class="material-icons md-36">subdirectory_arrow_left</i> &#x2014; material icon named "subdirectory arrow left".
	static IconData subdirectory_arrow_left = IconData(0xe5d9, L"MaterialIcons");

	/// <i class="material-icons md-36">subdirectory_arrow_right</i> &#x2014; material icon named "subdirectory arrow right".
	static IconData subdirectory_arrow_right = IconData(0xe5da, L"MaterialIcons");

	/// <i class="material-icons md-36">subject</i> &#x2014; material icon named "subject".
	static IconData subject = IconData(0xe8d2, L"MaterialIcons", true);

	/// <i class="material-icons md-36">subscriptions</i> &#x2014; material icon named "subscriptions".
	static IconData subscriptions = IconData(0xe064, L"MaterialIcons");

	/// <i class="material-icons md-36">subtitles</i> &#x2014; material icon named "subtitles".
	static IconData subtitles = IconData(0xe048, L"MaterialIcons");

	/// <i class="material-icons md-36">subway</i> &#x2014; material icon named "subway".
	static IconData subway = IconData(0xe56f, L"MaterialIcons");

	/// <i class="material-icons md-36">supervised_user_circle</i> &#x2014; material icon named "supervised user circle".
	static IconData supervised_user_circle = IconData(0xe939, L"MaterialIcons");

	/// <i class="material-icons md-36">supervisor_account</i> &#x2014; material icon named "supervisor account".
	static IconData supervisor_account = IconData(0xe8d3, L"MaterialIcons");

	/// <i class="material-icons md-36">surround_sound</i> &#x2014; material icon named "surround sound".
	static IconData surround_sound = IconData(0xe049, L"MaterialIcons");

	/// <i class="material-icons md-36">swap_calls</i> &#x2014; material icon named "swap calls".
	static IconData swap_calls = IconData(0xe0d7, L"MaterialIcons");

	/// <i class="material-icons md-36">swap_horiz</i> &#x2014; material icon named "swap horiz".
	static IconData swap_horiz = IconData(0xe8d4, L"MaterialIcons");

	/// <i class="material-icons md-36">swap_horizontal_circle</i> &#x2014; material icon named "swap horizontal circle".
	static IconData swap_horizontal_circle = IconData(0xe933, L"MaterialIcons");

	/// <i class="material-icons md-36">swap_vert</i> &#x2014; material icon named "swap vert".
	static IconData swap_vert = IconData(0xe8d5, L"MaterialIcons");

	/// <i class="material-icons md-36">swap_vertical_circle</i> &#x2014; material icon named "swap vertical circle".
	static IconData swap_vertical_circle = IconData(0xe8d6, L"MaterialIcons");

	/// <i class="material-icons md-36">switch_camera</i> &#x2014; material icon named "switch camera".
	static IconData switch_camera = IconData(0xe41e, L"MaterialIcons");

	/// <i class="material-icons md-36">switch_video</i> &#x2014; material icon named "switch video".
	static IconData switch_video = IconData(0xe41f, L"MaterialIcons");

	/// <i class="material-icons md-36">sync</i> &#x2014; material icon named "sync".
	static IconData sync = IconData(0xe627, L"MaterialIcons");

	/// <i class="material-icons md-36">sync_disabled</i> &#x2014; material icon named "sync disabled".
	static IconData sync_disabled = IconData(0xe628, L"MaterialIcons");

	/// <i class="material-icons md-36">sync_problem</i> &#x2014; material icon named "sync problem".
	static IconData sync_problem = IconData(0xe629, L"MaterialIcons");

	/// <i class="material-icons md-36">system_update</i> &#x2014; material icon named "system update".
	static IconData system_update = IconData(0xe62a, L"MaterialIcons");

	/// <i class="material-icons md-36">system_update_alt</i> &#x2014; material icon named "system update alt".
	static IconData system_update_alt = IconData(0xe8d7, L"MaterialIcons");

	/// <i class="material-icons md-36">tab</i> &#x2014; material icon named "tab".
	static IconData tab = IconData(0xe8d8, L"MaterialIcons");

	/// <i class="material-icons md-36">tab_unselected</i> &#x2014; material icon named "tab unselected".
	static IconData tab_unselected = IconData(0xe8d9, L"MaterialIcons");

	/// <i class="material-icons md-36">table_chart</i> &#x2014; material icon named "table chart".
	static IconData table_chart = IconData(0xe265, L"MaterialIcons");

	/// <i class="material-icons md-36">tablet</i> &#x2014; material icon named "tablet".
	static IconData tablet = IconData(0xe32f, L"MaterialIcons");

	/// <i class="material-icons md-36">tablet_android</i> &#x2014; material icon named "tablet android".
	static IconData tablet_android = IconData(0xe330, L"MaterialIcons");

	/// <i class="material-icons md-36">tablet_mac</i> &#x2014; material icon named "tablet mac".
	static IconData tablet_mac = IconData(0xe331, L"MaterialIcons");

	/// <i class="material-icons md-36">tag_faces</i> &#x2014; material icon named "tag faces".
	static IconData tag_faces = IconData(0xe420, L"MaterialIcons");

	/// <i class="material-icons md-36">tap_and_play</i> &#x2014; material icon named "tap and play".
	static IconData tap_and_play = IconData(0xe62b, L"MaterialIcons");

	/// <i class="material-icons md-36">terrain</i> &#x2014; material icon named "terrain".
	static IconData terrain = IconData(0xe564, L"MaterialIcons");

	/// <i class="material-icons md-36">text_fields</i> &#x2014; material icon named "text fields".
	static IconData text_fields = IconData(0xe262, L"MaterialIcons");

	/// <i class="material-icons md-36">text_format</i> &#x2014; material icon named "text format".
	static IconData text_format = IconData(0xe165, L"MaterialIcons");

	/// <i class="material-icons md-36">text_rotate_up</i> &#x2014; material icon named "text rotate up".
	static IconData text_rotate_up = IconData(0xe93a, L"MaterialIcons");

	/// <i class="material-icons md-36">text_rotate_vertical</i> &#x2014; material icon named "text rotate vertical".
	static IconData text_rotate_vertical = IconData(0xe93b, L"MaterialIcons");

	/// <i class="material-icons md-36">text_rotation_angledown</i> &#x2014; material icon named "text rotation angledown".
	static IconData text_rotation_angledown = IconData(0xe93c, L"MaterialIcons");

	/// <i class="material-icons md-36">text_rotation_angleup</i> &#x2014; material icon named "text rotation angleup".
	static IconData text_rotation_angleup = IconData(0xe93d, L"MaterialIcons");

	/// <i class="material-icons md-36">text_rotation_down</i> &#x2014; material icon named "text rotation down".
	static IconData text_rotation_down = IconData(0xe93e, L"MaterialIcons");

	/// <i class="material-icons md-36">text_rotation_none</i> &#x2014; material icon named "text rotation none".
	static IconData text_rotation_none = IconData(0xe93f, L"MaterialIcons");

	/// <i class="material-icons md-36">textsms</i> &#x2014; material icon named "textsms".
	static IconData textsms = IconData(0xe0d8, L"MaterialIcons");

	/// <i class="material-icons md-36">texture</i> &#x2014; material icon named "texture".
	static IconData texture = IconData(0xe421, L"MaterialIcons");

	/// <i class="material-icons md-36">theaters</i> &#x2014; material icon named "theaters".
	static IconData theaters = IconData(0xe8da, L"MaterialIcons");

	/// <i class="material-icons md-36">thumb_down</i> &#x2014; material icon named "thumb down".
	static IconData thumb_down = IconData(0xe8db, L"MaterialIcons");

	/// <i class="material-icons md-36">thumb_up</i> &#x2014; material icon named "thumb up".
	static IconData thumb_up = IconData(0xe8dc, L"MaterialIcons");

	/// <i class="material-icons md-36">thumbs_up_down</i> &#x2014; material icon named "thumbs up down".
	static IconData thumbs_up_down = IconData(0xe8dd, L"MaterialIcons");

	/// <i class="material-icons md-36">time_to_leave</i> &#x2014; material icon named "time to leave".
	static IconData time_to_leave = IconData(0xe62c, L"MaterialIcons");

	/// <i class="material-icons md-36">timelapse</i> &#x2014; material icon named "timelapse".
	static IconData timelapse = IconData(0xe422, L"MaterialIcons");

	/// <i class="material-icons md-36">timeline</i> &#x2014; material icon named "timeline".
	static IconData timeline = IconData(0xe922, L"MaterialIcons");

	/// <i class="material-icons md-36">timer</i> &#x2014; material icon named "timer".
	static IconData timer = IconData(0xe425, L"MaterialIcons");

	/// <i class="material-icons md-36">timer_10</i> &#x2014; material icon named "timer 10".
	static IconData timer_10 = IconData(0xe423, L"MaterialIcons");

	/// <i class="material-icons md-36">timer_3</i> &#x2014; material icon named "timer 3".
	static IconData timer_3 = IconData(0xe424, L"MaterialIcons");

	/// <i class="material-icons md-36">timer_off</i> &#x2014; material icon named "timer off".
	static IconData timer_off = IconData(0xe426, L"MaterialIcons");

	/// <i class="material-icons md-36">title</i> &#x2014; material icon named "title".
	static IconData title = IconData(0xe264, L"MaterialIcons");

	/// <i class="material-icons md-36">toc</i> &#x2014; material icon named "toc".
	static IconData toc = IconData(0xe8de, L"MaterialIcons", true);

	/// <i class="material-icons md-36">today</i> &#x2014; material icon named "today".
	static IconData today = IconData(0xe8df, L"MaterialIcons");

	/// <i class="material-icons md-36">toll</i> &#x2014; material icon named "toll".
	static IconData toll = IconData(0xe8e0, L"MaterialIcons");

	/// <i class="material-icons md-36">tonality</i> &#x2014; material icon named "tonality".
	static IconData tonality = IconData(0xe427, L"MaterialIcons");

	/// <i class="material-icons md-36">touch_app</i> &#x2014; material icon named "touch app".
	static IconData touch_app = IconData(0xe913, L"MaterialIcons");

	/// <i class="material-icons md-36">toys</i> &#x2014; material icon named "toys".
	static IconData toys = IconData(0xe332, L"MaterialIcons");

	/// <i class="material-icons md-36">track_changes</i> &#x2014; material icon named "track changes".
	static IconData track_changes = IconData(0xe8e1, L"MaterialIcons");

	/// <i class="material-icons md-36">traffic</i> &#x2014; material icon named "traffic".
	static IconData traffic = IconData(0xe565, L"MaterialIcons");

	/// <i class="material-icons md-36">train</i> &#x2014; material icon named "train".
	static IconData train = IconData(0xe570, L"MaterialIcons");

	/// <i class="material-icons md-36">tram</i> &#x2014; material icon named "tram".
	static IconData tram = IconData(0xe571, L"MaterialIcons");

	/// <i class="material-icons md-36">transfer_within_a_station</i> &#x2014; material icon named "transfer within a station".
	static IconData transfer_within_a_station = IconData(0xe572, L"MaterialIcons");

	/// <i class="material-icons md-36">transform</i> &#x2014; material icon named "transform".
	static IconData transform = IconData(0xe428, L"MaterialIcons");

	/// <i class="material-icons md-36">transit_enterexit</i> &#x2014; material icon named "transit enterexit".
	static IconData transit_enterexit = IconData(0xe579, L"MaterialIcons");

	/// <i class="material-icons md-36">translate</i> &#x2014; material icon named "translate".
	static IconData translate = IconData(0xe8e2, L"MaterialIcons");

	/// <i class="material-icons md-36">trending_down</i> &#x2014; material icon named "trending down".
	static IconData trending_down = IconData(0xe8e3, L"MaterialIcons", true);

	/// <i class="material-icons md-36">trending_flat</i> &#x2014; material icon named "trending flat".
	static IconData trending_flat = IconData(0xe8e4, L"MaterialIcons", true);

	/// <i class="material-icons md-36">trending_up</i> &#x2014; material icon named "trending up".
	static IconData trending_up = IconData(0xe8e5, L"MaterialIcons", true);

	/// <i class="material-icons md-36">trip_origin</i> &#x2014; material icon named "trip origin".
	static IconData trip_origin = IconData(0xe57b, L"MaterialIcons");

	/// <i class="material-icons md-36">tune</i> &#x2014; material icon named "tune".
	static IconData tune = IconData(0xe429, L"MaterialIcons");

	/// <i class="material-icons md-36">turned_in</i> &#x2014; material icon named "turned in".
	static IconData turned_in = IconData(0xe8e6, L"MaterialIcons");

	/// <i class="material-icons md-36">turned_in_not</i> &#x2014; material icon named "turned in not".
	static IconData turned_in_not = IconData(0xe8e7, L"MaterialIcons");

	/// <i class="material-icons md-36">tv</i> &#x2014; material icon named "tv".
	static IconData tv = IconData(0xe333, L"MaterialIcons");

	/// <i class="material-icons md-36">unarchive</i> &#x2014; material icon named "unarchive".
	static IconData unarchive = IconData(0xe169, L"MaterialIcons");

	/// <i class="material-icons md-36">undo</i> &#x2014; material icon named "undo".
	static IconData undo = IconData(0xe166, L"MaterialIcons", true);

	/// <i class="material-icons md-36">unfold_less</i> &#x2014; material icon named "unfold less".
	static IconData unfold_less = IconData(0xe5d6, L"MaterialIcons");

	/// <i class="material-icons md-36">unfold_more</i> &#x2014; material icon named "unfold more".
	static IconData unfold_more = IconData(0xe5d7, L"MaterialIcons");

	/// <i class="material-icons md-36">update</i> &#x2014; material icon named "update".
	static IconData update = IconData(0xe923, L"MaterialIcons");

	/// <i class="material-icons md-36">usb</i> &#x2014; material icon named "usb".
	static IconData usb = IconData(0xe1e0, L"MaterialIcons");

	/// <i class="material-icons md-36">verified_user</i> &#x2014; material icon named "verified user".
	static IconData verified_user = IconData(0xe8e8, L"MaterialIcons");

	/// <i class="material-icons md-36">vertical_align_bottom</i> &#x2014; material icon named "vertical align bottom".
	static IconData vertical_align_bottom = IconData(0xe258, L"MaterialIcons");

	/// <i class="material-icons md-36">vertical_align_center</i> &#x2014; material icon named "vertical align center".
	static IconData vertical_align_center = IconData(0xe259, L"MaterialIcons");

	/// <i class="material-icons md-36">vertical_align_top</i> &#x2014; material icon named "vertical align top".
	static IconData vertical_align_top = IconData(0xe25a, L"MaterialIcons");

	/// <i class="material-icons md-36">vibration</i> &#x2014; material icon named "vibration".
	static IconData vibration = IconData(0xe62d, L"MaterialIcons");

	/// <i class="material-icons md-36">video_call</i> &#x2014; material icon named "video call".
	static IconData video_call = IconData(0xe070, L"MaterialIcons");

	/// <i class="material-icons md-36">video_label</i> &#x2014; material icon named "video label".
	static IconData video_label = IconData(0xe071, L"MaterialIcons");

	/// <i class="material-icons md-36">video_library</i> &#x2014; material icon named "video library".
	static IconData video_library = IconData(0xe04a, L"MaterialIcons");

	/// <i class="material-icons md-36">videocam</i> &#x2014; material icon named "videocam".
	static IconData videocam = IconData(0xe04b, L"MaterialIcons");

	/// <i class="material-icons md-36">videocam_off</i> &#x2014; material icon named "videocam off".
	static IconData videocam_off = IconData(0xe04c, L"MaterialIcons");

	/// <i class="material-icons md-36">videogame_asset</i> &#x2014; material icon named "videogame asset".
	static IconData videogame_asset = IconData(0xe338, L"MaterialIcons");

	/// <i class="material-icons md-36">view_agenda</i> &#x2014; material icon named "view agenda".
	static IconData view_agenda = IconData(0xe8e9, L"MaterialIcons");

	/// <i class="material-icons md-36">view_array</i> &#x2014; material icon named "view array".
	static IconData view_array = IconData(0xe8ea, L"MaterialIcons");

	/// <i class="material-icons md-36">view_carousel</i> &#x2014; material icon named "view carousel".
	static IconData view_carousel = IconData(0xe8eb, L"MaterialIcons");

	/// <i class="material-icons md-36">view_column</i> &#x2014; material icon named "view column".
	static IconData view_column = IconData(0xe8ec, L"MaterialIcons");

	/// <i class="material-icons md-36">view_comfy</i> &#x2014; material icon named "view comfy".
	static IconData view_comfy = IconData(0xe42a, L"MaterialIcons");

	/// <i class="material-icons md-36">view_compact</i> &#x2014; material icon named "view compact".
	static IconData view_compact = IconData(0xe42b, L"MaterialIcons");

	/// <i class="material-icons md-36">view_day</i> &#x2014; material icon named "view day".
	static IconData view_day = IconData(0xe8ed, L"MaterialIcons");

	/// <i class="material-icons md-36">view_headline</i> &#x2014; material icon named "view headline".
	static IconData view_headline = IconData(0xe8ee, L"MaterialIcons");

	/// <i class="material-icons md-36">view_list</i> &#x2014; material icon named "view list".
	static IconData view_list = IconData(0xe8ef, L"MaterialIcons", true);

	/// <i class="material-icons md-36">view_module</i> &#x2014; material icon named "view module".
	static IconData view_module = IconData(0xe8f0, L"MaterialIcons");

	/// <i class="material-icons md-36">view_quilt</i> &#x2014; material icon named "view quilt".
	static IconData view_quilt = IconData(0xe8f1, L"MaterialIcons", true);

	/// <i class="material-icons md-36">view_stream</i> &#x2014; material icon named "view stream".
	static IconData view_stream = IconData(0xe8f2, L"MaterialIcons");

	/// <i class="material-icons md-36">view_week</i> &#x2014; material icon named "view week".
	static IconData view_week = IconData(0xe8f3, L"MaterialIcons");

	/// <i class="material-icons md-36">vignette</i> &#x2014; material icon named "vignette".
	static IconData vignette = IconData(0xe435, L"MaterialIcons");

	/// <i class="material-icons md-36">visibility</i> &#x2014; material icon named "visibility".
	static IconData visibility = IconData(0xe8f4, L"MaterialIcons");

	/// <i class="material-icons md-36">visibility_off</i> &#x2014; material icon named "visibility off".
	static IconData visibility_off = IconData(0xe8f5, L"MaterialIcons");

	/// <i class="material-icons md-36">voice_chat</i> &#x2014; material icon named "voice chat".
	static IconData voice_chat = IconData(0xe62e, L"MaterialIcons");

	/// <i class="material-icons md-36">voicemail</i> &#x2014; material icon named "voicemail".
	static IconData voicemail = IconData(0xe0d9, L"MaterialIcons");

	/// <i class="material-icons md-36">volume_down</i> &#x2014; material icon named "volume down".
	static IconData volume_down = IconData(0xe04d, L"MaterialIcons");

	/// <i class="material-icons md-36">volume_mute</i> &#x2014; material icon named "volume mute".
	static IconData volume_mute = IconData(0xe04e, L"MaterialIcons");

	/// <i class="material-icons md-36">volume_off</i> &#x2014; material icon named "volume off".
	static IconData volume_off = IconData(0xe04f, L"MaterialIcons");

	/// <i class="material-icons md-36">volume_up</i> &#x2014; material icon named "volume up".
	static IconData volume_up = IconData(0xe050, L"MaterialIcons");

	/// <i class="material-icons md-36">vpn_key</i> &#x2014; material icon named "vpn key".
	static IconData vpn_key = IconData(0xe0da, L"MaterialIcons");

	/// <i class="material-icons md-36">vpn_lock</i> &#x2014; material icon named "vpn lock".
	static IconData vpn_lock = IconData(0xe62f, L"MaterialIcons");

	/// <i class="material-icons md-36">wallpaper</i> &#x2014; material icon named "wallpaper".
	static IconData wallpaper = IconData(0xe1bc, L"MaterialIcons");

	/// <i class="material-icons md-36">warning</i> &#x2014; material icon named "warning".
	static IconData warning = IconData(0xe002, L"MaterialIcons");

	/// <i class="material-icons md-36">watch</i> &#x2014; material icon named "watch".
	static IconData watch = IconData(0xe334, L"MaterialIcons");

	/// <i class="material-icons md-36">watch_later</i> &#x2014; material icon named "watch later".
	static IconData watch_later = IconData(0xe924, L"MaterialIcons");

	/// <i class="material-icons md-36">wb_auto</i> &#x2014; material icon named "wb auto".
	static IconData wb_auto = IconData(0xe42c, L"MaterialIcons");

	/// <i class="material-icons md-36">wb_cloudy</i> &#x2014; material icon named "wb cloudy".
	static IconData wb_cloudy = IconData(0xe42d, L"MaterialIcons");

	/// <i class="material-icons md-36">wb_incandescent</i> &#x2014; material icon named "wb incandescent".
	static IconData wb_incandescent = IconData(0xe42e, L"MaterialIcons");

	/// <i class="material-icons md-36">wb_iridescent</i> &#x2014; material icon named "wb iridescent".
	static IconData wb_iridescent = IconData(0xe436, L"MaterialIcons");

	/// <i class="material-icons md-36">wb_sunny</i> &#x2014; material icon named "wb sunny".
	static IconData wb_sunny = IconData(0xe430, L"MaterialIcons");

	/// <i class="material-icons md-36">wc</i> &#x2014; material icon named "wc".
	static IconData wc = IconData(0xe63d, L"MaterialIcons");

	/// <i class="material-icons md-36">web</i> &#x2014; material icon named "web".
	static IconData web = IconData(0xe051, L"MaterialIcons");

	/// <i class="material-icons md-36">web_asset</i> &#x2014; material icon named "web asset".
	static IconData web_asset = IconData(0xe069, L"MaterialIcons");

	/// <i class="material-icons md-36">weekend</i> &#x2014; material icon named "weekend".
	static IconData weekend = IconData(0xe16b, L"MaterialIcons");

	/// <i class="material-icons md-36">whatshot</i> &#x2014; material icon named "whatshot".
	static IconData whatshot = IconData(0xe80e, L"MaterialIcons");

	/// <i class="material-icons md-36">CWidgets</i> &#x2014; material icon named "CWidgets".
	static IconData CWidgets = IconData(0xe1bd, L"MaterialIcons");

	/// <i class="material-icons md-36">wifi</i> &#x2014; material icon named "wifi".
	static IconData wifi = IconData(0xe63e, L"MaterialIcons");

	/// <i class="material-icons md-36">wifi_lock</i> &#x2014; material icon named "wifi lock".
	static IconData wifi_lock = IconData(0xe1e1, L"MaterialIcons");

	/// <i class="material-icons md-36">wifi_tethering</i> &#x2014; material icon named "wifi tethering".
	static IconData wifi_tethering = IconData(0xe1e2, L"MaterialIcons");

	/// <i class="material-icons md-36">work</i> &#x2014; material icon named "work".
	static IconData work = IconData(0xe8f9, L"MaterialIcons");

	/// <i class="material-icons md-36">wrap_text</i> &#x2014; material icon named "wrap text".
	static IconData wrap_text = IconData(0xe25b, L"MaterialIcons", true);

	/// <i class="material-icons md-36">youtube_searched_for</i> &#x2014; material icon named "youtube searched for".
	static IconData youtube_searched_for = IconData(0xe8fa, L"MaterialIcons");

	/// <i class="material-icons md-36">zoom_in</i> &#x2014; material icon named "zoom in".
	static IconData zoom_in = IconData(0xe8ff, L"MaterialIcons");

	/// <i class="material-icons md-36">zoom_out</i> &#x2014; material icon named "zoom out".
	static IconData zoom_out = IconData(0xe900, L"MaterialIcons");

	/// <i class="material-icons md-36">zoom_out_map</i> &#x2014; material icon named "zoom out map".
	static IconData zoom_out_map = IconData(0xe56b, L"MaterialIcons");

	static IconData fit_page = IconData(0xe9a6, L"MaterialIcons");
	static IconData fit_width = IconData(0xe9a7, L"MaterialIcons");
	static IconData zoom_to_fit = IconData(0xf649, L"MaterialIcons");
	static IconData seperator = IconData(0x124, L"MaterialIcons");

	static IconData align_horizontal_center = IconData(0xe00f, L"MaterialIcons");
	static IconData align_horizontal_left = IconData(0xe00d, L"MaterialIcons");
	static IconData 	align_horizontal_right = IconData(0xe010, L"MaterialIcons");
	static IconData 	align_vertical_bottom = IconData(0xe015, L"MaterialIcons");
	static IconData 	align_vertical_center = IconData(0xe011, L"MaterialIcons");
	static IconData align_vertical_top = IconData(0xe00c, L"MaterialIcons");

	// END GENERATED
};


#endif