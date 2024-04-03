function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "untitled"};
	this.sidHashMap["untitled"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<Root>/In1"] = {sid: "untitled:6"};
	this.sidHashMap["untitled:6"] = {rtwname: "<Root>/In1"};
	this.rtwnameHashMap["<Root>/In2"] = {sid: "untitled:7"};
	this.sidHashMap["untitled:7"] = {rtwname: "<Root>/In2"};
	this.rtwnameHashMap["<Root>/Multiply"] = {sid: "untitled:8"};
	this.sidHashMap["untitled:8"] = {rtwname: "<Root>/Multiply"};
	this.rtwnameHashMap["<Root>/Out1"] = {sid: "untitled:9"};
	this.sidHashMap["untitled:9"] = {rtwname: "<Root>/Out1"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
