
 import 'package:flutter/material.dart';
 import 'package:provider/provider.dart';
 import 'package:ui/ui.dart';
 import 'package:base/base.dart';
 import 'AccAccount_model.dart';
 class AccAccountPage extends StatefulWidget {
   @override
   _AccAccountPageState createState() => _AccAccountPageState();
 }
 class _AccAccountPageState extends State<AccAccountPage> {
   

	Widget wID;

	Widget wName;

	Widget wActive;

	Widget wSave;

	Widget wEnglishName;

	Widget wProperty;

	Widget wParentAcc;;
   @override
   void initState() {
     // TODO: implement initState
     AccAccountModel model = context.read<AccAccountModel>();
     model.onGet(context);
     super.initState();
   }
   void initView(BuildContext context) {
     AccAccountModel model = context.watch<AccAccountModel>();
     
	wID = TextEditField(
	controller: model.cID, 
	caption: 'ID', 
	enabled: true, 
	type: InputField.text, );
	wName = TextEditField(
	controller: model.cName, 
	caption: '', 
	enabled: true, 
	type: InputField.text, );
	wActive = CheckBoxField(
	caption: 'Active', 
	enabled: true, );
	wSave = Button(
	caption: '&Save', 
	enabled: true, 
	icon: Icon(Icons.save), 
	onPressed: (){},);
	wEnglishName = TextEditField(
	controller: model.cEnglishName, 
	caption: '', 
	enabled: true, 
	type: InputField.text, );
	wProperty = SelectField(
	controller: model.cProperty, 
	caption: '', 
	enabled: true, 
	url: 'api/property', 
	onChanged:(value){},);
	wParentAcc = SelectField(
	controller: model.cParentAcc, 
	caption: 'Parent Acc', 
	enabled: true, 
	url: 'api/parentacc', 
	onChanged:(value){},);    
   }
   @override
   Widget build(BuildContext context) {
     AccAccountModel model = context.watch<AccAccountModel>();
     initView(context);
     return Scaffold(
       appBar: AppBar(
         title: Text(''),
         actions: [
           FlatButton(
               onPressed: () {
                 model.onSave(context);
               },
               child: Text('SAVE', style: TextStyle(color: Colors.white)))
         ],
       ),
       body: SingleChildScrollView(
         padding: EdgeInsets.all(20),
         child: Column(
           children: [
	wID,
	wName,
	wActive,
	wSave,
	wEnglishName,
	wProperty,
	wParentAcc],
         ),
       ),
     );
   }
 }