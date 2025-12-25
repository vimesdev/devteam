import 'package:flutter/material.dart';
import 'package:base/base.dart';
import 'package:ui/ui.dart';
//////////////////////////////
//class Data
//////////////////////////////
 ////////////////////////////// //class Data //////////////////////////////
 class AccAccountData {
 	
	String iD;
	String name;
	bool active;
	String englishName;
	String property;
	String parentAcc;
 	AccAccountData({
		this.iD,
		this.name,
		this.active,
		this.save,
		this.englishName,
		this.property,
		this.parentAcc});
 	factory AccAccountData.fromJson(Map<String, dynamic> json) {
 		return AccAccountData(
		iD:json['iD']??'',
		name:json['name']??'',
		active:json['active']??false,
		save:json['save']??'',
		englishName:json['englishName']??'',
		property:json['property']??'',
		parentAcc:json['parentAcc']??'');
   }
 	Map<String, dynamic> toJson() {
 		return {
		'iD': iD,
		'name': name,
		'active': active,
		'save': save,
		'englishName': englishName,
		'property': property,
		'parentAcc': parentAcc};
 	}
 }
//////////////////////////////
//class Model
//////////////////////////////
class AccAccountModel extends ChangeNotifier {
   
   String uid = '';
   ModelState state = ModelState();
   AccAccountData data = AccAccountData();
   
		TextEditingController cID=TextEditingController();
		TextEditingController cName=TextEditingController();
		TextEditingController cActive=TextEditingController();
		TextEditingController cEnglishName=TextEditingController();
		TextEditingController cProperty=TextEditingController();
		TextEditingController cParentAcc=TextEditingController();
   void init() {}
   void updateData(bool save) {
     if (save) {
       
		data.iD = cID.text;
		data.name = cName.text;
		data.englishName = cEnglishName.text;
     } else {
       
		cID.text = data.iD;
		cName.text = data.name;
		cEnglishName.text = data.englishName;
       notifyListeners();
     }
   }
   void onGet(BuildContext context) async {
     var res = await Network.instance.get('unc', params: {'uid': uid});
     int ret = res['ret'];
     if (ret < 0) {
       String error = res['error'];
       throw error;
     }
     var list = res['data'] as List;
     if (list.length > 0) {
       data = AccAccountData.fromJson(list[0]);
       updateData(false);
       
     }
   }
   Future<int> onPost(BuildContext context) async {
     updateData(true);
     var res = await Network.instance
         .post('unc', params: {'uid': uid}, body: data.toJson());
     int ret = res['ret'];
     if (ret < 0) {
       String error = res['error'];
       throw error;
     }
     return ret;
   }
   Future<int> onPut(BuildContext context) async {
     updateData(true);
     var res = await Network.instance
         .put('unc', params: {'uid': uid}, body: data.toJson());
     int ret = res['ret'];
     if (ret < 0) {
       String error = res['error'];
       throw error;
     }
     return ret;
   }
   Future<int> onDelete(BuildContext context) async {
     updateData(true);
     var res = await Network.instance.delete('unc', params: {'uid': uid});
     int ret = res['ret'];
     if (ret < 0) {
       String error = res['error'];
       throw error;
     }
     return ret;
   }
 }